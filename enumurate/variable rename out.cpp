#include <iostream>
using namespace std;

int main()
{
enum color { red, green=5, blue } c;
c=blue;
  
   cout << "RAT : " << c << endl;
   
   c=green;
   cout << "RAT : " << c << endl;
   
   c=red;
      cout << "RAT : " << c << endl;
   
  
   return 0;
}
