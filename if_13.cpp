#include <iostream>
using namespace std;

int main (){
    int nota;
    cout <<  "ingrese su calificacion" << endl;
    cin >> nota;

    if (nota == 100)
    {
        cout << "A";
    }

    else if (nota < 100 && nota >= 80)
    {
        cout << "B";
    }
    
    else if (nota < 80 && nota >=60)
    {
        cout << "C";
    }
    
    else if  (nota < 60 && nota >= 40)
    {
        cout << "D";
    }

    else if (nota < 40)
    {
        cout << "F";
    }



















    return 0;
}