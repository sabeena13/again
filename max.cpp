#include <iostream>
using namespace std;
const int n=5;
int main()
{ int a[n],i, max;
  for(i=0; i<n; i++)
  cin>>a[i];
    max=a[0];
  for(i=1; i<n; i++)
  if (max<a[i]) 
{    max=a[i]; }
cout<<max;

    return 0;
	
}
