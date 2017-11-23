#include <iostream>

const double INCH_PER_FEET = 12.0;

int main(void)
{
  using namespace std;
  double inch;
  cout << "请输入你的身高(英寸): ____\b\b\b\b";
  cin >> inch;

  double feet = inch / INCH_PER_FEET;
  cout << "你的身高是(英尺和英寸): " << feet << endl;
  return 0;
}