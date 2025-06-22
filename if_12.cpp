#include <iostream>
using namespace std;

int main (){
    int lad1, lad2, lad3;
    cout << "ingrese las medidas de un triangulo para determinar su tipo" << endl;
    cin >> lad1 >> lad2 >> lad3;

    if (lad1 == lad2 && lad2 == lad3)
    {
        cout << "es quilatero" << endl;
    }
    else if (lad1 == lad2 && lad2 != lad3 || lad1 == lad3 && lad3 != 2 || lad2 == lad3 && lad3 != lad1 )
    {
        cout << " es isosceles" << endl;
    }
    else if (lad1!=lad2 && lad2!=lad3 && lad1 != lad3)
    {
        cout << "es escaleno" << endl;
    }
  











    return 0;
}