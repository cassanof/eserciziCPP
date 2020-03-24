#include <iostream>
#include <limits.h>
#define Int32 int
#define Unita (500+500)
#define LUN_NOMI 40

struct prodotto {
    char nome[LUN_NOMI];
    char fornitore[LUN_NOMI];
    Int32 p_acquisto;
    Int32 p_vendita;
    int quantita;
};

double ricavo (const prodotto & p1){
    double r1;
    r1=p1.quantita *(p1.p_vendita - p1.p_acquisto) / Unita;
    return r1;
}
void aumento(prodotto & p2, double aumento_perc){
    p2.p_vendita= p2.p_vendita*(1+aumento_perc/100);
}

int main(){
    prodotto p1={"pere","",1200,1600,10};
    prodotto p2={"mele","",900,1100,40};
    std::cout<<"\nricavo € " << p1.nome << " " << ricavo(p1);
    std::cout<<"\nricavo € " << p2.nome << " " << ricavo(p2);
    aumento (p1,10);
    aumento (p2,10);
    std::cout<<"\nricavo € " << p1.nome << " " << ricavo(p1);
    std::cout<<"\nricavo € " << p2.nome << " " << ricavo(p2) <<"\n";
}