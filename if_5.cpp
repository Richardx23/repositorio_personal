#include <iostream>
using namespace std;

int main (){
    int monto, descuento  , total;
    cout << "ingrese su monto " << endl;
    cin >> monto ;

    if (monto > 100)
    { 
        descuento = monto * 0.10;
        total = monto - descuento;
        cout << " su compra es mayor a $100 se e aplicara un descuento de 10% " << endl;
        cout << " su total con descuento es de " <<  total << endl;






    }












    return 0;
}