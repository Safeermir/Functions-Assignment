// Program to find the area of a circle using functions taking radius as argument.
#include<iostream>
using namespace std;
float Area(float r){
     float Pi=3.1415;
     return Pi*r*r;

}
int main(){
    float radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"Area of circle is : "<<Area(radius)<<" L^2 Units"<<endl;
}