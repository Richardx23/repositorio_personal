#include <iostream>
using namespace std;

int main(){
    int number; 
    cout << " por favor ingrese un numero del 1 al 7";
    cin >> number;

    switch (number){
        case 1 :
        cout<<"su dia es lunes";
        break;
       
        case 2 :
        cout << "su dia es martes";
        break;
        
        case 3 :
        cout << "su dia es martes";
        break;
        
        case 4 : 
        cout << "su dia es miercoles";
        break;

        case 5 :
        cout << "su dia es viernes";
        break;

        case 6 :
        cout << "su dia es sabado";
        break;

        case 7 :
        cout << " su dia es domingo";
        break;

        default :
        cout << " dato incorrecto";
        break;


    }
    


    return 0 ;
}