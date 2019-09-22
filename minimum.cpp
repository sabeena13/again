#include <iostream>
using namespace std;
const int n=5;
int main()
{ int a[n],i, min;
  for(i=0; i<n; i++)
  cin>>a[i];
    min=a[0];
  for(i=1; i<n; i++)
  if (min>a[i]) 
{    min=a[i]; }
cout<<min;

    return 0;
	
}
