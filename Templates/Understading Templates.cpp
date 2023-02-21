#include<iostream>
using namespace std;

template <typename T>
class c1{
	T a1,a2;
	public:
		T get(){
			cin>>a1>>a2;
		} 
		
		T put(){
			return a1+a2;
		}
};

template <typename V>
class c2{
	V a1,a2;
	public:
		V get(){
			cin>>a1>>a2;
		} 
		
		V put(){
			return a1-a2;
		}
};

int main(){
	
	c1<int> c11;
	c2<int> c22;
	
	c11.get();
	c22.get();
	
	cout<<c11.put()<<"  "<<c22.put()<<endl;
}
