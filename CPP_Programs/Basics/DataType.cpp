#include <iostream>
using namespace std;
int main()
{
    // int x = 34;
    // long y = 35325343;
    // long long z = 5346342354634543;

    // cout << "int: " << x << "\n";
    // cout << "long: " << y << "\n";
    // cout << "long long: " << z << "\n";

    // float x = 53.2;
    // double y = 62.64334523;

    // cout << "Float: " << x << "\n";
    // cout << "Double: " << y << "\n";

    // string s = "jayesh";
    // cout << "String : " << s;

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // cpp does not take input with whitespace
    cout << s;

    return 0;
}