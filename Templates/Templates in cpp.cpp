#include<iostream>
using namespace std;

template <typename T,typename V>

class Pair{
	
	T x;
	V y;
	
	public:
		
		void setX(T x){
			this->x=x;
		}
		
		T getX(){
			return x;
		}
		
		void setY(V y){
			this->y=y;
		}
		
		V getY(){
			return y;
		}
};

int main(){
	
	Pair<Pair<int,int>,int>p1;
	Pair<int,int>p2;
	
	p2.setX(15);
	p2.setY(30);
	
	p1.setX(p2);
	p1.setY(20);
	
	cout<<p1.getX().getX()<<" "<<p1.getX().getY()<<" "<<p1.getY()<<endl;
}
