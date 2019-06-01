#include<stdio.h>
#include<math.h>
int main()
{
	char a[1000000];
	int k=0,n=0,size,s;
	scanf("%d",&size);
	s=size;
	while(s%2==0)
	{
		n++;
		s=s/2;
	}
	s=pow(2,n);
	if(s==1)
	{   
	    scanf("%s",a);
		printf("0");
	}
	else if(size==s)
	{   
	    scanf("%s",a);
	    sym(k,a,n);
	    
	}
	else
	{
	    printf("invalid input");	
	}
}
sym(int k,char a[],int n)
{   
    int i,s,j=0,h;
    s=pow(2,n-1);
    for(i=0;i<s;i++)
	{   
	    h=pow(2,n-1)+i;
		if(a[i]==a[h])
		j++;
	}
	if(i==j)
	{
	    if(i!=1)
	    {   
	        k++;
	        sym(k,a,n-1);
        }
        
	    else
	    {
	        k++;
	        printf("%d",k);	
	    }	
	}
	else
	printf("%d",k);	
}
