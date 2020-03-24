#include <iostream>
using namespace  std;
int main(int argn, char ** argc, char ** env)
  {
  	char ** mioenv=env; // preservo env
   cout << "numero :" << argn<<endl;
   for (int i=0; i<argn ;i++)
     cout << "arg "<<i << ": "<<argc[i]<<endl;
   while (char * c=*mioenv++)
     cout << "env "<< ": "<<c<<endl;  
   mioenv=env;
   cout<<endl;
   for (int i=0; mioenv[i]!=0 ;i++)
     cout << "env "<< ": "<< mioenv[i] <<endl;  
   
}
