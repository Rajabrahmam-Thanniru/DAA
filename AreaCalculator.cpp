#include<iostream>
using namespace std;
class Circle
{
    private:
    int radius;
public:
     Circle(int r) : radius(r) {}
     void setRadius(int r){
         radius = r;
     }
     int getRadius(){
         return radius;
     }
   //Include appopriate methods for the class
    
};
class Utility
{
    public:
         double calculateArea(Circle c){
             double area = 3.14 * c.getRadius() *c.getRadius();
             return area;
         }
    //Include appopriate methods for the class
};
int main()
{
    //Input statements are provided as part of the code skeleton
    int radius=0;
    cout<<"Enter the radius(in cm)"<<endl;
    cin>>radius;
    
    //Fill the code here 
    Circle circle(radius);
    
    Utility util;
    double area = util.calculateArea(circle);
    cout << "Circle Area=" << area << "cm2"<< endl;
    
    return 0;

}
