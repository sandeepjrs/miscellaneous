import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Dialogs 1.2
import QtQuick.Controls 1.4


import "./"
import QtQuick.Layouts 1.3

ApplicationWindow {

    id:mainapp
    signal rawValues(int x,int y,int z)

    property real box1
    property real box2



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


            StextBox
            {

                id : value1


                onSValueChaged:
                {
                    box1= svalue
                    console.log("box1 =", box1)

                }

            }

            StextBox
            {
                id : value2
                onSValueChaged:
                {
                    box2= svalue
                }

            }



            StextOutput
            {

                id : resOut
                property real jug

                //displayText: myyCalModel_man.man(1,2,3,4)






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
                    rawValues(box1,box2,1);

                    resOut.jug = myyCalModel_man.getResult()
                    resOut.displayText = resOut.jug
                    console.log("+ clicked", resOut.jug)

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

    function updateBox()
    {

    }
}
