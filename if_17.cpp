#include <iostream>
using namespace std;

int main (){
    int edad;
    cout << "Por favor ingrese la edad de su hijo: " << endl;
    cin >> edad;

    if (edad < 5)
    {
        cout << "Su hijo entra gratis." << endl;
    }
    else if (edad >= 5 && edad <= 12)
    {
        cout << "La entrada cuesta $5." << endl;
    }
    else if (edad > 12)
    {
        cout << "La entrada cuesta $10." << endl;
    }

    return 0;
}
