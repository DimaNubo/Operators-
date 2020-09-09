#include <iostream>
using namespace std;
class Point {
private:
  int x;
  int y;
public:
  Point() {
    x = 0;
    y = 0;
  }
  Point(int Xvalue, int Yvalue) {
    x = Xvalue;
    y = Yvalue;
  }
  Point operator +(const Point& other)
  {
    Point Zeroznach;
    Zeroznach.x = x + other.x;
    Zeroznach.y = y + other.y;
    return Zeroznach;
  }
  Point operator -(const Point& other)
  {
    Point Oneznach;
    Oneznach.x = x - other.x;
    Oneznach.y = y - other.y;
    return Oneznach;
  }
  Point operator *(const Point& other)
  {
    Point Twoznach;
    Twoznach.x = x * other.x;
    Twoznach.y = y + other.y;
    return Twoznach;
  }
  Point operator /(const Point& other)
  {
    Point Treeznach;
    Treeznach.x = x / other.x;
    Treeznach.y = y / other.y;
    return Treeznach;

  }
};
int main()
{
  setlocale(LC_ALL, "Run");
  Point a(5, 6);
  Point b(8, 10);
  return 0;
}
