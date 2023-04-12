#include<iostream>
using namespace std;

class parent{
	
	public : 
		virtual void display(){
			
			cout<<"then i maybe your father"<<endl;
			
		}
		
};

class child : public parent{
	
	public:	
	
		void display(){
				cout<<"i m your child"<<endl;
				
		}
	
};

int main(){
	
	
	parent obj1,*obj2;
	child obj3;
	
	obj2 = &obj3;
	obj2->display();
	obj1.display();
			
	return 0;
}
