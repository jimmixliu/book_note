//use namespace example

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
	{
		using namespace first;
		cout<<var<<endl;
	}

	{
		using namespace second;
		cout<<var<<endl;
	}
	return 0;
}
