import QtQuick 2.0
import QtQuick.Controls 1.4


/*you should provide the width and height of the new created Button other wise it will overlap the button*/

Rectangle {
    property string dispayTextInside: "Enter Text"
    property real value: value


    width: 100
    height: 50
    color : "#00000000"

    TextField {
        placeholderText: qsTr(dispayTextInside)


    }


}
