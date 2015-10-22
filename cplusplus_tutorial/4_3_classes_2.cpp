//friend classes 
#include <iostream>

using namespace std;

class Square;

class CRectangle {
	int width,height;
    public:
	void set_values (int , int);
	int area (void){return width * height;}
	void convert(Square);
};

class Square {
	int side;
    public:
	void set_values(int);
	friend class CRectangle;
};

void Square::set_values(int a)
{
	side = a;
}

void CRectangle::set_values(int a,int b)
{
	width = a;
	height = b;
}


void CRectangle::convert(Square param)
{
	width = param.side;
	height = param.side;
}

int main()
{
	CRectangle rect;
	Square quare;

	quare.set_values(3);
	rect.convert(quare);
	cout<<rect.area()<<endl;

	return 0;
}
