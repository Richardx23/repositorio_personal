

#include <iostream>
using namespace std;

int main(){
    int calification;
    cout << "please enter your score  " << endl;
    cin >> calification;

    if (calification >= 90)
    {
        cout << " your grade is A congratulations ";
    }
    
    else if (calification <90 && calification>= 85)
    {
        cout << " your grade is B congratulations";
    }
   
    else if (calification < 85 && calification >=70 )
    {
        cout << " your grade is c very good ";
    }

    else if (calification <80 && calification >=70)
    {
        cout << "your grade is d good";
    }
  
    else if (calification <70 && calification >= 69)
    {
        cout << "your grade is e you can do it better";
    }
    
    else if (calification < 69)
    {
        cout << "your grade is f try harder";
    }
    
  











    return 0;
}