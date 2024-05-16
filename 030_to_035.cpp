#include <iostream>
#include <limits.h>
using namespace std;


int main() {

// Number 1
    // int age = 40;
    // int points = 800;
    // float rate = 8.5f;

    // // Your Condition Here
    // if (age > 18 && points > 500 && rate > 5) {
    //     cout << " " << "Yes Age > 18 & Points > 500 & Rate > 5" << endl;
    // }
// ==========================================================================
// Number 2

    // Test Case 1
    // int age = 18;
    // int points = 450;

    // Output
    // "No Age Is Not Ok"
    // "No Points Is Not Ok"

    // Test Case 2
    // int age = 20;
    // int points = 450;

    // Output
    // "Yes Age Is Ok"
    // "No Points Is Not Ok"

    // Test Case 3
    // int age = 20;
    // int points = 650;

    // Output
    // "Yes Age Is Ok"
    // "Yes Points Is Ok"

    // if (age > 18) { 
    //     cout << "Yes Age Is Ok" << endl;
    // }
    // else {
    //      cout << "No Age Is Not Ok" << endl;
    // }

    // if (points > 500) { 
    //     cout << "Yes Points Is Ok" << endl;
    // }
    // else {
    //      cout << "No Points Is Not Ok" << endl;
    // }

// ====================================================
// Number 3
    // int num;
    // cout << "Please Type A Number Between 0 And 150\n";
    // cin >> num;

    // If Number Smaller Than 10 "Example 5" Output Will Be => 005
    // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
    // If Number Larger Than 100 "Example 115" Output Will Be => 115

    // if (num < 10) { 
    //     cout << "00" << num << endl;
    // }
    // else if(num > 10 && num < 100) {
    //    cout << "0" << num << endl;
    // }
    // else if(num > 100 ){
    //     cout << num << endl;
    // }
// =================================================================
// Number 4
    // int num1 = 11;
    // int num2 = 10;
    // int num3 = 11;
    // int num4 = 33;

    // // Do Not Edit Any Condition

    // // Condition 1
    // if (num1 > num2)
    // cout << "Condition 1 Is True\n";
    // else
    // cout << "Condition 1 Is False\n";

    // // Condition 2
    // if (num1 > num2 && num1 < num4)
    // cout << "Condition 2 Is True\n";
    // else
    // cout << "Condition 2 Is False\n";

    // // Condition 3
    // if (num1 > num2 && num1 == num3)
    // cout << "Condition 3 Is True\n";
    // else
    // cout << "Condition 3 Is False\n";

    // // Condition 4
    // if (num1 + num2 < num4)
    // cout << "Condition 4 Is True\n";
    // else
    // cout << "Condition 4 Is False\n";

    // // Condition 5
    // if (num1 + num3 < num4)
    // cout << "Condition 5 Is True\n";
    // else
    // cout << "Condition 5 Is False\n";

    // // Condition 6
    // if (num1 + num2 + num3 < num4)
    // cout << "Condition 6 Is True\n";
    // else
    // cout << "Condition 6 Is False\n";

    // // Condition 7
    // if (num4 - (num1 + num3) + num2 == 21)
    // cout << "Condition 7 Is True\n";
    // else
    // cout << "Condition 7 Is False\n";

    // // Output Needed
    // // "Condition 1 Is True"
    // // "Condition 2 Is True"
    // // "Condition 3 Is True"
    // // "Condition 4 Is True"
    // // "Condition 5 Is True"
    // // "Condition 6 Is True"
    // // "Condition 7 Is True"
// =================================================================
// Number 5
    int by = 82; // by => Birth Year
    int s = 500; // s => Salary
    // if (by > 80)
    // {
    //     if (s < 600)
    //         cout << "Ok\n";
    //     else
    //         cout << "High\n";
    //     }
    // else
    // {
    //     cout << "Not Ok\n";
    // }

    // cout << (by > 80 ?  s < 600  ? "Ok\n" : "High\n" : "Not Ok\n" );

// =================================================================
// Number 6
    int age = 40;
    int points = 100;

    // if (age > 18)
    // {
    //   cout << "Age Is Ok\n";
    //   if (points > 50)
    //   {
    //     cout << "Points Is Ok\n";
    //     if (sizeof(age) == 4)
    //     {
    //       cout << "Age Data Is 4 Bytes\n";
    //     }
    //   }
    // }
// (age > 18) ? (points > 50) ? (sizeof(age) == 4) ? cout << "Age Data Is 4 Bytes\n" << "Age Is Ok\n"  << "Points Is Ok\n"   : cout  << "Age Is Ok\n" << "Points Is Ok\n" : cout << "Age Is Ok\n"  : cout << "";

    // Output Needed
    // "Age Data Is 4 Bytes"
    // "Age Is Ok"
    // "Points Is Ok"
// =================================================================
// Number 7
    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 5 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;

    result += (num1 < 20 ? num1 % 2 == 0 ? num1 : 0 : 0 );
    result += (num2 < 20 ? num2 % 2 == 0 ? num2 : 0 : 0 );
    result += (num3 < 20 ? num3 % 2 == 0 ? num3 : 0 : 0 );
    result += (num4 < 20 ? num4 % 2 == 0 ? num4 : 0 : 0 );
    

    cout << "Result : " << result << "\n";
    return 0;

}