#include <iostream>
class Shape {
  public:
  void draw() const;
};

void Shape::draw() const {
  std::cout << "Shape::draw()" << std::endl;    
}

class Square : public Shape {
  public:
  void draw() const;
};

void Square::draw() const {
  std::cout << "Square::draw()" << std::endl; 
}

int main() {
  Square s;
  Shape& d = s; //Assign derived class to base class reference
  d.draw(); 
  return 0; 
}
