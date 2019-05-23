#include <iostream> 
using namespace std; 

int Sort2(int arr[][2], int n) 
{ 
	// Interval reduces by half
	for (int mid=n/2;mid>0;mid/=2) 
	{ 
		//Same as insertion sort except with an interval in the middle. The mid-(1....n) elements are sorted followed by the other elements in a similar way
		for (int i=mid; i<n; i+=1) 
		{ 
			int m=arr[i][0]; 
			int n=arr[i][1];

			// shift earlier mid-sorted elements up until the correct location for a[i][0] is found 
			int j;			 
			for (j=i;j>=mid && ((arr[j-mid][0]>m) || (arr[j-mid][0]==m && arr[j-mid][1]>n)); j-=mid){
				arr[j][0] = arr[j-mid][0]; 
				arr[j][1] = arr[j-mid][1];
			}
			// put m & n in their correct location 
			arr[j][0] = m;
			arr[j][1] = n; 
		} 
	}  
} 

int main() 
{ 
	int a[256][2];
	int n;
	cout<<"Enter size of Array"<<endl;
	cin>>n; 
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
		cin>>a[i][j];
		cout<<" ";
		}
	cout<<endl;
	}
	
	Sort2(a,n); 
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
		cout<<a[i][j];
		cout<<" ";
		}
	cout<<endl;
	}
} 


