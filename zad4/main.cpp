#include <iostream>

using namespace std;

long long int silnia(int n)
{
	return n<2 ? 1 : n*silnia(n-1);
}

int main(int argc, char** argv)
{
	for(int i=0;i<=20;i++)
		cout<<"silnia z "<<i<<" wynosi:"<<silnia(i)<<endl;
	
	return 0;
}
