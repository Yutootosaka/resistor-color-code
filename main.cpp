/*
program : resistor color code
write by : muhammad aqil
create in : 23/3/2024

this program not using any AI Tools and 100% Human
*/


#include <iostream>
#include <string>

using namespace std;

int count;

/*-----------function prototype-----------*/
char number_to_color_code(char number[], int tolerance[]); 
string color_code_to_number(string color_1, string color_2, string color_3, string color_4);

int main() {

    // Initialization Variable
    int option, y[0];
    char x[3];
    string color1, color2, color3, color4;

    // Initialization Menu
    cout << "#####################\n"
         << "#RESISTOR COLOR CODE#\n"
         << "#####################";

    do {

        puts("");
        puts("");

        cout << "Option :\n\n"
             << "[1] Number to Color code\n"
             << "[2] Color code to Number\n"
             << "[3] Exit\n\n";

        cout << "Choose option >> ";
        cin >> option;

        if(option == 1) {
            cout << "\nInput Number Color code >> "; // input number to convert color code1
            cin >> x >> y[0];

            number_to_color_code(&x[0], &y[0]); // function call
            
        } else if(option == 2) {
            cout << "\nInput Color >> ";
            cin >> color1 >> color2 >> color3 >> color4;

            color_code_to_number(color1, color2, color3, color4); // funtion call

        } else if(option == 3) {
            cout << "\nExit...\nWriten by : Aqil\n\n";

        } else {
            cout << "\nInvalid Input";

        }

    } while(option != 3);

    system("pause>nul");
    return 0;

}

char number_to_color_code(char number[], int tolerance[]){ // function definition
   puts("");
   for(count = 0; count <= 2; count++) {
        puts("");
        switch (number[count]) {
            case '0':
                cout << "black \t->\t" << number[count];
                break;
            case '1':
                cout << "brown \t->\t" << number[count];;
                break;
            case '2':
                cout << "red \t->\t" << number[count];;
                break;
            case '3':
                cout << "orange \t->\t" << number[count];;
                break;
            case '4':
                cout << "yellow \t->\t" << number[count];;
                break;
            case '5':
                cout << "green \t->\t" << number[count];;
                break;
            case '6':
                cout << "blue \t->\t" << number[count];;
                break;
            case '7':
                cout << "violet \t->\t" << number[count];;
                break;
            case '8':
                cout << "grey \t->\t" << number[count];;
                break;
            case '9':
                cout << "white \t->\t" << number[count];;
                break;
            default:
                cout << "Invalid number color code";

        }

   }

   for(count = 0; count <= 1; count++) {
        puts("");
        switch (tolerance[count]) {
            case 5:
                cout << "gold \t->\t" << tolerance[count];
                break;
            case 10:
                cout << "silver \t->\t" << tolerance[count];
                break;
            case 20:
                cout << "no band \t->\t" << tolerance[count];
                break;
            default:
                break;
        }
   }

}

// Color code To Number
string color_code_to_number(string color_1, string color_2, string color_3, string color_4){ // function definition
    string acces_color[4] = {color_1, color_2, color_3, color_4};
    for(count = 0; count <= 4; count++) {
        puts("");
        if(acces_color[count] == "black") {
            cout << "0 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "brown") {
            cout << "1 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "red") {
            cout << "2 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "orange") {
            cout << "3 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "yellow") {
            cout << "4 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "green") {
            cout << "5 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "blue") {
            cout << "6 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "violet") {
            cout << "7 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "grey") {
            cout << "8 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "white") {
            cout << "9 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "gold") {
            cout << "5 \t->\t" << acces_color[count];
        } else if(acces_color[count] == "silver") {
            cout << "10 \t->\t" << acces_color[count];
        }

    }

}