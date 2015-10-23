//use namespace 

#include <iostream>

using namespace std;

namespace first{
	int var = 5;	
}

namespace second{
	int var = 2;
}

int main()
{
	cout<<first::var<<endl;
	cout<<second::var<<endl;
	return 0;
}
