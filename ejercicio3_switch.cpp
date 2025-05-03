#include <iostream>
using namespace std;

int main (){
    int score;
    cout << "enter your score  ";
    cin >> score;

    switch (score){
        case 1:
        score = 1 ; 
        cout << " you lost";
        break;

        case 2:
        score = 2 ;
        cout << "you are still far away";
        break;

        case 3:
        score = 3 ;
        cout << "you are in the middle";
        break;

        case 4: 
        score = 4 ;
        cout << "almost but not ";
        break; 

        case 5:
        score = 5 ;
        cout << "you win";
        break;

        default:
        cout << "out of parameters";
        break;


    }









    return 0; 
}