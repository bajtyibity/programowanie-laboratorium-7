#include <iostream>

using namespace std;

int d_b(int i)
{
    return i == 0 ? 0: i % 2 + 10 * d_b(i / 2);
}
      
int main(int argc, char** argv) 
{
	
	for(int i=0;i<16;i++)
	cout<<"i = "<<i<<" binarnie "<<d_b(i)<<endl;

	
	
	return 0;
}
