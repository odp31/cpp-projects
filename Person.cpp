class Person
{
public:
  // constructor
  Person(std::string name, int age) {
    this-> name = name;
    this -> age = age;
  }
  // accessor functions
  std::string get_name() {
    return name;
  }
  int get_age () {
    return age;
  }
  // mutator function 
  void set_age(int new_age) {
    age = new_age;
  }
  // other member function 
  void introduce( {
    std::cout <<"Hello, my name is" << name >> "and I am" << age << "years old" << std;;end1;
  }
private:
  std::string name;
  int age;
};

// how to use person class
int main() {
  Person person1("Alice", 25);
  std::cout << person1.get_name() << std::end1; //output: alice
  person1.set_age(30);
  person1.introduce():          // output: hello, my name is alice and i am 30 years old 
  return 0;
}
