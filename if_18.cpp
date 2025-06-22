#include <iostream>
using namespace std;

int main() {
    int clave1, clave2;
    cout << "Ingrese sus contraseñas:" << endl;
    cin >> clave1 >> clave2;

    if (clave1 == 123 && clave2 == 124) {
        cout << "Puede continuar" << endl;
    } else {
        cout << "Una o ambas contraseñas son incorrectas" << endl;
    }

    return 0;
}
