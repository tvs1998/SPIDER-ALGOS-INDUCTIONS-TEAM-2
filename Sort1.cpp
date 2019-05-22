#include<iostream> 
using namespace std; 

void Sort1(int arr[], int n) 
{ 
	// The output character array that will have sorted arr 
	int output[n]; 

	//Count array to store count of individual characters and initialize count array as 0 
	int count[256], i; 
	memset(count, 0, sizeof(count)); 

	// Store count of each character 
	for(i = 0; arr[i]; ++i) 
		++count[arr[i]]; 

	// Change count[i] so that count[i] now contains actual position of this character in output array 
	for (i = 1; i <= 255; ++i) 
		count[i] += count[i-1]; 

	for (i = 0; arr[i]; ++i) 
	{ 
		output[count[arr[i]]-1] = arr[i]; 
		--count[arr[i]]; 
	} 


	// Copy the output array to arr, so that arr now contains sorted characters 
	for (i = 0; arr[i]; ++i) 
		arr[i] = output[i]; 
}  
int main() 
{ 
	int arr[256];
	int n;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	Sort1(arr,n); 

	for(int i=0;i<n;i++)
		cout<<arr[i];
} 

