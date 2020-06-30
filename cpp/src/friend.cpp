#include <iostream>
class Apple {
	public:
  friend void cut(); 

	private:
  int number_ = 100;
};

void cut() {
  Apple a;
  std::cerr << a.number_ << std::endl;
}

int main() {
	cut();
  return 0;
}
