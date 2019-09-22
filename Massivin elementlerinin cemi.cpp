#include <iostream>
using namespace std;
   const int n=5;
int main ()
{
	int a[n],i,s=0;
	for (i=0;i<5; i++)
	cin>>a[i];
	for (i=0;i<5; i++)
    s=s+a[i];
	cout<<"s="<<s;
	return 0;
}
