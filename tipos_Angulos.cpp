#include <iostream>

using namespace std;

int main()
{

    float angulo = 0;

    cout << "Ingrese el valor del angulo :" << "\n";
    cin >> angulo;

    if (angulo == 90)
    {
        cout << "Su angulo es un Angulo Recto " << "\n";
    }
    else if (angulo > 0 && angulo < 90)
    {
        cout << " Su angulo es un Angulo Agudo" << "\n";
    }
    else if (angulo > 90)
    {
        cout << "Su angulo es Angulo Obtuso" << "\n";
    }
    return 0;
}
