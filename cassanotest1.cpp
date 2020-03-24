//
// Created by Federico Cassano on 28/01/2020.
//
#include <iostream>
using namespace std;

int somma (int &a1, int b1, int c1, int d1, int *e1) { return a1+b1+c1+d1+*e1;}
int main()
{
    int v1=8, v2=12, v3=7, v5=9,v4=v5;
    cout << somma (    v1,     v2,     v3,     v4,     &v5);
}