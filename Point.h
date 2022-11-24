// Ken Bauer
// example code for my students

#include <string>
using std::string;

class Point{
private:
  double x;
  double y;
public:
  // constructors
  Point();
  Point(double,double);

  // getters/setters
  double getX();
  double getY();

  // other methods
  double distancia_al_origen();
  double distancia(Point*);
  string toString();
};
