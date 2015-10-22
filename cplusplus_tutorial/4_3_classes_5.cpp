//multiple inheritance
#include <iostream>

using namespace std;

class CPolygon{
    protected:
	int width,height;
    public:
	void set_values(int a ,int b){width = a;height = b;};
};

class Output{
    public:
	void out_put(int);
};

void Output::out_put(int a)
{
	cout<<a<<endl;
}

class CRectangle: public CPolygon,public Output{
    public:
	int area (void){return width * height;}
};

class CTriangle: public CPolygon,public Output{
    public:
	int area (void){return (width * height)/2;}
};



int main()
{
	CRectangle rect;
	CTriangle trgl;

	rect.set_values(6,7);
	trgl.set_values(6,7);

	rect.out_put(rect.area());	
	trgl.out_put(trgl.area());	

	return 0;
}
