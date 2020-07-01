#include <iostream>
/* In the example below getData is a logically 
 * const function, it returns cachedData_
 * If cachedData is not set then it sets it and return 
 */
class Foo {
	public:
	int getData() const {
		if ( cachedData_ != 0 ) 
			return cachedData_;
		cachedData_ = 1000;	
		return cachedData_;
	}
	private:
	mutable int cachedData_ = 0;
};

int main() {
	Foo f;
  auto const& ff = f;
	std::cerr << ff.getData() << std::endl;
}
