#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a;
    int b;
    int c;
    float discriminante;
    int resultado_discriminante;
    float desarrollo_ejercicios_1;
    float desarrollo_ejercicios_2;

    cout << "Ingrese el valor de 'a' que sea diferente de 0: ";
    cin >> a;

    cout << "Ingrese el valor de 'b' que sea diferente de 0: ";
    cin >> b;

    cout << "Ingrese el valor de 'c' que sea diferente de 0: ";
    cin >> c;

    discriminante = ((b * b) - (4 * a * c));

    if (a == 0 && b == 0)
    {
        cout << "El 0 no es valido.";
    }
    else if (discriminante == 0)
    {
        resultado_discriminante = 0;
    }
    else if (discriminante < 0)
    {
        resultado_discriminante = -1;
    }
    else
    {
        resultado_discriminante = 1;
    }

    switch (resultado_discriminante)
    {
    case 0:
        desarrollo_ejercicios_1 = (((-1 * b) + sqrt(discriminante)) / (2 * a));
        cout << "x = " << desarrollo_ejercicios_1;
        break;
    case 1:
        desarrollo_ejercicios_1 = (((-1 * b) + sqrt((discriminante))) / (2 * a));
        desarrollo_ejercicios_2 = (((-1 * b) - sqrt((discriminante))) / (2 * a));
        cout << "x = " << desarrollo_ejercicios_1 << "\n";
        cout << "x = " << desarrollo_ejercicios_2 << "\n";
        break;
    case -1:
        cout << "x = " << (-1 * b) << " + " << "√" << discriminante << "\n\t" << (2 * a);
        cout << "x = " << (-1 * b) << " - " << "√" << discriminante << "\n\t" << (2 * a);
        break;
    default:
        break;
    }
}