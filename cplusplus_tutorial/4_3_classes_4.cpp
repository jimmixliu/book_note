//constructors and derivated classes

#include <iostream>

using namespace std;

class Mother{
    public:
        Mother(){cout<<"Mother:no paramters"<<endl;};
        Mother(int a){cout<<"Mother:paramters int"<<a<<endl; };
};

class Daughter : public Mother{
    public:
        Daughter(){cout<<"Daughter"<<endl;};
};

class Son : public Mother{
    public:
        Son(int a) : Mother(a){cout<<"Son int"<<a<<endl;};
};

int main()
{
        Daughter d;
        Son s(2);

        return 0;
}
