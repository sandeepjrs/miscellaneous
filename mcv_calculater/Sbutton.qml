import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle
{
    id : root
    signal pclicked()

    property string dispayTextInside: "Enter Text"

    width: 100
    height: 50
    color : "#00000000"
    Button
    {
        id : button
        text: dispayTextInside
        onClicked:
        {

            root.pclicked();
        }

    }


}
