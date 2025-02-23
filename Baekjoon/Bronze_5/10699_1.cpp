#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  auto now = chrono::system_clock::now();
  time_t timestamp = chrono::system_clock::to_time_t(now);

  tm *utcTime = gmtime(&timestamp); // UTC 기준 시간 불러오기
  utcTime->tm_hour += 9;            // UTC+9 적용
  mktime(utcTime);                  // 날짜 오버플로우 보정

  int year = 1900 + utcTime->tm_year;
  int month = 1 + utcTime->tm_mon;
  int day = utcTime->tm_mday;

  cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2)
       << setfill('0') << day << endl;
}