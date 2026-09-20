#include <iostream>
using namespace std;

void IDI(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > 0 + i; j--)
        {
            if (v[j] < v[j - 1])
            {
                int aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int v[n];
    cout << "Ingrese los elementos del arreglo: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    IDI(v, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}