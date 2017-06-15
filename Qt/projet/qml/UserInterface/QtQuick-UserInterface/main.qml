import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.2


ApplicationWindow {
    id: root
    visible: true
    width: 800
    height: 800
    title: qsTr("User Interface")

    property int indexRow
    property bool b_BDDwasModified: false
    property var appWin: mainForm


    onClosing: {
        // pop up fermeture windows
        if(b_BDDwasModified == true)
        {
            messageDialogSave.show("voulez-vous sauvegarder la BDD ?")

        }
        else
        {
            Qt.quit()
        }
    }

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
                MenuItem {
                    text: qsTr("&Open")
                    onTriggered: {

                        //console.log("Open action triggered");

                        // ouverture du fichier Candidat
                        fsfile.openFile("ListCandidat.txt", 1);

                        // suppresision des candidat courant
                        appCore.deleteAllCandidat();

                        // chargement du contenu
                        appCore.loadBDD(fsfile.readFile());


                    }
                }
                MenuItem {
                    text: qsTr("Exit")
                    onTriggered: Qt.quit();
                }
            }
        }


    MainForm {
        id: mainForm

        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        buttonAdd.onClicked: {
            if(textFieldFirstName.text != "" && textFieldName.text != "" && comboBoxAge.currentText != "-" && textFielProfil.text != ""){
               appCore.addCandidat(textFieldName.text, textFieldFirstName.text, comboBoxAge.currentText, textFielProfil.text, comboBoxSexe.currentText)

                //console.log('rowCount: ' + appCore.candidatModel.rowCount())
                b_BDDwasModified = true;

            }
            else{
                messageDialog.show("Attention renseignement vide")
            }

        }

        buttonSave.onClicked: {
            // sauvegarde de la nouvelle List
            appCore.saveBDD();

            // reinitialisation du boolean de modification
            b_BDDwasModified = false;

        }


        buttonDelete.onClicked: {

            indexRow = tableView.currentRow;

            messageDialogDelete.show("Suppression de l'element ?")



        }

        buttonExit.onClicked: {

            if(b_BDDwasModified == true)
            {
                messageDialogSave.show("voulez-vous sauvegarder la BDD ?")
            }
            else
            {
                Qt.quit()
            }

        }



        buttonModify.onClicked: {

            if(tableView.currentRow >= 0)
            {
                var component = Qt.createComponent("WindowModify.qml")
                var window    = component.createObject(root)

                window.currentIndexRow = tableView.currentRow;
                window.textFieldModify_Nom = appCore.getPropertyOfCandidat(tableView.currentRow, 0);
                window.textFieldModify_Prenom = appCore.getPropertyOfCandidat(tableView.currentRow, 1);
                window.textFieldModify_Age = appCore.getPropertyOfCandidat(tableView.currentRow, 2);
                window.textFieldModify_Profil = appCore.getPropertyOfCandidat(tableView.currentRow, 3);

                if(appCore.getPropertyOfCandidat(tableView.currentRow, 4) == "F")
                {
                    window.comboBoxModifySexe.__selectNextItem();
                }

                window.show()

                b_BDDwasModified = true;
            }
            else
            {
                console.log("warning aucun élements selectionné !")
            }

        }


        buttonFind.onClicked: {

            var component = Qt.createComponent("WindowFind.qml")
            var window    = component.createObject(root)

            window.show()

            tableView.selection.deselect(tableView.currentRow);


        }


    }

    MessageDialog {
        id: messageDialog
        title: qsTr("Warning")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }


    MessageDialog{
        id: messageDialogDelete
        title: qsTr("Delete element")
        standardButtons: StandardButton.Yes | StandardButton.No | StandardButton.YesToAll | StandardButton.Abort
        onButtonClicked: { }

        onYes: {
            console.log("on yes function from messDialogDelete")

            if(clickedButton == StandardButton.YesToAll)
            {
                appCore.deleteAllCandidat();
            }
            else
            {
                appCore.deleteCandidat(indexRow);
            }

            b_BDDwasModified = true;
        }

        onNo:{
            // nothing
        }

        onRejected: {
            //nothing
        }


        function show(caption){
            messageDialogDelete.text = caption;
            messageDialogDelete.open();
        }
    }


    MessageDialog{
        id: messageDialogSave
        title: qsTr("Save BDD")
        standardButtons: StandardButton.Yes | StandardButton.No | StandardButton.Abort

        onButtonClicked: { }

        onYes : {
            console.log("on yes function from messDialogSave")
            appCore.saveBDD();

            Qt.quit();
        }

        onNo : {
            Qt.quit()
        }

        onRejected: {
            //nothing
        }

        function show(caption){
            messageDialogSave.text = caption;
            messageDialogSave.open();
        }


    }





}
