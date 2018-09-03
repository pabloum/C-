#include <iostream>

using namespace std;

class Shape {
private:
  /* data */
public:
  // Shape ();
  // virtual ~Shape ();

  virtual float perimeter() = 0;
  virtual float area() = 0;
};

class Circle : public Shape{
private:
  float m_radius;
  float m_perimeter;
  float m_area;

public:
  Circle (float radius) : m_radius(radius){}
  Circle (Circle& circle) : m_radius(circle.m_radius){}
  virtual ~Circle (){}

  float perimeter(){
    m_perimeter = m_radius * 2 * 3.141596781;
    return m_perimeter;
  }
  float area(){
    m_area = m_radius * m_radius * 3.141596781;
    return m_area;
  }
};

int main(int argc, char const *argv[]) {

  Shape* shape = new Circle (73.94f);

  Circle one (1.0f);
  Circle two(one);

  std::cout << "The perimeter is: " << shape->perimeter() << '\n';
  std::cout << "The perimeter of circle2 is: " << two.perimeter() << '\n';

  return 0;
}
