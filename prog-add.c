#include <stdio.h>
#include <inttypes.h>

int64_t add(int64_t,int64_t);

int main()
{
	long int a,b;
	printf("Enter the first Number : ");
	scanf("%ld",&a);
	printf("Enter the second Number : ");
	scanf("%ld",&b);
	
	printf("The sum of both number is : %ld\n",add(a,b));
	return 0;
}
