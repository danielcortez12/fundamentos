#include <iostream>

using namespace std;

int main()
{
    int sector = 0;
    int num_Entradas = 0;
    int valor = 0;

    cout << "Bienvenido al Estadio XYZ el mejor estadio de centro america" << "\n";
    cout << "Seleccione un sector del estadio :" << "\n";
    cout << "Sol general : 1" << "\n";
    cout << "Sol preferente : 2" << "\n";
    cout << "Sombra: 3" << "\n";
    cout << "Tribuna : 4" << "\n";
    cout << "Platea : 5" << "\n";
    cin >> sector;

    switch (sector)
    {
    case 1:
        cout << "Cuantas entradas necesita para Sol general :" << "\n";
        cin >> num_Entradas;
        valor = num_Entradas * 3;
        cout << "Su total a pagar es de : " << valor << "$" << "\n";
        break;
    case 2:
        cout << "Cuantas entradas necesita para Sol preferente :" << "\n";
        cin >> num_Entradas;
        valor = num_Entradas * 5;
        cout << "Su total a pagar es de : " << valor << "$" << "\n";
        break;
    case 3:
        cout << "Cuantas entradas necesita para Sombra :" << "\n";
        cin >> num_Entradas;
        valor = num_Entradas * 8;
        cout << "Su total a pagar es de : " << valor << "$" << "\n";
        break;
    case 4:
        cout << "Cuantas entradas necesita para Tribuna :" << "\n";
        cin >> num_Entradas;
        valor = num_Entradas * 15;
        cout << "Su total a pagar es de : " << valor << "$" << "\n";
        break;
    case 5:
        cout << "Cuantas entradas necesita para Platea :" << "\n";
        cin >> num_Entradas;
        valor = num_Entradas * 20;
        cout << "Su total a pagar es de : " << valor << "$" << "\n";
        break;
    default:
        break;
    }
}