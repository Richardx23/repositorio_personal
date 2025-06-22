#include <iostream>
using namespace std;

int main (){
    int dia;
    cout << "ingrese u numero del 1 al 7 " << endl;
    cin >> dia;

    if (dia == 1)
    {
        cout << "es lunes" << endl;
    }
    else if (dia == 2 )
    {
        cout << "es martes" <<endl;
    }
    else if (dia == 3 )
    {
        cout << "es miercoles" <<endl;
    }
    else if (dia == 4 )
    {
        cout << "es jueves" <<endl;
    }
    else if (dia == 5 )
    {
        cout << "es viernes" <<endl;
    }
    else if (dia == 6 )
    {
        cout << "es sabado" <<endl;
    }
    else if (dia == 7 )
    {
        cout << "es domingo " <<endl;
    }

    else 
    {
        cout << "ingrese un dato valido" << endl;
    }













    return 0;
}