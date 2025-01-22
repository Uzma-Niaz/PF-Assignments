#include<iostream>
using namespace std;
int main(){
	int num,positive=0 , neg=0;
	do{
	cout<<"Enter your numbers: "<<endl;
	cin>>num;
	if (num>0){
	positive++;
	}
	else{
		neg++;
	}
  }while(num!=0);
  
  cout<<"The number of negative input: "<<neg<<endl;
  cout<<"The number of positive input: "<<positive<<endl;
}

