#include <iostream>
#include <cmath>

class punto2d
{
    public:
    float x,y;
};

float distanza_2d(punto2d p1, punto2d p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+pow(p1.y-p2.y,2));
}

int main(){
    punto2d pu1, pu2;
    pu1.x=7; pu1.y=9;
    pu2.x=17; pu2.y=3;
    std::cout << "la distanza e' " << distanza_2d (pu1,pu2) << "\n";
}