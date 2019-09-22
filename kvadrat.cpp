#include <iostream>
#include  <cmath>
using namespace std;
int main ()
{
	int a,b,c;
	float D,x,y;
	cin>>a>>b>>c;
    D=b*b-4*a*c;
    if (D>=0)
    {
    	x=((-b+sqrt(D)))/2*a;
    	y=((-b-sqrt(D)))/2*a;

	cout<<x<<","<<y; }
	else
{ cout<<"kok yoxdur";}
	return 0;
}
