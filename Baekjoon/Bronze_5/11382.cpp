#include <cmath>
#include <iostream>

using namespace std;

int main() {
  long long int a, b, c;

  cin >> a >> b >> c;

  if (!(a >= 1 && a < pow(10, 12)) || !(b >= 1 && b < pow(10, 12)) ||
      !(c >= 1 && c < pow(10, 12))) {
    cout << "입력값이 조건에 맞지 않아요!" << endl;
    return -1;
  }

  cout << a + b + c << endl;
}