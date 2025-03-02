#include <iostream>

using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (!(a > 0 && a < 10) || !(b > 0 && b < 10))
    cout << "입력값이 조건에 맞지 않아요!" << endl;
  else
    cout << a + b << endl;
}