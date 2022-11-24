// Ken Bauer
// example code for my students

#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
    Point* p1 = new Point(3,3);
    Point* p2 = new Point(5,5);
    cout << "Point p1 es: " << p1->toString() << endl;
    cout << "Point p2 es: " << p2->toString() << endl;
    cout << "P2 to origin is: " << p2->distancia_al_origen() << endl;
    cout << "P1 to P2 distance is: " << p1->distancia(p2) << endl;

    return 0;
}
