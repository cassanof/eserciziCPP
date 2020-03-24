#include <iostream>
using namespace std;
int main() {
    float a,b,c, somma;
    char risp; //attenzione, quando si usa char la variabile può avere solo 1 carattere
    do {
        cout << "primo numero "; cin >> a;
        cout << "secondo numero "; cin >> b;
        cout << "terzo numero "; cin >> c;
        somma=a+b+c;
        cout << "La somma dei 3 numeri e': " << somma;
        cout << "\nvuoi continuare? "; cin >> risp;
        if (a>b && a>c) cout << "a e' il maggiore";
        if (b>a && b>c) cout << "b e' il maggiore";
        if (c>b && c>a) cout << "a e' il maggiore";
        if (c==b && c==a) cout << "sono uguali";
    } while (risp=='s');
}