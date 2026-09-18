#include <bits/stdc++.h>
using namespace std;

void pairs()
{

    pair<int, int> p = {2, 6};
    pair<int, int> arr[] = {{6, 3}, {7, 2}, {2, 5}};
    pair<int, string> st = {2, "hello"};

    // cout << p.first << p.second;
    cout << arr[2].first << "  " << arr[0].second << endl;
    cout << st.second;
}

void vectors()
{

    vector<int> v = {5, 2, 6};
    v.push_back(5);
    v.emplace_back(6);
    // Current v = {5,2,6,5,6}
    cout << "MY METHOD" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    cout << "Pofessional Method" << endl;

    vector<int>::iterator it = v.begin();
    cout << *(it) << endl;

    vector<int>::iterator i = v.end();
    i--;
    cout << *(i) << endl;

    cout << "Looping over Iterator" << endl;
    vector<int>::iterator x = v.begin();
    for (x; x != v.end(); x++)
    {
        cout << *(x) << endl;
    }

    cout << "Another method" << endl;
    for (auto c = v.begin(); c != v.end(); c++)
    {
        cout << *(c) << endl;
    }

    cout << "Another method +1" << endl;

    for (auto n : v)
    {
        cout << n << endl;
    }
}
int main()
{
    // pairs();
    vectors();
}