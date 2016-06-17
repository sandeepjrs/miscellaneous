import QtQuick 2.0
import QtQuick.Controls 1.4


/*you should provide the width and height of the new created Button other wise it will overlap the button*/

Rectangle {
    property string dispayTextInside
    property real value: value



    width: 100
    height: 50
    color : "#00000000"

    TextField {

        id: txtfld
        //placeholderText: qsTr(dispayTextInside)
        text: dispayTextInside

        onDisplayTextChanged:
        {
            dispayTextInside=txtfld.text
          console.log(dispayTextInside)
            str2int()
        }

        function str2int()
        {
            var a
            a= Number(dispayTextInside)
            console.log(a)
        }


    }



}


