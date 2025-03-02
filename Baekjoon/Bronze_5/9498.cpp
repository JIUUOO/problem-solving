#include <iostream>

using namespace std;

int main() {
  int point = 0;

  cin >> point;

  char grade = ' ';
  if (point >= 90 && point <= 100) {
    grade = 'A';
  } else if (point >= 80) {
    grade = 'B';
  } else if (point >= 70) {
    grade = 'C';
  } else if (point >= 60) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  cout << grade << endl;
}