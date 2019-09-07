#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
	int binary,decimal=0,pos=0,digit;
	cin>>binary;
	while(binary!=0)
	{
		digit=binary%10;
		decimal+=digit*pow(2,pos);
		pos++;
		binary/=10;
	}
	cout<<decimal;
	return 0;
}
