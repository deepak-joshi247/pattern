/*write a program to determine whether a given integer is a "happy number" or not. A happy number is defined by the following process:

1. Starting with any positive integer, replace the number by the sum of the squares of its digits.
2. Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.

Example:

Input: 19
Output: true (because 1^2 + 9^2 = 82, 8^2 + 2^2 = 68, 6^2 + 8^2 = 100, 1^2 + 0^2 + 0^2 = 1)

Input: 20
Output: false (because it gets stuck in a cycle: 20 -> 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20)

Constraints:

- The input will be a positive integer.
- You can assume the input will not exceed 1000.

Note:

- Think about how you can use a loop to repeatedly apply the process.
- Consider using a variable to keep track of the current number.


*/

#include <iostream>
#include <set>
#include <cmath>

using namespace std;

bool loop(int num)
{
    int val_after_sum;
    int arr[20] = {};
    int f = 0;
    while (true)
    {

        arr[f] = num;
        f = f + 1;

        int first_digit = num / 10;
        int second_digit = num % 10;

        first_digit = first_digit * first_digit;
        second_digit = second_digit * second_digit;

        val_after_sum = first_digit + second_digit;
        if (val_after_sum == 1)
        {

            cout << "Number is happy number";
            return true;
        }
        else
        {
            num = val_after_sum;
        }
        for (int i = 0; i <= f; i++)
        {
            if (arr[i] == num)
            {
                cout << "the number is unhappy";
                return false;
            }
        }
        if (f == 20)
        {
            cout << "num is unhappy";
            return false;
        }
    }
};

int main()
{

    int num;

    cout << "enter the number";
    cin >> num;
    loop(num);
    return 0;
}

// _------------error --------------------