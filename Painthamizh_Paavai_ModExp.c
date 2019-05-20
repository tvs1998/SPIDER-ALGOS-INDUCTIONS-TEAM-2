
#include <stdio.h> 
int function(int x,int y, int z) 
{ 
int o= 1;	 
x = x % z;
while (y > 0) 
{
if (y%2!=0) 
o = (o*x) % z; 
y = y/2 ;
x = (x*x) % z; 
} 
return o; 
} 

 
int main() 
{
int x,y,z;
printf("enter the values");
scanf("%d %d %d",&x,&y,&z); 
printf("THE RESULT IS %d", function(x, y, z)); 
return 0; 
} 
