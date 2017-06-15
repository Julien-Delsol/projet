import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.2

ApplicationWindow {
    id: root2
    width: 640; height: 320
    title: qsTr("Modify Candidate")


    property alias comboBoxModifySexe: comboBoxModifySexe
    property alias textFieldModify_Profil: textFieldModify_Profil.text
    property alias textFieldModify_Age: textFieldModify_Age.text
    property alias textFieldModify_Nom: textFieldModify_Nom.text
    property alias textFieldModify_Prenom: textFieldModify_Prenom.text

    property int currentIndexRow
    property alias buttonCancel: buttonCancel
    property alias buttonOK: buttonOK


//    Text {
//        anchors.centerIn: parent
//        text: qsTr("")
//        anchors.verticalCenterOffset: -112
//        anchors.horizontalCenterOffset: 209
//    }

    Button {
        id: buttonOK
        x: 445
        y: 280
        text: qsTr("OK")
        onClicked: {

            console.log("on clicked OK button of Windows Modify")

            console.log("valeur nom : " + textFieldModify_Nom.text)
            console.log("valeur prenom : " + textFieldModify_Prenom.text)
            console.log("valeur age : " + textFieldModify_Age.text)
            console.log("valeur profil : " + textFieldModify_Profil.text)

            // on modifie les propriétés du candidat selectionné
            appCore.setPropertyOfCandidat(currentIndexRow, 0, textFieldModify_Nom.text);
            appCore.setPropertyOfCandidat(currentIndexRow, 1, textFieldModify_Prenom.text);
            appCore.setPropertyOfCandidat(currentIndexRow, 2, textFieldModify_Age.text);
            appCore.setPropertyOfCandidat(currentIndexRow, 3, textFieldModify_Profil.text);
            appCore.setPropertyOfCandidat(currentIndexRow, 4, comboBoxModifySexe.currentText);


            root2.close()
        }
    }

    Button {
        id: buttonCancel
        x: 552
        y: 280
        text: qsTr("Cancel")
        onClicked: {
             root2.close()
        }
    }

    TextField {
        id: textFieldModify_Nom
        x: 89
        y: 28
        width: 181
        height: 20
        placeholderText: qsTr("")
        text: ""

    }

    TextField {
        id: textFieldModify_Prenom
        x: 89
        y: 67
        width: 181
        height: 20
        placeholderText: qsTr("")
        text: qsTr("")
    }

    TextField {
        id: textFieldModify_Age
        x: 89
        y: 114
        width: 38
        height: 20
        placeholderText: qsTr("")
        text: qsTr("")
    }

    TextField {
        id: textFieldModify_Profil
        x: 89
        y: 163
        width: 341
        height: 20
        placeholderText: qsTr("")
        text: qsTr("")
    }

    Label {
        id: labelModify_Nom
        x: 11
        y: 28
        text: qsTr("Nom :")
        font.pointSize: 12
    }

    Label {
        id: labelModify_Prenom
        x: 11
        y: 67
        text: qsTr("Prenom :")
        font.pointSize: 12
    }

    Label {
        id: labelModify_Age
        x: 11
        y: 114
        text: qsTr("Age :")
        font.pointSize: 12
    }

    Label {
        id: labelModify_Profil
        x: 11
        y: 163
        text: qsTr("Profil :")
        font.pointSize: 12
    }

    Label {
        id: labelModify_Sexe
        x: 11
        y: 205
        text: qsTr("Sexe :")
        font.pointSize: 12
    }



    ComboBox {
        id: comboBoxModifySexe
        x: 89
        y: 205
        width: 38
        height: 20
        activeFocusOnPress: true
        model: ["M", "F"]

    }


}
