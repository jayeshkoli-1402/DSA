#include <iostream>
using namespace std;

int main()
{
    // int age;
    // cout << "Enter yout age: ";
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You are eligible for Voting";
    // }
    // else if (age == 0)
    // {
    //     cout << "Wrong Age! Age cannot be zero";
    // }
    // else
    // {
    //     cout << "You are not eligible for Voting";
    // }

    // int day;
    // cout << "Enter the Day Number: ";
    // cin >> day;

    // if (day == 1)
    // {
    //     cout << "Sunday";
    // }
    // else if (day == 2)
    // {
    //     cout << "Monday";
    // }
    // else if (day == 3)
    // {
    //     cout << "Tuesday";
    // }
    // else if (day == 4)
    // {
    //     cout << "Wenesday";
    // }
    // else if (day == 5)
    // {
    //     cout << "Thersday";
    // }
    // else if (day == 6)
    // {
    //     cout << "Friday";
    // }
    // else if (day == 7)
    // {
    //     cout << "Saturday";
    // }

    // Switch Case
    int day;
    cout << "Enter the Day Number: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wenesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "saturday";
        break;

    default:
        break;
    }
}