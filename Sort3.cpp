 #include <iostream> 
using namespace std; 
 
void Sort3(int a[][2], int n) 
{ 
	int index = 0; 

	while (index<n) { 
		if (index==0) 
			index++; 
		if (a[index][0]>=a[index-1][0] || (a[index][0]==a[index-1][0] && a[index][1]>=a[index-1][1])) 
			index++; 
		else { 
			swap(a[index][0],a[index-1][0]);
			swap(a[index][1],a[index-1][1]); 
			index--; 
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
	
	Sort3(a,n); 
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
		cout<<a[i][j];
		cout<<" ";
		}
	cout<<endl;
	}
} 

