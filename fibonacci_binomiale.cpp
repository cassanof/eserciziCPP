// fattoriale (n)
// prodotto di tutti i numreri decrescenti da n 1
// n=1 ? ->1
// n>2 ? -> n * fattoriale (n-1)
int fact(int n){
    if(n<=1) return 1;

}


// fibonacci (n)
// n==1 || n==0 --> 1   ,  0
// n>=2 ? --> fibonacci(n-1) + fibonacci (n-2)
int fibo(int n) {
    if(n<=0) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}

// binomiale (n , k)
// binomiale (n,0) ? -> 1
// binomiale (n,n) ? -> 1
// binomiale (n,k) ? -> binomiale (n-1,k-1) + binomiale (b-1,k)
int bino(int n, int k) {
    if(n<k) return 0;
    if(n<0) return 0;
    if(k==0 || n==k) return 1;
    return bino(n-1,k-1) + bino(n-1,k);
}