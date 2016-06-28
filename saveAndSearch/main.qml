import QtQuick 2.4
import QtQuick.Window 2.2

Window {
    id: mainApp
    visible: true
    height : 400
    width : 600


    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            Qt.quit();
        }
    }
}
