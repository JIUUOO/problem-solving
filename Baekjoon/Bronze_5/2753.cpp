#include <iostream>

using namespace std;

int main() {
  int year = 2025;
  cin >> year;

  int res = 0;
  if (year % 4 == 0 && (!(year % 100 == 0) || (year % 400 == 0))) {
    res = 1;
  }

  cout << res << endl;
}