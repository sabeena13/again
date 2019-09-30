#include <iostream>
using namespace std;
int main() {
  int n,x;
  cin>>n;
  while(n!=0)
  {  
    x=n%100/10;
    n=(n-x)%10/10;
} cout<<x;
return 0;}
