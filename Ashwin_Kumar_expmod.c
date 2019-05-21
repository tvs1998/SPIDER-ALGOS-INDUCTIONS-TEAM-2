#include <stdio.h>  
  
int expMod(int A, int B, int C) 
{ 
    
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
  long y; 
    if (B % 2 == 0) { 
        y = expMod(A, B / 2, C); 
        y = (y * y) % C; 
    } 
  
    else { 
        y = A % C; 
        y = (y * expMod(A, B - 1, C) % C) % C; 
    } 
  return (int)((y + C) % C); 
} 
  

int main()  
{  
   int A = 2, B = 5, C = 13; 
   printf("Power is %d", expMod(A, B, C));  
   return 0;  
}  
