#include <iostream>
using namespace std;

int main(){
    int opcion;
    cout << "ingrese 1 para convertir de USD a EUR, 2 para USD a JPY y 3 para USD a GBP  ";
    cin >> opcion;

    double conversion, cantidad;
    cout << "ingrese el valor monetario  ";
    cin >> cantidad;
    
    

    switch (opcion)
    {case 1:
        conversion = cantidad * 0.92;
        cout << "su cantidad covertida es: " << conversion << " EUR" << endl;
        break;
    
        case 2:
        conversion = cantidad * 155;
        cout << "su cantidad covertida es: " << conversion << " JPY" << endl;
        break;

        case 3:
        conversion = cantidad * 0.70;
        cout << "su cantidad es " << conversion << " GBP" << endl;
        break;

        default:
        cout << "imposible" ;
        break;
        
    
    
    }









  return 0;
}