#include <iostream>
using namespace std;

int main (){
    int bisiesto;
    cout << "ingrese su fechapara verifiicar si e ano es bisiesto" << endl;
    cin >> bisiesto;

    if (bisiesto %4 == 0 && bisiesto %100 != 0 || bisiesto %400 == 0)
    {
        cout << "  es bisiesto" << endl;
    }
    else 
    {
        cout << "no es bisesto"<< endl;
    }












    return 0;
}