#include<stdio.h>
using namespace std;
int main()
{
int i, n=5;
for(i=1;i<=n;i++)
{
	for(int j=1;j<=i;j++)
	{
		printf(" ");
	}
	for(int j=1;j<=n-i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
return 0;
}