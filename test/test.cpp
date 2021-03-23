#include <iostream>
#include <stdlib.h>











using namespace std;

int main(){
    int i = 0;
    int f = 0;

    string numlist[] = {"0","1","2","3","4","5","6","7","8"};
    
    int player1 = 1;
    int player2 = 2;
    
    
    for (int i = 0; i <= 8; i++) {


            system("cls");


            cout <<
                numlist[0] << " | " << numlist[1] << " | " << numlist[2] << endl <<
                "---------" << endl <<
                numlist[3] << " | " << numlist[4] << " | " << numlist[5] << endl <<
                "---------" << endl <<
                numlist[6] << " | " << numlist[7] << " | " << numlist[8] << endl;






            cout << "player1 >> ";
            cin >> f; // == 1

            
            for (int i = 0; i <= 8;i++) {
                if (f == i){
                    numlist[i] = "o";
                }
            }






            if (numlist[0] == "o" && numlist[1] == "o" && numlist[2] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }



            else if (numlist[3] == "o" && numlist[4] == "o" && numlist[5] == "o") {
                system("CLS");
                return 0;
            }
            else if (numlist[6] == "o" && numlist[7] == "o" && numlist[8] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }
            else if (numlist[0] == "o" && numlist[3] == "o" && numlist[6] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }
            else if (numlist[1] == "o" && numlist[4] == "o" && numlist[7] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }
            else if (numlist[2] == "o" && numlist[5] == "o" && numlist[8] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }
            else if (numlist[2] == "o" && numlist[4] == "o" && numlist[6] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }

            else if (numlist[0] == "o" && numlist[4] == "o" && numlist[5] == "o") {
                system("CLS");
                cout << "player 1 is winner !!";
                return 0;
            }





            system("cls");

            cout <<
                numlist[0] << " | " << numlist[1] << " | " << numlist[2] << endl <<
                "---------" << endl <<
                numlist[3] << " | " << numlist[4] << " | " << numlist[5] << endl <<
                "---------" << endl <<
                numlist[6] << " | " << numlist[7] << " | " << numlist[8] << endl;

            cout << "player2 >> ";
            cin >> f;


            for (int i = 0; i <= 8; i++) {
                if (f == i) {
                    numlist[i] = "x";
                }
            }

            if (numlist[0] == "x" && numlist[1] == "x" && numlist[2] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }
            else if (numlist[3] == "x" && numlist[4] == "x" && numlist[5] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }
            else if (numlist[6] == "x" && numlist[7] == "x" && numlist[5] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }
            else if (numlist[0] == "x" && numlist[3] == "x" && numlist[6] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }
            else if (numlist[1] == "x" && numlist[4] == "x" && numlist[7] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }
            else if (numlist[2] == "x" && numlist[5] == "x" && numlist[8] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }
            else if (numlist[2] == "x" && numlist[4] == "x" && numlist[6] == "x") {
                system("CLS");
                cout << "player 2 is winner !!";
                return 0;
            }

            else if (numlist[0] == "x" && numlist[4] == "x" && numlist[5] == "x") {
                system("CLS"); 
                cout << "player 2 is winner !!";
                return 0;
            }


            
        }

    
    cout << "No winner !!";
    cin >> i;
    return 0;
}