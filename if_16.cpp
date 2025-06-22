#include <iostream>
using namespace std;

int main (){
    int clave=123;
    cout << "por favor ingrese su contraseña" << endl;
    cin >> clave;

    if (clave == 123)
    {
        cout << "clave correcta " << endl;
    }
    else
    {
        cout << "clave incorrecta, le quedan 2 intentos  " << endl;
        cin >> clave;

        if (clave == 123)
        {
        cout << "clave correcta " << endl;
        }

     else 
        {
         cout << "clave incorrecta, le queda 1 intento  " << endl;
         cin >> clave;
        

         if (clave == 123)
         {
          cout << "clave correcta " << endl;
         }

         else 
         {
          cout << "se qued sin intentos  " << endl;
          }
        }
    }


    return 0;
}