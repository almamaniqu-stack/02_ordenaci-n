#include <iostream>
using namespace std;

void IDB(int v[], int n)
{
    int izq = 0;
    int der = n;
    while (izq <= der)
    {
        for (int i = izq; i < der - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
        izq++;
        for (int i = der - 1; i > izq; i--)
        {
            if (v[i] < v[i - 1])
            {
                int aux = v[i];
                v[i] = v[i - 1];
                v[i - 1] = aux;
            }
        }
        der--;
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
    IDB(v, n);
    cout << "Arreglo ordenado: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}