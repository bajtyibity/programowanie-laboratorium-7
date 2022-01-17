#include <iostream>

using namespace std;

long long int fib(int n,int a,int b,int c);
long long int prefib(int n);
	
long long int prefib(int n)
{
	if(n==0)
	return 0;
		
	else if(n==1)
	return 1;
	
	else if(n==2)
	return 1;
	
	else
	fib(n,0,1,1);
	
}

long long int fib(int n,int a,int b,int c)
{
	if(n-3)
		{
		a<b ? (a<c ? a=b+c : c=a+b) : (b<c ? b=a+c : c=a+b);
		n--;
		fib(n,a,b,c);
	 	}
	else
	return a<b ? (a<c ? a=b+c : c=a+b) : (b<c ? b=a+c : c=a+b);
}


using namespace std;
int main(int argc, char** argv)
{
	for(int i=0;i<=40;i++)
 	cout<<"fibonacji dla liczby "<<i<<" wynosi: "<<prefib(i)<<endl;

 	
	return 0;
}
