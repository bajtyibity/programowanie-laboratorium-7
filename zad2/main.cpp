#include <iostream>

using namespace std;


int nwd(int a, int b)
{
   return a!=b ? nwd(a>b?a-b:a,b>a?b-a:b) : a;
}

int main(int argc, char** argv) 
{
	
for(int i=1;i<=9;i++)
	for(int i2=1;i2<=9;i2++)
		cout<<"dla a:"<<i<<" dla b:"<<i2<<" nwd = "<<nwd(i,i2)<<endl;
	
	return 0;
}
