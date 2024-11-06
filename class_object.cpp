#include <iostream>
using namespace std;

class Rectangle {
  private:
    double width;
    double height;
  
  public:
  Rectangle(double w,double h){
    
    width = w;
    height = h;
    
  }
  
  double calcArea(){
    return width*height;
  }
  double calcPm(){
    return 2 * (width + height);
  }
  
  void displayDimension(){
    cout << "width: " << width << ", height: " << height << endl;
  }
};
int main() 
{
    Rectangle rect(5.0,10.0);
    rect.displayDimension();
    cout << "Area: " << rect.calcArea() << endl;
    cout << "Perimeter: " << rect.calcPm() << endl;
    return 0;
}

