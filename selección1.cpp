#include <iostream>
using namespace std;

void S(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = i, menor = v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < menor)
            {
                menor = v[j];
                k = j;
            }
        }
        v[k] = v[i];
        v[i] = menor;
    }
}

int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int v[n];
    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    S(v, n);
    cout << "Arreglo ordenado (con selección directa): " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}