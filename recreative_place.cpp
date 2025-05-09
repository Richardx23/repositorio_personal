#include <iostream>
using namespace std;

int main (){
    double salario, operaciones ;
    cout << "ingrese su salario actual  ";
    cin >> salario ;

    int opciones ;   
    cout << "ingrese  1 para calcular el ISSS 2 para calcular el AFP 3 para calcular la renta 4 para calcular el total";
     cin >> opciones;     
      
     
     switch(opciones)
      
      {case:1
        if (salario > 1000){
            cout "no se desconto ISSS porque su salario es mayor a $1000";
        }
        
        operacion = salario * 0.03;
        cout << "el ISSS es de  " << "$" << operacion;
        break;

        case:2
        operacion = salario * 0.0725;
        cout << "el AFP es de"  << "$" << operacion;
        break;

        default:
        cout"ingrese un valor real"
        break;
    
    
    
    
    
    }

        
      
        
                   

    
    
    
    
    




    









    return 0;
}