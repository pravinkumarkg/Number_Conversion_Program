#include <iostream>
using namespace std;

int main() {
	int octal_cons[]={0,1,01,10,100,101,110,111};
	int binary,temp,octal=0;
	cin>>binary;
	int i,place=1,digit;
	temp=binary;
	while(temp!=0)
	{
		digit=temp%1000;
		for(i=0;i<8;i++)
		{
			if(octal_cons[i]==digit)
			{
				octal=(i*place)+octal;
			}
		}
		temp/=1000;
		place*=10;
	}
	cout<<octal;
	return 0;
}
