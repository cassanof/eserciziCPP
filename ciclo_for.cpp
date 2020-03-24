#include <iostream>
using namespace std;

int main() {
    int i;
    for(i=9; i>=0; i=i-1){
        cout << i <<"\n";
    }
    int a;
    for(a=1; a<=10; a=a+1){
        cout << a <<"\n"; 
        if(i==3){
            break;
        }
    }
    int q = 10;
    while(q<20){
        q++;
        cout << "while " << q << "\n";
    }
    cout << "lezione 2\n";
    int f=0;
    cout << "numero di cicli: "; cin>>f;
    if(f<0 || f>10)
    {
        cout << "dati errati!";
        return 0;
    } do {
        cout << f << " ";
        f--;
    } while (f>0);
    return 0;

}