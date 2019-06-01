#include<stdio.h>
int main()
{
	int a[3],b[3],c[3],x,y,u,v;
	printf("---> 1 2,");
	scanf("%d",&x);
	printf("---> 2 3,");
	scanf("%d",&y);
	printf("---> 4 5,");
	scanf("%d",&u);
	printf("---> 5 6,");
	scanf("%d",&v);
	factorise(x,y,a,b,c);
	factorise(u,v,a,b,c);
}
int factorise(int x,int y,int a[],int b[],int c[])
{   
    int i;
	//its time for first question
	if(x%5==0)
	{
		a[0]=x/10;
	    a[1]=x/a[0];
	}
	else if(x%7==0)
	{
		a[0]=x/7;
		a[1]=x/a[0];
	}
	else if(x%3==0)
	{
		a[0]=x/9;
		a[1]=x/a[0];
	}
	else if(x%43==0)
	{
		a[0]=x/43;
		a[1]=x/a[0];
	}
	else
	{
		a[0]=8;
		a[1]=16;
	}
	//its time second question
	if(y%5==0)
	{
		b[1]=y/10;
	    b[2]=y/b[1];
	}
	else if(y%7==0)
	{
		b[1]=y/7;
		b[2]=y/b[1];
	}
	else if(y%3==0)
	{
		b[1]=y/9;
		b[2]=y/b[1];
	}
	else if(y%43==0)
	{
		b[1]=y/43;
		b[2]=y/b[1];
	}
	else
	{
		b[1]=8;
		b[2]=16;
	}
	//finalising order of taken three factors
	if(a[1]==b[1])
	{
		c[0]=a[0];
	    c[1]=a[1];
	    c[2]=b[2];
	}
	else if(a[0]==b[1])
	{
		c[0]=a[1];
	    c[1]=a[0];
	    c[2]=b[2];
	}
	else if(a[1]==b[2])
	{
		c[0]=a[0];
	    c[1]=a[1];
	    c[2]=b[1];
	}
	else if(a[0]==b[2])
	{
		c[0]=a[1];
	    c[1]=a[0];
	    c[2]=b[1];
	}
	//printing final order of taken three terms
	for(i=0;i<3;i++)
	{
		printf("%d\t",c[i]);
	}
}
