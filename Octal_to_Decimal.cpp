#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long octal,decimal=0,temp;
	int digit,place=0;
	cin>>octal;
	temp=octal;
	while(temp>0)
	{
		digit=temp%10;
		decimal+=pow(8,place)*digit;
		
		temp/=10;
		place++;
	}
	cout<<decimal;
	return 0;
}
