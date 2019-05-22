#include <iostream> 
using namespace std; 

int Sort2(int arr[], int n) 
{ 
	// Keep reducing the interval
	for (int mid = n/2; mid > 0; mid /= 2) 
	{ 
		/*Same as insertion sort except with an interval in the middle. The mid-(1....n) elements are sorted followed by the other elements in a similar way*/ 
		for (int i = mid; i < n; i += 1) 
		{ 
			// add a[i] to the elements that have been gap sorted save a[i] in temp and make a hole at position i 
			int m = arr[i]; 

			// shift earlier gap-sorted elements up until the correct location for a[i] is found 
			int j;			 
			for (j = i; j >= mid && arr[j - mid] > m; j -= mid) 
				arr[j] = arr[j - mid]; 
			
			// put m in its correct location 
			arr[j] = m; 
		} 
	}  
} 

int main() 
{ 
	int arr[256] , n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	for (int i=0; i<n; i++) 
		cin>>arr[i];
	Sort2(arr, n); 
	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
} 

