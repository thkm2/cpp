#include <iostream>

class Test {
	private:
		std::string _name;
	public:
		Test(std::string name);
		void print_name() const;
		std::string &get_ref();
};

Test::Test(std::string name) : _name(name) {}

void Test::print_name() const {
	std::cout << _name << std::endl;
}

std::string &Test::get_ref() {
	return this->_name;
}

void change_string(std::string &s) {
	s = "je suis changéeeeee";
}

int main() {
	Test test("test");
	test.print_name();
	std::string &ref = test.get_ref();
	ref = "non";
	test.print_name();

	std::string s = "force a toi";
	std::cout << s << std::endl;
	change_string(s);
	std::cout << s << std::endl;

	return 0;
}