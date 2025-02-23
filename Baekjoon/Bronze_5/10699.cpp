#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  time_t timestamp;
  time(&timestamp);

  // struct tm {
  //   int	tm_sec;		/* seconds after the minute [0-60] */
  //   int	tm_min;		/* minutes after the hour [0-59] */
  //   int	tm_hour;	/* hours since midnight [0-23] */
  //   int	tm_mday;	/* day of the month [1-31] */
  //   int	tm_mon;		/* months since January [0-11] */
  //   int	tm_year;	/* years since 1900 */
  //   int	tm_wday;	/* days since Sunday [0-6] */
  //   int	tm_yday;	/* days since January 1 [0-365] */
  //   int	tm_isdst;	/* Daylight Savings Time flag */
  //   long	tm_gmtoff;	/* offset from UTC in seconds */
  //   char	*tm_zone;	/* timezone abbreviation */
  // };

  tm *utcTime = gmtime(&timestamp); // UTC 기준 시간 불러오기
  utcTime->tm_hour += 9;            // UTC+9 적용
  mktime(utcTime);                  // 날짜 오버플로우 보정

  int year = 1900 + utcTime->tm_year;
  int month = 1 + utcTime->tm_mon;
  int day = utcTime->tm_mday;

  cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2)
       << setfill('0') << day << endl;
}