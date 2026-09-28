#include <iostream>
#include <string>
using namespace std;

int main()
{
    //strings 

    string color1;
    string color2;
    string color3;
    string color4;
    string color5;

    //ints

    int colorValue1 = 0;
    int colorValue2 = 0;
    int colorValue3 = 0;
    int colorValue4 = 0;
    int colorValue5 = 0;

    //char

    char useTester;

    //startup

    cout << "---Welcome to the Color Blindness Palette Tester---" << endl;
    cout << "Would Like To Start The Tester (y/n)?" << endl;
    cin >> useTester;

    if (useTester == 'y' || 'Y'){
    cout << "Enter The Five Numbers That Correspond To Your Color Palette" << endl;
    cout << "1 --> red" << endl;
    cout << "2 --> orange" << endl;
    cout << "3 --> yellow" << endl;
    cout << "4 --> green" << endl;
    cout << "5 --> blue" << endl;
    cout << "6 --> pruple" << endl;
    cout << "7 --> white" << endl;
    cout << "8 --> black" << endl;
    cout << "9 --> brown" << endl;
    cout << "10 --> gray" << endl;

    cin >> colorValue1;
    cin >> colorValue2;
    cin >> colorValue3;
    cin >> colorValue4;
    cin >> colorValue5;

    //CODE FOR COLOR1

    if (colorValue1 == 1) {
        //red
            color1 = "red";
    }else if (colorValue1 == 2){
        //orange
            color1 = "orange";
    }else if (colorValue1 == 3){
        //yellow
            color1 = "yellow";
            //yellow is safe
    }else if (colorValue1 == 4){
        //green
            color1 = "green";
    }else if (colorValue1 == 5){
        //blue
            color1 = "blue";
    }else if (colorValue1 == 6){
        //purple
            color1 = "purple";
    }else if (colorValue1 == 7){
        //white
            color1 = "white";
    }else if (colorValue1 == 8){
        //black
            color1 = "black";
    }else if (colorValue1 == 9){
        //brown
            color1 = "brown";
    }else if (colorValue1 == 10){
        //gray
            color1 = "gray";
    }else{
        cout << colorValue1 << " is invalid" << endl;
    }
       
       
       //CODE FOR COLOR2


   if (colorValue2 == 1) {
        //red
            color2 = "red";
    }else if (colorValue2 == 2){
        //orange
            color2 = "orange";
    }else if (colorValue2 == 3){
        //yellow
            color2 = "yellow";
            //yellow is safe
    }else if (colorValue2 == 4){
        //green
            color2 = "green";
    }else if (colorValue2 == 5){
        //blue
            color2 = "blue";
    }else if (colorValue2 == 6){
        //purple
            color2 = "purple";
    }else if (colorValue2 == 7){
        //white
            color2 = "white";
    }else if (colorValue2 == 8){
        //black
            color2 = "black";
    }else if (colorValue2 == 9){
        //brown
            color2 = "brown";
    }else if (colorValue2 == 10){
        //gray
            color2 = "gray";
    }else{
        cout << colorValue2 << " is invalid" << endl;
    }
       
       //CODE FOR COLOR3


    if (colorValue3 == 1) {
        //red
            color3 = "red";
    }else if (colorValue3 == 2){
        //orange
            color3 = "orange";
    }else if (colorValue3 == 3){
        //yellow
            color3 = "yellow";
            //yellow is safe
    }else if (colorValue3 == 4){
        //green
            color3 = "green";
    }else if (colorValue3 == 5){
        //blue
            color3 = "blue";
    }else if (colorValue3 == 6){
        //purple
            color3 = "purple";
    }else if (colorValue3 == 7){
        //white
            color3 = "white";
    }else if (colorValue3 == 8){
        //black
            color3 = "black";
    }else if (colorValue3 == 9){
        //brown
            color3 = "brown";
    }else if (colorValue3 == 10){
        //gray
            color3 = "gray";
    }else{
        cout << colorValue3 << " is invalid" << endl;
    }

    //CODE FOR COLOR4

    if (colorValue4 == 1) {
        //red
            color4 = "red";
    }else if (colorValue4 == 2){
        //orange
            color4 = "orange";
    }else if (colorValue4 == 3){
        //yellow
            color4 = "yellow";
            //yellow is safe
    }else if (colorValue4 == 4){
        //green
            color4 = "green";
    }else if (colorValue4 == 5){
        //blue
            color4 = "blue";
    }else if (colorValue4 == 6){
        //purple
            color4 = "purple";
    }else if (colorValue4 == 7){
        //white
            color4 = "white";
    }else if (colorValue4 == 8){
        //black
            color4 = "black";
    }else if (colorValue4 == 9){
        //brown
            color4 = "brown";
    }else if (colorValue4 == 10){
        //gray
            color4 = "gray";
    }else{
        cout << colorValue4 << " is invalid" << endl;
    }

    //CODE FOR COLOR5

    if (colorValue5 == 1) {
        //red
            color5 = "red";
    }else if (colorValue5 == 2){
        //orange
            color5 = "orange";
    }else if (colorValue5 == 3){
        //yellow
            color5 = "yellow";
            //yellow is safe
    }else if (colorValue5 == 4){
        //green
            color5 = "green";
    }else if (colorValue5 == 5){
        //blue
            color5 = "blue";
    }else if (colorValue5 == 6){
        //purple
            color5 = "purple";
    }else if (colorValue5 == 7){
        //white
            color5 = "white";
    }else if (colorValue5 == 8){
        //black
            color5 = "black";
    }else if (colorValue5 == 9){
        //brown
            color5 = "brown";
    }else if (colorValue5 == 10){
        //gray
            color5 = "gray";
    }else{
        cout << colorValue5 << " is invalid" << endl;
    }
    
    }else if (useTester == 'n' || 'N')
    {
        cout << "Okay, Goodbye!" << endl;
    }
    else{}

    cout << "Your colors are: " << color1 << " " << color2 << " " << color3 << " " << color4 << " " << color5 << " " << endl;

    //color1 check

    if (color1 == "red"){
        cout << "Because your palette includes red, people with protanomaly or protanopia " << endl << "either can't differentiate from or see red" << endl;
    }
    if (color1 == "blue"){
        cout << "Because your palette includes blue, people with tritanomaly or tritanopia " << endl << "either can't differentiate from or see blue" << endl;
    }
    if (color1 == "green"){
        cout << "Because your palette includes green, people with deuteranomly or deuternopia " << endl << "either can't differentiate from or see green" << endl;
    }
    if (color1 == "yellow"){
        cout << "Because your palette includes yellow, people with tritanomaly or tritanopia " << endl << "have trouble differentiating yellow from red and purple" << endl;
    }
    if (color1 == "orange"){
        cout << "Because your palette includes orange, people with tritanomaly or tritanopia " << endl << "have trouble differentiating orange from red and brown" << endl;
    }
    if (color1 == "purple"){
        cout << "Because your palette includes purple, people with deuteranomly, deuternopia or tritanopia " << endl << "have trouble differentiating purple from red, blue purple" << endl;
    }
    if (color1 == "brown"){
        cout << "Because your palette includes brown, people with protanomaly or protanopia " << endl << "have trouble differentiating brown from red" << endl;
    }
    if (color1 == "gray"){
        cout << "Because your palette includes gray, people with deuternopia or tritanopia " << endl << "have trouble differentiating gray from blue, purple, or yellow" << endl;
    }
     //color2 check
     
    if (color2 == "red"){
        cout << "Because your palette includes red, people with protanomaly or protanopia " << endl << "either can't differentiate from or see red" << endl;
    }
    if (color2 == "blue"){
        cout << "Because your palette includes blue, people with tritanomaly or tritanopia " << endl << "either can't differentiate from or see blue" << endl;
    }
    if (color2 == "green"){
        cout << "Because your palette includes green, people with deuteranomly or deuternopia " << endl << "either can't differentiate from or see green" << endl;
    }
    if (color2 == "yellow"){
        cout << "Because your palette includes yellow, people with tritanomaly or tritanopia " << endl << "have trouble differentiating yellow from red and purple" << endl;
    }
    if (color2 == "orange"){
        cout << "Because your palette includes orange, people with tritanomaly or tritanopia " << endl << "have trouble differentiating orange from red and brown" << endl;
    }
    if (color2 == "purple"){
        cout << "Because your palette includes purple, people with deuteranomly, deuternopia or tritanopia " << endl << "have trouble differentiating purple from red, blue purple" << endl;
    }
    if (color2 == "brown"){
        cout << "Because your palette includes brown, people with protanomaly or protanopia " << endl << "have trouble differentiating brown from red" << endl;
    }
    if (color2 == "gray"){
        cout << "Because your palette includes gray, people with deuternopia or tritanopia " << endl << "have trouble differentiating gray from blue, purple, or yellow" << endl;
    }

    //color3 check

    if (color3 == "red"){
        cout << "Because your palette includes red, people with protanomaly or protanopia " << endl << "either can't differentiate from or see red" << endl;
    }
    if (color3 == "blue"){
        cout << "Because your palette includes blue, people with tritanomaly or tritanopia " << endl << "either can't differentiate from or see blue" << endl;
    }
    if (color3 == "green"){
        cout << "Because your palette includes green, people with deuteranomly or deuternopia " << endl << "either can't differentiate from or see green" << endl;
    }
    if (color3 == "yellow"){
        cout << "Because your palette includes yellow, people with tritanomaly or tritanopia " << endl << "have trouble differentiating yellow from red and purple" << endl;
    }
    if (color3 == "orange"){
        cout << "Because your palette includes orange, people with tritanomaly or tritanopia " << endl << "have trouble differentiating orange from red and brown" << endl;
    }
    if (color3 == "purple"){
        cout << "Because your palette includes purple, people with deuteranomly, deuternopia or tritanopia " << endl << "have trouble differentiating purple from red, blue purple" << endl;
    }
    if (color3 == "brown"){
        cout << "Because your palette includes brown, people with protanomaly or protanopia " << endl << "have trouble differentiating brown from red" << endl;
    }
    if (color3 == "gray"){
        cout << "Because your palette includes gray, people with deuternopia or tritanopia " << endl << "have trouble differentiating gray from blue, purple, or yellow" << endl;
    }

    //color4 check

    if (color4 == "red"){
        cout << "Because your palette includes red, people with protanomaly or protanopia " << endl << "either can't differentiate from or see red" << endl;
    }
    if (color4 == "blue"){
        cout << "Because your palette includes blue, people with tritanomaly or tritanopia " << endl << "either can't differentiate from or see blue" << endl;
    }
    if (color4 == "green"){
        cout << "Because your palette includes green, people with deuteranomly or deuternopia " << endl << "either can't differentiate from or see green" << endl;
    }
    if (color4 == "yellow"){
        cout << "Because your palette includes yellow, people with tritanomaly or tritanopia " << endl << "have trouble differentiating yellow from red and purple" << endl;
    }
    if (color4 == "orange"){
        cout << "Because your palette includes orange, people with tritanomaly or tritanopia " << endl << "have trouble differentiating orange from red and brown" << endl;
    }
    if (color4 == "purple"){
        cout << "Because your palette includes purple, people with deuteranomly, deuternopia or tritanopia " << endl << "have trouble differentiating purple from red, blue purple" << endl;
    }
    if (color4 == "brown"){
        cout << "Because your palette includes brown, people with protanomaly or protanopia " << endl << "have trouble differentiating brown from red" << endl;
    }
    if (color4 == "gray"){
        cout << "Because your palette includes gray, people with deuternopia or tritanopia " << endl << "have trouble differentiating gray from blue, purple, or yellow" << endl;
    }
    
    //color5 check

    if (color5 == "red"){
        cout << "Because your palette includes red, people with protanomaly or protanopia " << endl << "either can't differentiate from or see red" << endl;
    }
    if (color5 == "blue"){
        cout << "Because your palette includes blue, people with tritanomaly or tritanopia " << endl << "either can't differentiate from or see blue" << endl;
    }
    if (color5 == "green"){
        cout << "Because your palette includes green, people with deuteranomly or deuternopia " << endl << "either can't differentiate from or see green" << endl;
    }
    if (color5 == "yellow"){
        cout << "Because your palette includes yellow, people with tritanomaly or tritanopia " << endl << "have trouble differentiating yellow from red and purple" << endl;
    }
    if (color5 == "orange"){
        cout << "Because your palette includes orange, people with tritanomaly or tritanopia " << endl << "have trouble differentiating orange from red and brown" << endl;
    }
    if (color5 == "purple"){
        cout << "Because your palette includes purple, people with deuteranomly, deuternopia or tritanopia " << endl << "have trouble differentiating purple from red, blue purple" << endl;
    }
    if (color5 == "brown"){
        cout << "Because your palette includes brown, people with protanomaly or protanopia " << endl << "have trouble differentiating brown from red" << endl;
    }
    if (color5 == "gray"){
        cout << "Because your palette includes gray, people with deuternopia or tritanopia " << endl << "have trouble differentiating gray from blue, purple, or yellow" << endl;
    }

    return 0;
}
