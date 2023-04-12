#include<iostream>
using namespace std;

class A{
	
	public : 
		int a=45;
	private :
		int b = 18;
	protected :
		int c= 07;
	};

class B : public A{
	
	public:	
	
		void display(){
				cout<<"ROHIT : "<<a<<endl;
				cout<<"VIRAT : "<<b<<endl;
				cout<<"DHONI : "<<c<<endl;	
		}
};

int main(){
	
	
	B legend;
	legend.display();
			
	return 0;
}
