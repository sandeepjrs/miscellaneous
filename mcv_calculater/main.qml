import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Dialogs 1.2
import QtQuick.Controls 1.4


import "./"
import QtQuick.Layouts 1.3

ApplicationWindow {

    id:mainapp
    signal rawValues(int x,int y,int z)

    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MouseArea
    {
      anchors.fill: parent
      onClicked: { console.log("hello mouse")}
    }

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: console.log("Open action triggered");
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

    Grid
    {
        id: grid1
        rows:2



        Row {
            spacing: 10
            id: row1


            SspinBox
            {
                id : val1
                ovalue:val1.ovalue


            }

            SspinBox
            {
                id : val2
                ovalue: val2.ovalue


            }

            StextBox
            {
                x:5
            }


            StextOutput
            {

                displayText: cal_result
            }

        }

        Row
        {
            id: row2

            Sbutton
            {
                id : add
                dispayTextInside: "+"
                onPclicked:
                {
                    rawValues(val1.ovalue,val2.ovalue,1);
                    console.log("+ clicked")
                }
            }

            Sbutton
            {
                id : sub
                dispayTextInside: "-"
                onPclicked:
                {
                    rawValues(value1.dispayTextInside,value2.value,2);
                }

            }

            Sbutton
            {
                id: mul
                dispayTextInside: "*"
                onPclicked:
                {
                    rawValues(value1.dispayTextInside,value2.value,3);
                }
            }
        }
    }
}
