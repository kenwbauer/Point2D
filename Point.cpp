// Ken Bauer
// example code for my students

#include "Point.h"
#include <cmath>
#include <string>
using std::to_string;

Point::Point(){
  this->x = 0.0;
  this->y = 0.0;
}

Point::Point(double x, double y){
  this->x = x;
  this->y = y;
}

double Point:: getX(){
  return this->x;
}
double Point::getY(){
  return this->y;
}

double Point::distancia_al_origen(){
  double dist = sqrt(pow(this->x, 2.0)  + pow(this->y, 2.0));
  return dist;
}

double Point::distancia(Point* p){
  double dist = sqrt(pow(this ->x - p->getX(), 2.0)  + pow(this->y - p->getY(), 2.0));
  return dist;
}
string Point::toString(){
  return "(" + to_string(x) + "," + to_string(y) + ")";
}
