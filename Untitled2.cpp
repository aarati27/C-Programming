#include<stdio.h>
int check(int);
int main()
{
	int n;
	printf("Enter any Number:");
	scanf("%d",&n);
	check(n);
}
int check(int n)
{
	if(n%2==0)
	printf("Given number %d is Even",n);
	else
	printf("Given number %d is Odd",n);
}
