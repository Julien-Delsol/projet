import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    width: 800
    height: 800
    property alias comboBoxAge: comboBoxAge
    property alias buttonFind: buttonFind
    property alias buttonModify: buttonModify
    property alias textFielProfil: textFielProfil
    property alias buttonDelete: buttonDelete
    property alias buttonSave: buttonSave
    property alias tableView: tableView
    property alias textFieldAge: textFieldAge
    property alias comboBoxSexe: comboBoxSexe
    property alias buttonExit: buttonExit
    property alias textFieldFirstName: textFieldFirstName
    property alias textFieldName: textFieldName
    property alias buttonAdd: buttonAdd

    Text {
        id: labelNom
        x: 134
        y: 33
        width: 33
        height: 17
        text: qsTr("Nom :")
        font.pixelSize: 20
    }

    Text {
        id: labelPrenom
        x: 390
        y: 33
        text: qsTr("Prenom :")
        font.pixelSize: 20
    }

    Text {
        id: labelAge
        x: 134
        y: 99
        text: qsTr("Age :")
        font.pixelSize: 20
    }

    ComboBox {
        id: comboBoxSexe
        x: 359
        y: 158
        width: 125
        height: 19
        activeFocusOnPress: true
        model: ["M", "F"]
    }

    Text {
        id: labelProfil
        x: 390
        y: 99
        text: qsTr("Profil :")
        fontSizeMode: Text.FixedSize
        font.pixelSize: 20
    }

    TextField {
        id: textFieldName
        x: 200
        y: 36
        width: 154
        height: 20
        text: ""
        placeholderText: qsTr("...")
    }

    TextField {
        id: textFieldFirstName
        x: 486
        y: 36
        width: 179
        height: 20
        text: ""
        placeholderText: qsTr("...")
    }

    TextField {
        id: textFielProfil
        x: 486
        y: 103
        width: 295
        height: 20
        placeholderText: qsTr("...")
    }

    Button {
        id: buttonAdd
        x: 142
        y: 222
        text: qsTr("Add")
        activeFocusOnPress: true
    }

    Button {
        id: buttonSave
        x: 279
        y: 222
        text: qsTr("Save")
    }

    Button {
        id: buttonExit
        x: 8
        y: 222
        text: qsTr("Exit")
    }

    Text {
        id: labelSexe
        x: 298
        y: 155
        text: qsTr("Sexe :")
        wrapMode: Text.WrapAnywhere
        elide: Text.ElideLeft
        font.pixelSize: 20
    }

    TextField {
        id: textFieldAge
        x: 200
        y: 103
        width: 33
        height: 21
        text: ""
        placeholderText: qsTr("...")
    }

    TableView {
        id: tableView
        x: 8
        y: 273
        width: 773
        height: 472
        horizontalScrollBarPolicy: 0
        model: appCore.candidatModel

        TableViewColumn {
            role: "nom"
            title: "Nom"
            width: 175
            delegate: Text {
                text: styleData.value
            }
        }

        TableViewColumn {
            role: "prenom"
            title: "Prenom"
            width: 200
            delegate: Text {
                text: styleData.value
            }
        }

        TableViewColumn {
            role: "age"
            title: "Age"
            width: 50

            delegate: Text {
                horizontalAlignment: Text.AlignHCenter
                text: styleData.value
            }
        }

        TableViewColumn {
            role: "profil"
            title: "Profil"
            width: 305
            delegate: Text {
                text: styleData.value
            }
        }

        TableViewColumn {
            role: "sexe"
            title: "Sexe"
            width: 40
            delegate: Text {
                horizontalAlignment: Text.AlignHCenter
                text: styleData.value
            }
        }
    }

    Button {
        id: buttonDelete
        x: 427
        y: 222
        text: "Delete"
    }

    Button {
        id: buttonModify
        x: 706
        y: 222
        text: qsTr("Modify")
    }

    Button {
        id: buttonFind
        x: 572
        y: 222
        text: qsTr("Find")
    }

    ComboBox {
        id: comboBoxAge
        x: 245
        y: 104
        width: 44
        height: 19
        activeFocusOnPress: true
        model: ["-", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65"]
    }
}
