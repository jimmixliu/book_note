//standard exceptions
#include<iostream>
#include<exception>
#include<typeinfo>

using namespace std;

class A{
	virtual void f() {};
};

int main()
{
	try{
		A *a = NULL;
		typeid (*a);
	}catch(std::exception &e){
		cout<<"Execption:"<<e.what()<<endl;
	
	}

	return 0;
	
}
