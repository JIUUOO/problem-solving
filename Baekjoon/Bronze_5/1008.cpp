#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (!(a > 0 && a < 10) || !(b > 0 && b < 10)) {
    cout << "입력값이 조건에 맞지 않아요!" << endl;
    return -1;
  }

  long double res = (long double)a / (long double)b;
  cout << fixed << setprecision(21) << res << endl;
}