#include <iostream>

struct Point            // definition of a screen-dot
{
    int x;              // coordinates
    int y;              // x/y
    void draw();        // drawing function
};

void Point::draw() {
    std::cout << "x = " << x << "; y = " << y << std::endl;
}

int main( int argc, char * argv[]){
    Point a;                // two points on
    Point b;                // the screen

    a.x = 0;                // define first dot
    a.y = 10;               // and draw it
    a.draw();

    b = a;                  // copy a to b
    b.y = 20;               // redefine y-coord
    b.draw();               // and draw it
}
