#include <iostream>

using namespace std;

int main (){
    int n1 = 0;
    int n2 = 0;
    int result = 0;
    int option = 0;

    cout << "ingrese el primer numero " ;
    cin >> n1;
    cout << "ingrese el segundo numero" ;
    cin >> n2;
    cout <<"ingrese una opcion del 1 al 4 " ;
    cin >> option;
    switch (option)
    {
    case 1 :
            result = n1 + n2;
            cout << result;
        break;
    case 2:
        result = n1 - n2;
        cout << result;
        break;
    case 3:
        result = n1 * n2;
        cout << result ;
        break;
    case 4 :
        result = n1 / n2;
        cout << result;
        break;
    default:
        break;
    } 
}