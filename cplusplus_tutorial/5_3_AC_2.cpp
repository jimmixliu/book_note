//exceptions:mulitple catch

#include<iostream>

using namespace std;

int main()
{
	char *my_arrary;
	char my_alloc_error[]="allocation failure";

	my_arrary = new char[10];
	try{
		if(my_arrary == NULL)throw my_alloc_error;
		for(int n = 0; n < 11; n++ ){
			if(n > 9) throw n;
		}
	}catch (char *str){
		cout<<"Exception"<<endl;
		cout<<str<<endl;
	}catch (int i){
		cout<<"Exception number"<<endl;
		cout<<i<<endl;
	}
	
	return 0;
}
