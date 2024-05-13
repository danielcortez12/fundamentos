#include <iostream>

using namespace std;

int main(int argc, char *arg[]){
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float n4 = 0;
    float result = 0;
    float final = 0;

    cout <<"ingrese la primera nota";
    cin >> n1;
    cout <<"ingrese la segunda nota";
    cin >> n2;
    cout <<"ingrese la tercera nota";
    cin >> n3;
    cout <<"ingrese la cuarta nota";
    cin >> n4;

   result = n1 + n2 + n3 + n4;
     final = result / 4; 

    if (final>= 6.5)
    {
        cout << "usted aprovo la materia";      
    }else{
        cout << "usted dejo la materia";
            if (final < 6.5 &&  final >= 5.5)
            {
                cout << "usted tiene derecho a recuperacion" ; 
            }       
    }
     
}

