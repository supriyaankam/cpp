#include<bits/stdc++.h>
using namespace std;

template<typename T>

void bubblesort(T arr[],int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 1 ; j < n - i ; j++){
			if(arr[j -1] > arr[j])
				swap(arr[j-1],arr[j]);
		}
	}
}
int main(){
	int arr[4] = {2,1,4,3};
	float a[4] = {1.2,4.5,2.3,3.5};
	
	bubblesort(arr,4);
	bubblesort(a,4);
	for(int i = 0 ; i < 4 ; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
