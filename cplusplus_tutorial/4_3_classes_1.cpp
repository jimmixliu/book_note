//friend function
#include <iostream>

using namespace std;

class CRectangle {
	int width,height;
    public:
	void set_values (int , int);
	int area (void){return width * height;}
	friend CRectangle duplicate(CRectangle);
};

void CRectangle::set_values(int a,int b)
{
	width = a;
	height = b;
}

CRectangle duplicate(CRectangle rectparam)
{
	CRectangle temp;
	temp.width = rectparam.width;
	temp.height = rectparam.height;

	return temp;
}

int main()
{
	CRectangle rect,rectb;

	rect.set_values(3,4);
	rectb = duplicate(rect);

	cout<<rectb.area()<<endl;

	return 0;
}
