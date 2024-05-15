#include <iostream>

using namespace std;

int main()
{
    float angulo_1 = 0;
    float angulo_2 = 0;
    float angulo_3 = 0;

    cout << "ingrese el primer angulo" << "\n";
    cin >> angulo_1;
    cout << "ingrese el segundo angulo" << "\n";
    cin >> angulo_2;

    angulo_3 = 180 - (angulo_1 + angulo_2);
    cout << "el valor angulo faltante mide : " << angulo_3 << "\n";
}
