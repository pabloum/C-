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
  Circle (float radius) :
      m_radius   (radius),
      m_perimeter(m_radius * 2 * 3.141596781),
      m_area     (m_radius * m_radius * 3.141596781){}

  Circle (Circle& circle) :
      m_radius   (circle.m_radius),
      m_perimeter(circle.m_perimeter),
      m_area     (circle.m_area){}

  virtual ~Circle (){}

  float perimeter(){
    return m_perimeter;
  }
  float area(){
    return m_area;
  }
};

class Rectangle : public Shape{
private:
  float m_side1;
  float m_side2;
  float m_perimeter;
  float m_area;

public:
  Rectangle (float side1, float side2) :
      m_side1    (side1),
      m_side2    (side2),
      m_perimeter(m_side1 * m_side2 * 2),
      m_area     (m_side1 * m_side2){}

  Rectangle (Rectangle& rectangle) :
      m_side1    (rectangle.m_side1),
      m_side2    (rectangle.m_side2),
      m_perimeter(rectangle.m_perimeter),
      m_area     (rectangle.m_area){}

  virtual ~Rectangle (){}

  float perimeter(){
    return m_perimeter;
  }
  float area(){
    return m_area;
  }
};

int main(int argc, char const *argv[]) {

  Shape* circle    = new Circle (73.94f);
  Shape* rectangle = new Rectangle (73.94f,9.09f);

  std::cout << "The perimeter of the created circle is: " << circle->perimeter() << '\n';
  std::cout << "The perimeter of the created rectangle is: " << rectangle->perimeter() << '\n';

  std::cout << "The area of the created circle is: " << circle->area() << '\n';
  std::cout << "The area of the created rectangle is: " << rectangle->area() << '\n';

  Circle* c    = static_cast <Circle*> (circle);
  Rectangle* r = static_cast <Rectangle*> (circle);

  cout << c->perimeter() << '\n';
  cout << r->perimeter() << '\n';

  return 0;
}
