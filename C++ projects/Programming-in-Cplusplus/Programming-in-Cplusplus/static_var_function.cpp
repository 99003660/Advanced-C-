#include <iostream>
class Sample {
  int x;
  int y;

public:
  static int z;
  // declaration
  Sample(int p, int q) : x(p), y(q) {}
  // functions – printx, printy etc.
  void printx()
  {
    std::cout << z;
  }
  static void printz() {
    // print z
    // ++x ?? printx()  ??
      std::cout << z;
  }

  static void incz() 
  {
    ++z; 
  }
};
int Sample::z = 0; // definition

int main() {
  Sample s1(10, 20);
  Sample::printz();
  s1.printz();
  Sample::incz();
  Sample::printz();
  std::cout <<Sample::z;
  return 0;
}