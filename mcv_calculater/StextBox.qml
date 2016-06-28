import QtQuick 2.0
import QtQuick.Controls 1.4


/*you should provide the width and height of the new created Button other wise it will overlap the button*/

Rectangle {
    property string dispayTextInside
    property real value: value
    signal sValueChaged(int svalue)



    width: 100
    height: 50
    color : "#00000000"

    TextField {

        id: txtfld
        //placeholderText: qsTr(dispayTextInside)
        text: dispayTextInside

        onDisplayTextChanged:
        {
            //dispayTextInside=txtfld.text
            sValueChaged(str2int(txtfld.text))

        }

        function str2int(intValue)
        {
            var conValue
            conValue= Number(intValue)
            console.log(conValue)
            return conValue
        }


    }



}


