randomised quicksort.c


#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int size,i=0,k;
    float a[100];
    printf("enter the size of array");//taking array size
    scanf("%d",&size);
    for(k=0;k<size;k++)//taking array
    {
    	printf("enter the pair(x,y) as x.y");
    	scanf("%f",&a[k]);
    }
    sufflearray(a,size);//randomising
    quicksort(a,0,size-1);//quicksort
    printf("sorted array\n");
    for(k=0;k<size;k++)//printing final array
    {
    	printf("%f\t",a[k]);
    }  
}
int quicksort(int a[],int l,int r)
{   
    int pivot,i,j,p,c,ra;
    if(l<r)
    {   
        pivot=a[l];
        i=l+1;
        j=r;
        while(i<=j)
        {
            while(a[i]<=pivot)
                i++;
            while(a[j]>pivot)
                j--;
            if(i<j)
            {
                c=a[i];//swapping
                a[i]=a[j];
                a[j]=c; 	
            }
        }
        c=a[l];//swapping
        a[l]=a[j];
        a[j]=c;
        quicksort(a,l,j-1);
        quicksort(a,j+1,r);
    }
}
int sufflearray(int a[],int size)
{   
      int i,j,c;
	    for(i=0;i<size;i++)
	    {
		      j=rand()%(i+1);
		      c=a[i];
		      a[i]=a[j];
                    a[j]=c;
	    }
}
