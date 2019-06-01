#include<stdio.h>
int main()
{
	int n,r,x,y;
	printf("n,r,x,y\n");
	scanf("%d %d %d %d",&n,&r,&x,&y);
	if(n>=1&&n<=1000000000&&r>=1&&r<=3000&&x>=1&&x<=100&&y>=1&&y<=100)
	{
		function(n,r,x,y);
	}
	else
	printf("invalid input");
}
function(int n,int r,int x,int y)
{
	int c[n],s[n],i=0,j=0,k=0,fr=r;
	printf("c[i]\n");
	for(i=0;i<n;i++)
	{  
		scanf("%d",&c[i]);
	}
	printf("s[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(c[i]==0||c[i]==1)
		j++;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]==0||s[i]==1)
		k++;
	}
	if(j==n&&k==n)
	{
		for(i=0;i<n;i++)
	    {
		    if(c[i]==1)
		    {
			    if(s[i]==1)
			    fr+=x;
                           if(s[i]==0)
			    fr-=y;
		    }
	    }
	    if(fr>r)
	    printf("promoted");
	    else if(fr<r)
	    printf("demoted");
	    else
	    printf("no change");
	}
	else
	printf("invalid input");
}
