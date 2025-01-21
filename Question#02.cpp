#include<iostream>
using namespace std;
int main(){
	int start,end,product=1;
	cout<<"Enter your starting no: "<<endl;
	cin>>start;
	cout<<"Enter your ending no: "<<endl;
	cin>>end;
	cout<<"The even numbers are: ";
	for(int i=start;i<=end;i++){
		if(i%2==0){
			cout<<i<<",";
		}
	
		else {
			product=product*i;
		    
		
		}
}
	cout<<endl;
			cout<<"The product of odd numbers are :"<<product;
	
	
	
	return 0;
}
