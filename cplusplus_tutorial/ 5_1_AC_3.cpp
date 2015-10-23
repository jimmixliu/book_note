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
	return 0;
}


template<> 
class A<int>{
	int value1,value2; 
    public:	
	A(int a, int b)
	{
		value1 = a;
		value2 = b;
	}
	int getmax()
        {
		int result;
		result = (value1 > value2) ? value1:value2;
		return result;
	}
};

//template<> 
//A<int>::A(int a, int b)
//{
//	value1 = a;
//	value2 = b;
//}

//template<> 
//int A<int>::getmax()
//{
//	int result;
//	result = (value1 > value2) ? value1:value2;
//	return result;
//}



int main()
{
	A<int> my_pair(100,105);	
	A<float> my_pair1(3.2,3.5);
	cout<<my_pair.getmax()<<endl;
	cout<<my_pair1.getmax()<<endl;
}
