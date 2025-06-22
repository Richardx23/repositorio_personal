#include <iostream>
using namespace std;

int main (){
    int consumo;
    cout << "por favor ingrese su consumode electricidad " << endl;
    cin >> consumo;

    if (consumo < 100)
    {
        cout << "tarifa baja" << endl;
    }

    else if (consumo >= 100 && consumo <=200)
    {
        cout << "tarif media " << endl;
    }
    else if (consumo > 200)
    {
        cout << " tarifa alta " << endl;
    }













    return 0;
}