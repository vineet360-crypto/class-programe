#include<iostream>
using namespace std;

void pattern(int n){
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
}
int main(){
int n;
cout << "Enter the value of n";
cin >> n;
pattern(n);
return 0;
}