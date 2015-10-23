//template classes

#include <iostream>

using namespace std;

template<class T> class A{
	T value1,value2; 
    public:	
	A(T a, T b);
	T getmax();
};

template<class T> 
A<T>::A(T a, T b)
{
	value1 = a;
	value2 = b;
}

template<class T>
T A<T>::getmax()
{
	T result;
	result = (value1 > value2) ? value1:value2;
	return result;
}

int main()
{
	A<int> my_pair(100,105);	
	cout<<my_pair.getmax()<<endl;
}
