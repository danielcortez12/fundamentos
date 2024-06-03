#include <iostream>

using namespace std;

int main()
{

    int size;
    cout << "Ingrese el tamaño del vector \n";
    cin >> size;

    int impar[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Ingrese los numeros : " << i + 1 << ":   \n";
        cin >> impar[i];
    }

    int arrayimpar[size];
    int num = 0;

    for (int i = 0; i < size; i++)
    {
        if (impar[i] % 2 != 0)
        {
            arrayimpar[num] = impar[i];
            num++;
        }
    }

    cout << "Los numeros impares son : \n";
    for (int i = 0; i < num; i++)
    {
        cout << arrayimpar[i] << "\n";
    }
    return 0;
}
