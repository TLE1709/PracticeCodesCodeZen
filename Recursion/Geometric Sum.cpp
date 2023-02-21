#include<iostream>
#include<cmath>
using namespace std;

double geometricSum(int k) {
    
    if(k==0){
    	return 1.0;
	}


	double ans=geometricSum(k-1);
	return ans+ (1/pow(2,k));
}


int main(){
	int k;
	cout<<"Enter K : ";
	cin>>k;
	printf("%.5f",geometricSum(k));
	
	
}
