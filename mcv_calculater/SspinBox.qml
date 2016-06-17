import QtQuick 2.0

import QtQuick.Controls 1.4



/*you should provide the width and height of the new created Button other wise it will overlap the button*/

Rectangle {
    id : root
    property string dispayTextInside: "Enter Text"
    property real ovalue : 20
    signal getValue(int x)

    width: 100
    height: 25
    color : "#00000000"

    SpinBox
    {
        id: sb
        value: ovalue
        width : root.width
        height: root.height
        decimals: 2

        onEditingFinished:
        {

            ovalue= sb.value
            getValue(sb.value)
        }


    }




}
