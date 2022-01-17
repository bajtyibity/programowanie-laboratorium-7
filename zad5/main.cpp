#include <iostream>
#include <iomanip>

using namespace std;

float funkcja_x(float n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 0.5f;
	else if(n>2)
	{
		return (-funkcja_x(n-1))*funkcja_x(n-2);
	}
}

int main(int argc, char** argv) 
{
	for(int i=1;i<=10;i++)
	cout<<funkcja_x(i)<<endl;
	
	
	return 0;
}
