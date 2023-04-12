#include<iostream>
using namespace std;

class math{
	
	public : 
		virtual void calculate()=0;
		
};

class area : public math{
	
	public:
		
		int r;
		
		void calculate(){
			
			
			cout<<"enter radius : ";
			cin>>r;
			cout<<"area of circle is : "<<3.14*r*r<<endl<<endl;
			
			
		}
	
};

int main(){
	
		area obj;
		obj.calculate();
		
	
	return 0;
}
