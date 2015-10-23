//exceptions

#include<iostream>

using namespace std;

int main()
{
	char my_arrary[10];
        char my_error[]="out of range";
	try{
		for(int n = 0; n < 11; n++ ){
			if(n > 9) throw my_error;
		}
	}catch (char *str){
		cout<<"Exception"<<endl;
		cout<<str<<endl;
	}
	
	return 0;
}
