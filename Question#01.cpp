#include<iostream>
using namespace std;
int main(){
	int nth,sum=0;
	cout<<"ENTER THE Nth TERM: "<<endl;
	cin>>nth;
	int i=1;
	while(i<nth){
		cout<<i<<"*"<<i<<"="<<i*i<<endl;
	    i++;
	 sum = sum + i;
}
    cout<<"The sum of above series is "<<sum;
	return 0;
}
