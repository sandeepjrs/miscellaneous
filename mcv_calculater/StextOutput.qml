import QtQuick 2.0

Rectangle {

    property string displayText: "0"

    height: 25
    width : 100
    radius: 2
    border.width:1
    // color : "#000000"

    Text {

        text: qsTr(displayText)
    }

}
