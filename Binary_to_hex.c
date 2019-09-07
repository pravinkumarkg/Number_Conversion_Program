#include <stdio.h>

int main(void) {
	long int binary,hex=0,count=1,digit;
	scanf("%ld",&binary);
	while(binary!=0)
	{
		digit=binary%10;
		hex+=digit*count;
		count*=2;
		binary/=10;
	}
	printf("%lX",hex);
	return 0;
}
