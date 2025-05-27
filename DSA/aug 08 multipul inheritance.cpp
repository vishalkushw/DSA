#include <iostream>
using namespace std;
class Parent1{
	public:
		int data;
		void f1(){
		cout<<"this is function f1 of class parent 1\n";	
		}
};
class Parent2{
	public:
		int data;
			
		void f1(){
		cout<<"this is function f1 of class parent 2\n";
		}
};

class Child: public Parent1, public Parent2{
}; 

int main(){
	Child obj;
	obj.Parent2::f1();
}

//
