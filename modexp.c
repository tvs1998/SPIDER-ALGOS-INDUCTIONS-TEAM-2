#include<stdio.h>
void main()
{
	int x,y,z;
printf("enter the values");
scanf("%d %d %d",&x,&y,&z); 
printf("The result is %d", power(x, y, z)); 
}

int power(int x, int y, int p) 
{ 
    int res = 1;   
  
     x = x % p;  // Update x if it is more than or  equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y/2; 
        x = (x*x) % p;   
    } 
    return res; 
} 
