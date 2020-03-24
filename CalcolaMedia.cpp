#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[10], sum_1=0.0, media;
    cout << "Inserisci il numero campioni tra 3 e 10: ";
    cin >> n;
    while (n > 10 || n <= 3)
    {
        cout << "Non e' tra 3 e 10 rimetti il numero: " << "\n"; cin >> n;
    }
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Inserisci il numero: ";
        cin >> num[i];
        sum_1 += num[i];
    }
    media = sum_1 / n;
    cout << "Media : " << media << "\n";
    return 0;
}