heapsort.c


#include<stdio.h>
int main()
{   
    int i,j,n,c,k;//i,j used for loops;;n=size of array;;a[] is given array;;b[] is sorted array;;c,k are variables used for code
    float a[100],b[100];
    printf("enter the array size");
    scanf("%d",&n);
    k=n;
    for(j=0;j<k;j++)//array input
    {   
        printf("enter the pair(x,y) as x.y");
    	scanf("%f",&a[j]);
    }
    for(j=0;j<k;j++)//heap sort
    {
		heapify(i,n,a,c);	
	        sortedpart(a,n,b);
	        n=n-1;
    }
    printf("sorted array is\t");
	  for(i=0;i<k;i++)//printing sorted array
	  {
	       	printf("%f\t",b[i]);
	  }
}
int heapify(int i,int n,int a[],int c)//comparing and heapifying
{
	for(i=n/2-1;i>=0;i--)
	{
     	if(a[2*i]<a[2*i+1])//comparing and interchanging parent and right child
	    {   
		    if(a[2*i+1]>a[i])
			{
				c=a[i];
			    a[i]=a[2*i+1];
			    a[2*i+1]=c;
		    }
	    }
	    else//comparing  and interchanging parent with left child
		{
			if(a[2*i]>a[i])
			{
				c=a[i];
			    a[i]=a[2*i];
			    a[2*i]=c;
			}
		}
	}
	
}
int sortedpart(int a[],int n,int b[])//storing peak value of heap in another array
{   
	b[n-1]=a[0];
	a[0]=a[n-1];
	a[n-1]=-1000;
}
