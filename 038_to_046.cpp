#include <iostream>
#include <string.h>
#include <array>

using namespace std;

int main() {

// Number 1
    // int nums[]{100, 300, 600, 900};
    // string awards[]{"iPhone", "iPad", "PC", "Car"};

    // // Output Needed
    // // "Number 100 Award Is: iPhone"
    // // "Number 300 Award Is: iPad"
    // // "Number 600 Award Is: PC"
    // // "Number 900 Award Is: Car"

    // cout << "\nNumber " << nums[0]  << " Award Is: " + awards[0] << "\n";
    // cout << "Number " << nums[1]  << " Award Is: " + awards[1] << "\n";
    // cout << "Number " << nums[2]  << " Award Is: " + awards[2] << "\n";
    // cout << "Number " << nums[3]  << " Award Is: " + awards[3] << "\n";

// ===============================================================================
// number 2
    // int check = 25;
    // int nums[]{40, 20, 30, 70, 100};

    // int check = 25;
    // int nums[]{20, 35, 30, 70, 100};

    // int check = 25;
    // int nums[]{20, 25, 30, 70, 100};


    // if (check < nums[0]){
    //     cout << "{" << nums[0] << "}" ;
    //     cout << " + {" << nums[3] << "}" ; 
    //     cout << " = " <<  nums[0] + nums[3] << "\n";
    // }
    // else if (check < nums[1]) {
    //     cout << "{" << nums[1] << "}" ; 
    //     cout << " + {" << nums[3] << "}" ;
    //     cout << " = " <<  nums[1] + nums[3] << "\n";
    // }
    // else if (check < nums[2]) {
    //     cout << "{" << nums[2] << "}" ;
    //     cout << " + {" << nums[3] << "}" ;
    //     cout << " = " <<  nums[2] + nums[3] << "\n";
    // }
    // else if (check < nums[0] && check < nums[1] && check < nums[2])  {
    //     cout << "{" << nums[0] << "}" ;
    //     cout << " + {" << nums[1] << "}" ; 
    //     cout << " + {" << nums[2] << "}" ; 
    //     cout << " + {" << nums[3] << "}" ; 
    //     cout << " + {" << nums[4] << "}" ; 
    //     cout << " = " <<  nums[0] + nums[1] + nums[2] + nums[3] + nums[4] << "\n";
    // }

// ==========================================================================
// Number 3
    // int filling = 10;
    // int vals[]{100, 200, 300, 400};

    // vals[0] = vals[1] = vals[2] = vals[3] = 10;
    // // Write One Line Of Code Here To Fill Array Value With Number 10

    // cout << vals[0] << "\n"; // 10
    // cout << vals[1] << "\n"; // 10
    // cout << vals[2] << "\n"; // 10
    // cout << vals[3] << "\n"; // 10

// ===============================================================
// Number 4
    // Example 1
    // int vals[]{100, 200, 250, 400, 200};

    // Example 2
    // int vals[]{100, 200, 500, 400, 200};

    // // Example 3
    // int vals[]{100, 200, 600, 400, 200};

    // int valsSize = sizeof(vals) / sizeof(vals[0]);
    // int middleIndex = int(valsSize/2);
    // if (vals[0] + vals[valsSize - 1] > vals[middleIndex]) {
    //     cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
    // }
    // else if (vals[1] + vals[valsSize - 2] > vals[middleIndex]) {
    //     cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
    // }
    // else {
    //     cout << "Middle Number Is The Largest" << endl;
    // }
// ============================================================================
// Number 5
    // Example 1
    // int vals[] = {100, 200, 600, 200, 100};
    
    // Output
    // "Array Is Palindrome"

    // Example 2
    // int vals[] = {100, 200, 200, 100};
    // Output
    // "Array Is Palindrome"

    // Example 3
    // int vals[] = {100, 300, 600, 200, 100};
    // // Output
    // // "Array Is Not Palindrome"
    // int valsSize = sizeof(vals) / sizeof(vals[0]);
    // if (vals[0] == vals[valsSize - 1] && vals[1] == vals[valsSize - 2] ) {
    //     cout << "Array Is Palindrome" << endl;
    // }
    // else {
    //     cout << "Array Is Not Palindrome" << endl;
    // }

// ============================================================================
// Number 6
    // int vals[] = {10, 20, 30};

    // // Write Your Code Here
    // vals[0] = 100;
    // vals[1] = 200;
    // vals[2] = 300;
    
    // cout << vals[0] << "\n"; // 100
    // cout << vals[1] << "\n"; // 200
    // cout << vals[2] << "\n"; // 300


// ============================================================================
// Number 7

    // string names[3][3] = {
    //     {"Ahmed", "Sayed", "Mahmoud"},
    //     {"Sameh", "Mahdy", "Gamal"},
    //     {"Mohamed", "Adel", "Majed"}
    // };

    // cout << "\nFirst Collection Of Names:\n";
    // cout << names[0][0] << "\n"; // Ahmed
    // cout << names[1][1] << "\n"; // Mahdy
    // cout << names[2][2] << "\n"; // Majed

    // cout << "Second Collection Of Names:\n";
    // cout << names[2][1] << "\n"; // Adel
    // cout << names[1][2] << "\n"; // Gamal
    // cout << names[0][2] << "\n"; // Mahmoud

    // cout << "Third Collection Of Names:\n";
    // cout << names[0][1] << "\n"; // Sayed
    // cout << names[1][0] << "\n"; // Sameh
    // cout << names[2][0] << "\n"; // Mohamed

// ============================================================================
// Number 8
    // Your Code Here
    // array<int, 3> nums;
    // Do Not Edit
    // nums.fill(100);
    // cout << nums[0] << "\n"; // 100
    // cout << nums[1] << "\n"; // 100
    // cout << nums[2] << "\n"; // 100

// ============================================================================
// Number 9
    // array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // // Method 1
    // // 6
    // cout << sizeof(nums) / sizeof(nums[0]) << endl;

    // // Method 2
    // // 6
    // cout << nums.size() << endl;

    // // Method 3
    // // 6
    // cout << end(nums) - begin(nums)  << endl;


// ============================================================================
// Number 10
    // array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // // Method 1
    // // "First: 10"
    // // "Last: 50"
    // cout << "First: " << nums.at(0) << endl;
    // cout << "Last: " << nums.at(nums.size() - 1) << endl;

    // // Method 2
    // // "First: 10"
    // // "Last: 50"
    // cout << "First: " << nums.front() << endl;
    // cout << "Last: " << nums.back() << endl;

    // // Method 3
    // // "First: 10"
    // // "Last: 50"
    // cout << "First: " << nums[0] << endl;
    // cout << "Last: " << nums[nums.size() - 1]  << endl;


// ============================================================================
// Number 11
    // Do Not Edit The Next 3 Lines
    // int index = 1;
    // array<int, 3> oldNums = {10, 20, 30};
    // array<int, 3> newNums;

    // // Write Your Code Here
    // newNums[index - 1] = oldNums.back();
    // newNums[index] = oldNums[index];
    // newNums[newNums.size() - 1] = oldNums.front();
    

    // // Do Not Edit The Next 3 Lines
    // cout << newNums[0] << "\n"; // 30
    // cout << newNums[1] << "\n"; // 20
    // cout << newNums[2] << "\n"; // 10
// ============================================================================
// Number 12
    // Do Not Edit The Next 6 Lines
    // int nums[] = {1, 2, 3, 5};
    // int vals[] = {10, 20, 40, 30, 10, 60};
    // int i1 = nums[3]; // 5 // 60
    // int i2 = nums[0]; // 1 // 20
    // int i3 = nums[1]; // 2 // 40
    // int i4 = nums[2]; // 3 // 30

    // // Need To Get Ouput 150
    // // You Can Use Plus Operator Only
    //  // Your Code Here
    // cout << vals[i1] + vals[i2] + vals[i3] + vals[i4] << endl;
   

// ============================================================================
// Number 13
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    // Output Needed
    cout << fName << mName << lName  << endl;           // Elzero Web School
    cout << fName + mName + lName << endl;              // Elzero Web School
    cout << fName.append(mName).append(lName) << endl;  // Elzero Web School
  

    return 0;

}