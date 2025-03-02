#include <iostream>

using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (!(a >= 1 && a <= 10000) || !(b >= 1 && b <= 10000)) {
    cout << "입력값이 조건에 맞지 않아요!" << endl;
    return -1;
  }

  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;
  cout << (int)(a / b) << endl;
  cout << a % b << endl;
}