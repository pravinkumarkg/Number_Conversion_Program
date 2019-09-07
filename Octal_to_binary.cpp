#include <iostream>
using namespace std;

int main() {
	int octal_cons[]={0,1,10,11,100,101,110,111};
	long long binary=0,octal,temp,place=1;
	int digit;
	cin>>octal;
	temp=octal;
	while(temp>0)
	{
		digit=temp%10;
		binary=(octal_cons[digit]*place)+binary;
		temp/=10;
		place*=1000;
	}

	cout<<binary;
	return 0;
}
