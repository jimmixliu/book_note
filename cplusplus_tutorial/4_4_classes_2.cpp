//virtual members 
#include <iostream>

using namespace std;

class CPolygon{
    protected:
	int width,height;
    public:
	void set_values(int a ,int b){width = a;height = b;};
	virtual int area(void){return 0;}
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
	CPolygon polyg;
	CPolygon *poly1 = &rect;
	CPolygon *poly2 = &trgl;
	CPolygon *poly3 = &polyg;

	poly1->set_values(6,7);
	poly2->set_values(6,7);
	poly3->set_values(6,7);


	cout<<poly1->area()<<endl;
	cout<<poly2->area()<<endl;
	cout<<poly3->area()<<endl;

	return 0;
}
