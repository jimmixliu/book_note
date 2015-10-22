//template function

#include <iostream>

using namespace std;

template <class T> T get_max(T a,T b)
{
	T result;
	result = (a>b)?a:b;
	return result;
}


int main()
{
	int i = 5,j = 6, k;
	long l = 8, m = 9, n;

	k = get_max<int>(i,j);
	n = get_max(l,m);

	cout<<k<<endl;
	cout<<n<<endl;

	return 0;
}
