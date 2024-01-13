#include<bits/stdc++.h>
using namespace std;

class Rectangle {
    public:
    float len;
    float width;

    int area(){
        return len*width;
    }
    int parameter(){
        return 2*(len+width);
    }
};

int main(){
    Rectangle r1,r2;
    r1.len = 10;
    r1.width = 5;
    cout<<"Area of rectangle 1 is "<<r1.area()<<endl;

    r2.len = 5;
    r2.width = 5;
    cout<<"Parameter of rectangle 2 is "<<r2.parameter()<<endl;
}