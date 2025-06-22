#include <iostream>
using namespace std;

int main (){
    int promedio, faltas;
    cout << "ingrese su promedio y faltas " << endl;
    cin >> promedio >> faltas;

    if (promedio >=85 && faltas <3)
    {
        cout << "usted recibe la beca" << endl;
    }
    else 
    {
        cout << "no puede aplicar a la beca" << endl;
    }












    return 0;
}