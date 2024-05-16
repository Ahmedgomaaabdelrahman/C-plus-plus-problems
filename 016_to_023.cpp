#include <iostream>
#include <limits.h>

using namespace std;

int main () { 
// Number 1
    // Example // false // bool => Boolean
    // 'a' // char => Character
    // '9' // char => Character
    // 9 // int => Integer number
    // true  // bool => Boolean
    // 100 // int => Integer number
    // -10  // int => Integer number
    // 0  // int => Integer number
    // false // bool => Boolean
    // 10.9 // float => Float number
// ======================================================================

// Number 2
    // double salary = 5000.98;
    // int byteSize = 8;
    // int doubleSize = sizeof(salary);

    // cout <<  doubleSize << " Bytes " << "\n"; // 8 Bytes
    // cout <<  doubleSize * byteSize << " Bits " << "\n"; // 64 Bits
// =======================================================================

// Number 3

    // cout << "Maximum Integer Number Is => " << INT_MAX << "\n";
    // cout << "Maximum Integer Number Is => " << INT_MIN << "\n";
    // cout << "Maximum Short Integer Number Is => " << SHRT_MAX << "\n";
    // cout << "Maximum Short Integer Number Is => " << SHRT_MIN << "\n";
// ========================================================================

// Number 4
    // Edit Line To Make 8 Become 4
    // cout << sizeof(10.5 + 5 + 20.5 + 10) << "\n"; // 8
    // cout << sizeof(10.5f + 5 + 20.5f + 10) << " Bytes" << "\n"; // 4
// ========================================================================

// Number 5
    // char a = '~';
    // char b = '&';
    // char c = '%';
    // char d = 'A';

    // cout << " ASCII Value of ~ Is " << int(a) << "\n";
    // cout << "ASCII Value of & Is " << int(b) << "\n";
    // cout << "ASCII Value of % Is " << int(c) << "\n";
    // cout << "ASCII Value of A Is " << int(d) << "\n";
// ========================================================================

// Number 6
    // int a = 69;
    // int b = 108;
    // int c = 122;
    // int d = 101;
    // int e = 114;
    // int f = 111;

    // Output Needed
    // cout << "Character Of This ASCII Value 69 Is " << char(a) << "\n";
    // cout << "Character Of This ASCII Value 108 Is " << char(b) << "\n";
    // cout << "Character Of This ASCII Value 122 Is " << char(c) << "\n";
    // cout << "Character Of This ASCII Value 101 Is " << char(d) << "\n";
    // cout << "Character Of This ASCII Value 114 Is " << char(e) << "\n";
    // cout << "Character Of This ASCII Value 111 Is " << char(f) << "\n";

    // cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << "\n";


// =========================================================================
// Number 7
    // int a = 1;
    // int b = 13;
    // int c = 17;
    // int d = 70;
    // // AscII code of E = 69, W = 87, S = 83  
    // cout << "Output => " << char(d-a) << char(c+d) << char(b+d) << "\n" ;

    // Output Needed
    // "EWS"
// =========================================================================
// Number 8

    // Edit Anything Except Values
    // short int a = 100;
    // long long int b = 15001500;
    // long double c = 100.54565746;

    // // Do Not Edit
    // cout << " " << sizeof(a) << " Bytes\n"; // 2 Bytes
    // cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    // cout << sizeof(c) << " Bytes\n"; // 16 Bytes

// ========================================================================
// Number 9
    // Edit Anything Except Values
    // int a = 100;
    // signed b = -100;
    // short c = 100;
    // double d = 500.55;

    // // Do Not Edit
    // cout << a << "\n"; // 100
    // cout << b << "\n"; // -100
    // cout << c << "\n"; // 100
    // cout << d << "\n"; // 500.55
// =========================================================================
// Number 10
    // Add Type Alias Here
    // using lli = long long int;
    // typedef long long int lli;

    // Do Not Edit
    // lli num = 150050005; // This Is Long Long Int
    // cout << num << "\n"; // 150050005
// =========================================================================
// Number 11
    // Do Not Edit Here
    // short int a = 100;
    // float b = 98.5f;
    // double c = 1.7;

    // // Edit This Line And Use Type Casting To Get The Output
    // cout << " " << int(a + b + c) << "\n"; // 200
// =========================================================================
// Number 12
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // cout << " " << sizeof(a) << "\n"; // 2
    // cout << sizeof(b) << "\n"; // 4
    // cout << sizeof(c) << "\n"; // 16 


    // Change ??? To Something Else To Get The Output
    cout << " " << sizeof(c) - sizeof(b) << "\n"; // 12
    cout << sizeof(b) + sizeof(c) << "\n"; // 20
    cout << sizeof(a) * sizeof(c) << "\n"; // 32
    cout << a * int(c) << "\n"; // 5000
    cout << char(sizeof(c) * int(c)) << "\n"; // P AscII character 112

    
    return 0;
}