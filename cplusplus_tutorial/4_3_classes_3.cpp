//derived classes 
#include <iostream>

using namespace std;

class CPolygon{
    protected:
	int width,height;
    public:
	void set_values(int a ,int b){width = a;height = b;};
};

class CRectangle: public CPolygon{
    public:
	int area (void){return width * height;}
};

class CTriangle: public CPolygon{
    public:
	int area (void){return (width * height)/2;}
};



int main()
{
	CRectangle rect;
	CTriangle trgl;

	rect.set_values(6,7);
	trgl.set_values(6,7);

	cout<<rect.area()<<endl;
	cout<<trgl.area()<<endl;

	return 0;
}
