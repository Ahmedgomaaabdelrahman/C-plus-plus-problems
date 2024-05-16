#include <iostream>
#include <limits.h>

using namespace std;

int main () { 
// Number 1 
    // int num = 3;
    // cout << "\n" << num + num << "\n";                 // 6
    // cout << num * num - num << "\n";           // 6
    // cout << (num * num) - num << "\n";         // 6   
    // cout << (num + num - num) + num << "\n";   // 6
    // cout << (num % num) + (num + num) << "\n"; // 6
    // cout << (num - num) + (num + num) << "\n"; // 6
    // cout << (num / num) * (num + num) << "\n"; // 6  
// ===================================================
// Number 2
    // cout << "\n" << 10 * 20 + 15 % 3 + 190 + 10 - 400 << "\n"; // 0


// ===================================================
// Number 3
// Do Not Edit
// int num = 3;

/*
  Write Code Here
  Do Not Use num = 6 :)
*/
//     num += 3;

// // Do Not Edit
// cout << " " <<  num << "\n"; // 6

// ===================================================
// Number 4
// cout << (int(10.5) * 5) + int(40.5 + 10.1) << "\n"; // 100  


// ===================================================
// Number 5 (not solved) 

// Assign The Values
// char a = '1';
// char b = '2';
// char c = '3';

// // Do Not Edit
// cout << "\n" << b * c + a << "\n"; // 1000



// =====================================================
// Number 6 
/*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

// int a = 10;
// int b = 25;
// int c = 15;

// cout << (a < b) << "\n";          // True
// cout << (c > a) << "\n";          // True
// cout << (a + c == b) << "\n";     // True
// cout << (c >= a) << "\n";         // True
// cout << (c <= b) << "\n";         // True
// cout << (b > a && b > c) << "\n"; // True
// cout << !(a == b) << "\n";         // True
// cout << (a < b || b > a) << "\n"; // True
// =====================================================
// Number 7  (not solved)

// int a = 10;
// int b = 20;

// cout <<  "\n" << ((a + b) * a) + b + (a * a * a)  << "\n";       // 10000

// Hint For Help
// cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110
// cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300



// =====================================================
// Number 8 
int num = 10;
cout <<"\n" <<  --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
cout << num++ << " | " << num << " | " << num-- << "\n"; // 11 | 12 | 12
cout << num-- << " | " << num-- << " | " << num << "\n"; // 11 | 10 | 9

return 0;

    
}