#include<bits/stdc++.h>
using namespace std;

class Rectangle {

    private:
    int length, breadth;

    
    public:
    void setLength(int l)  //setter function to assign value of 'length'
    {
        length = l;
    }
    void setBreadth(int b)   //setter function to assign value
    {
        breadth = b;
    }
    int getLength(){
        return length;     //getter function to access the value of 'length'
    }
    int getBreadth(){
        return breadth;   //getter function to access the value of 'breadth'
    }

    int area(){
        return length * breadth;
    }

    int parameter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r1;       //object of class 'Rectangle' named as 'r1
    r1.setLength(10);
    r1.setBreadth(5);

    cout<<"Area of Rectangle r1 is "<<r1.area()<<endl;

    cout<<"Parameter of Rectangle r1 is "<< r1.parameter()<<endl;
}