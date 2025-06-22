#include <iostream>
using namespace std;

int main() {
    int edad, numInfracciones, aniosExperiencia;

    cout << "Ingrese la edad del conductor: ";
    cin >> edad;

    cout << "Ingrese el número de infracciones: ";
    cin >> numInfracciones;

    cout << "Ingrese los años de experiencia: ";
    cin >> aniosExperiencia;

    if (edad < 18) {
        cout << "Estado: No válido para conducir" << endl;
    }
    else if (numInfracciones > 3) {
        cout << "Estado: Peligroso" << endl;
    }
    else if (numInfracciones <= 3 && aniosExperiencia >= 5) {
        cout << "Estado: Experto" << endl;
    }
    else if (numInfracciones <= 3 && aniosExperiencia < 5) {
        cout << "Estado: Novato" << endl;
    }
    else {
        cout << "Estado: Normal" << endl;
    }

    return 0;
}
