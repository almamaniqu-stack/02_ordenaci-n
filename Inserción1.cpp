#include <iostream>
using namespace std;

void ID(int v[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1, aux = v[i];
        while (j >= 0 && aux < v[j])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
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
    ID(v, n);
    cout << "Arreglo ordenado (con inserción directa): " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}