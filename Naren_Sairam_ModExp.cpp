#include <iostream>
using namespace std;
int power(int x, unsigned int y, int p){ 
	int res = 1;      // Initialize result   
	x = x % p;  // Update x if it is more than or equal to p 
	while (y > 0){ // If y is odd, multiply x with result 
    	  if (y%2==1) 
             res = (res*x) % p; 
    	// y must be even now 
    	   y = y/2; // y = y/2 
    	x = (x*x) % p;   
	} 
	return res; 
} 
int main(){
 	int a,b,c,ans=0;
 	cout<<"Enter two numbers and the number to use as mod"<<endl;
 	cin>>a>>b>>c;
 	ans=power(a,b,c);
 	cout<<"The answer is: "<<res<<endl;
 }