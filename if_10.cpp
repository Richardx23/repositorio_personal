#include <iostream>
using namespace std;

int main (){
    int peso;
    cout << " por favor ingrese el peso de su paquete " << endl;
    cin >> peso;

    if(peso <= 5)
    {
        cout << " se le cobraran 5 dolares" << endl;
    }
    else if (peso >= 6 && peso <=10)
    {
        cout << " se le cobraran 10 dolares " << endl;
    }
    else if (peso > 10)
    {
        cout << " se le cobraran 15 dolares " << endl;
    }












    return 0;
}