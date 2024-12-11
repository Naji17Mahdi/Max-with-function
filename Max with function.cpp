#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int max ( int a , int b , int c )
{
	int m;
	m = a;
	if ( b > a )
	{
		m = b;
	}
	if ( c > a )
	{
		m = c;
	}
	return m;
}
main()
{
	int x , y , z;
	
	cout<<"Enter x:"<<endl;
	cin>>x;
	
	cout<<"Enter y:"<<endl;
	cin>>y;
	
	cout<<"Enter z:"<<endl;
	cin>>z;
	
	cout<<"Max = "<<max( x , y , z );
}
