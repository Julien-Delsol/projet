import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.2

ApplicationWindow {
    id: root3
    width: 480; height: 480
    title: qsTr("Find Candidate")

    property alias textFieldFind_Nom: textFieldFind_Nom.text
    property alias textFieldFind_Prenom: textFieldFind_Prenom.text
    property alias textFieldFind_Profil: textFieldFind_Profil.text
    property alias buttonFind_search: buttonFind_search

    property int result: 0

    property int selectResultSearch:0

    TextField {
        id: textFieldFind_Nom
        x: 89
        y: 13
        width: 181
        height: 20
        placeholderText: qsTr("")
        text: qsTr("")
    }

    TextField {
        id: textFieldFind_Prenom
        x: 89
        y: 49
        width: 181
        height: 20
        placeholderText: qsTr("")
        text: qsTr("")
    }

    TextField {
        id: textFieldFind_Profil
        x: 89
        y: 86
        width: 181
        height: 20
        placeholderText: qsTr("")
        text: qsTr("")
    }

    Label {
        id: labelfind_Nom
        x: 6
        y: 13
        width: 60
        height: 20
        text: qsTr("Nom :")
        font.pointSize: 12
    }

    Label {
        id: labelfind_Prenom
        x: 6
        y: 49
        width: 60
        height: 20
        text: qsTr("Prenom :")
        font.pointSize: 12
    }

    Label {
        id: labelfind_Profil
        x: 6
        y: 86
        width: 60
        height: 20
        text: qsTr("Profil :")
        font.pointSize: 12
    }

    Label {
        id: labelfind_Resultat
        x: 6
        y: 143
        width: 60
        height: 20
        text: qsTr("Resultat :")
        font.pointSize: 12
    }

    Text {
        id: textResult
        x: 89
        y: 143
        width: 96
        height: 20
        text: qsTr("...")
        font.pixelSize: 14
    }

    Button {
        id: buttonFind_go
        x: 330
        y: 172
        width: 56
        height: 23
        text: qsTr("Go")
        onClicked: {
            // recuperation de l'index du candidat selectionné

            if(textFieldFind_Nom.text != "" || textFieldFind_Prenom.text != "" || textFieldFind_Profil.text != "" )
            {

                //TODO : id candidat
               result = appCore.getIDsearchCandidat(tableViewFind.currentRow);

                console.log("ID du candidat recherché : " + result);

                // on selectionne le resultat de la recherche dans le contenu bdd
                appWin.tableView.selection.select(result);

                // on supprime le tableau
                appCore.deleteAllListSearchCandidat();

                // fermeture de la fenetre
                root3.close();
            }
            else
            {
                console.log("attention : aucune information renseigné !")

            }
        }
    }

    Button {
        id: buttonfind_cancel
        x: 400
        y: 172
        width: 56
        height: 23
        text: qsTr("Cancel")
        onClicked: {

            // on supprime le tableau
            appCore.deleteAllListSearchCandidat();

            // fermeture de la fenetre
            root3.close();
        }
    }



    TableView {
        id: tableViewFind
        x: 9
        y: 213
        width: 463
        height: 240
        horizontalScrollBarPolicy: 0
        model: appCore.candidatSearchModel

        TableViewColumn {
            role: "nom"
            title: "Nom"
            width: tableViewFind.width/3
            delegate: Text {
                text: styleData.value

            }
        }

        TableViewColumn {
            role: "prenom"
            title: "Prenom"
            width: tableViewFind.width/3
            delegate: Text {
                text: styleData.value

            }
        }

//        TableViewColumn {
//            role: "age"
//            title: "Age"
//            width: tableViewFind.width/5

//            delegate: Text {
//                horizontalAlignment: Text.AlignHCenter
//                text: styleData.value
//            }
//        }

        TableViewColumn {
            role: "profil"
            title: "Profil"
            width: tableViewFind.width/3
            delegate: Text {
                text: styleData.value

            }
        }

//        TableViewColumn {
//            role: "sexe"
//            title: "Sexe"
//            width: tableViewFind.width/5
//            delegate: Text {
//                horizontalAlignment: Text.AlignHCenter
//                text: styleData.value
//            }
//        }
    }

    Button {
        id: buttonFind_search
        x: 257
        y: 172
        width: 56
        height: 23
        text: qsTr("Search...")
        onClicked: {
            console.log("from button search clicked ! ")
            result = 0

            // on supprime le tableau
            appCore.deleteAllListSearchCandidat();

            // print resultat
            result = appCore.searchCandidat(textFieldFind_Nom.text, textFieldFind_Prenom.text, textFieldFind_Profil.text);

            if(result > 0)
            {
                textResult.text = result + " candidat(s) trouvé(s)";
            }
            else
            {
                textResult.text = "aucun candidat(s) trouvé(s)";
            }
        }
    }


}
