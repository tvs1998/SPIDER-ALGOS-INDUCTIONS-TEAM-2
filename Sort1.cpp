//Normal Quick Sort
#include <iostream> 
using namespace std; 

/* Last element is talen as pivot and then pivot is correctly placed with lesser and greater elements at the left and right of the pivot respectively */
int partition(int arr[][2], int l, int h) 
{ 
	int x=arr[h][0];
	int y=arr[h][1]; 
	int i=(l - 1); 

	for (int j=l;j<=h-1;j++) { 
		if (arr[j][0]<=x || (arr[j][0]==x && arr[j][1]<=y)) { 
			i++; 
			swap(arr[i][0],arr[j][0]); 
			swap(arr[i][1],arr[j][1]);
		} 
	} 
	swap(arr[i+1][0],arr[h][0]); 
	swap(arr[i+1][1],arr[h][1]); 
	return (i+1); 
} 

// brr[]-Sorted array, l-Starting index, h-Ending index
void Sort1(int brr[][2],int l,int h) 
{ 
	if (l<h) { 
		int p = partition(brr,l,h); // partitioning done according to index
		Sort1(brr,l,p-1); 
		Sort1(brr,p+1,h); 
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
	
	Sort1(a,0,n-1); 
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
		cout<<a[i][j];
		cout<<" ";
		}
	cout<<endl;
	}
} 



