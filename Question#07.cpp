#include<iostream>
using namespace std;
int main(){
	int arr[100],length,arr1[100],sum=0;
	cout<<"Input the number of elements to be stored in the array :";
	cin>>length;
	for(int i=0; i<=length-1; i++){
     cout<<"Enter element "<<i<<endl;
     cin>>arr[i];
	}
	cout<<"The elements copied into the second array are :";
	for(int i=0; i<=length-1; i++){
		arr1[i]=arr[i];
		cout<<arr1[i]<<" "<<endl;
	}
	
	for(int i=0; i<=length-1; i++){
		if(arr1[i]%2==0){
			sum=arr1[i]+sum;
		}
	}
	
	cout<<"The sum of even numbers are: "<<sum;
	
}
