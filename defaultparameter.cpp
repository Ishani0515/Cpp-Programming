#include<iostream>
using namespace std;
class Area
{
private:
    int area;
    public:
    Area() {
   area=0.0;
    }
Area(int length, int width) {
    area = length * width;
}
   Area(int radius) {
        area = 3.14 *radius*radius;
    }
    //  for triangle
    Area(float f, float base, float height) 
    {
   area = f* base * height;
    }
    int area() {
        return area;
    }
};

int main() {
Area A1, A2(3,5), A3(12),A4(0.5, 4.3, 6.7);
    cout << "Area of Rectangle: " <<A2.area()<< endl;
    cout << "Area of Circle: " << A3.area() << endl;
    cout << "Area of Triangle: " << A4.area() << endl;

    return 0;
}

