#include <iostream>
#include <limits.h>
using namespace std;


int main() {
// Number 1
    /*
        1982 => "My Birth Day"
        1989 => "My First Work"
        1995 => "Windows 95"
        2000 => "Windows Millennium"
        2002 => "Created My vBulletin Forum"
        Any Other Year => "No Events in This Year"
    */
    // short year;
    // cout << "Enter the year \n";
    // cin >> year;

    // switch (year)
    // {
    //     case 1982:
    //         cout << "My Birth Day" << endl;
    //         break;
    //     case 1989:
    //         cout << "My First Work" << endl;
    //         break;
    //     case 1995:
    //         cout << "Windows 95" << endl;
    //         break;
    //     case 2000:
    //         cout << "Windows Millennium" << endl;
    //         break;
    //     case 2002:
    //         cout << "Created My vBulletin Forum" << endl;
    //         break;
    //     default:
    //         cout << "No Events in This Year" << endl;
    //         break;
    // }
// =========================================================
// Number 2

  // int day;
  // cin >> day;

  // switch (day)
  // {
  // case 1:
  // case 2:
  // case 3:
  //   cout << day << " Shop Is Open";
  //   break;
  // case 4:
  // case 5:
  //   cout << day << " Shop Is Closed";
  //   break;
  // default:
  //   cout << "Day Is Not Valid";
  
// =========================================================
// Number 3  
  int num;
  cin >> num;

switch (num) {
    case 10:
        cout << "Case 1";
        break;
    case 20:
    case 21:
        cout << "Case 2";
        break;
    case 30:
    case 31:
    case 32:
        cout << "Case 3";
        break;
    default:
        cout << "Invalid Number";
}

  // if (num == 10)
  // {
  //   cout << "Case 1";
  // }
  // else if (num > 19 && num < 21)
  // {
  //   cout << "Case 2";
  // }
  // else if (num > 29 && num < 33)
  // {
  //   cout << "Case 3";
  // }
  // else
  // {
  //   cout << "Invalid Number";
  // }
 
  return 0;
}