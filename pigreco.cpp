#define pigreco 3.1415
#include <iostream>
//using namespace std;

int main()
{
    float raggio;
    std::cout << "dammi il raggio";
    std::cin >> raggio;
    std::cout << "circonferenza: "<< pigreco * 2 * raggio;
}