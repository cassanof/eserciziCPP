#include <iostream>

double fiborec(int n)
{ // https://it.wikipedia.org/wiki/Successione_di_Fibonacci
    if (n<=0) return 0;
    if (n==1) return 1;
    return fiborec(n-1)+fiborec(n-2);
}

long double fibononrec(int n)
{
    int chiamate = 0;
    if(n <= 1){ return n; }
    long double fibo = 1;
    long double fiboPrev = 1;
    for(int i = 2; i < n; ++i){
        chiamate++;
        long double temp = fibo;
        fibo += fiboPrev;
        fiboPrev = temp;
        }
    std::cout << chiamate<<"\n";
    return fibo;

}

int main(){
    //std::cout << fiborec(50);
    std::cout << fibononrec(25);
}