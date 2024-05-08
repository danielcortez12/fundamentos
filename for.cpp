#include <iostream>

using namespace std;

int main()
{
    int i = 0, n = 0;
    cout << "ingrese un numero para que se ejecute el bucle"
         << "\n";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        cout << i << "\n";
    }
    return 0;
}
