#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	for(i=0;num>9;i++)
	{
		num=sum_of_digits(num);
	}
	printf("%d",i);
}
sum_of_digits(int num)
{   
    int sum=0;
	for(;num/10!=0;)
	{
		sum=sum+num%10;
		num=num/10;
	}
	sum=sum+num;
	return sum;
}
