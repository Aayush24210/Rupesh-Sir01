//Write a cpp code to chech wheathe a person can vote or not.

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    try
    {
        if (age < 0)
        {
            throw 0;   // Negative age error
        }
        else if (age > 120)
        {
            throw -1;  // Unrealistic age error
        }
        else if (age >= 18)
        {
            cout << "You are eligible to vote.\n";
        }
        else
        {
            cout << "You are not eligible to vote.\n";
        }
    }
    catch (int x)
    {
        if (x == 0)
            cout << "Error: Age cannot be negative or zero!" << endl;
        else if (x == -1)
            cout << "Error: Age cannot be more than 120!" << endl;
    }

    return 0;
}
