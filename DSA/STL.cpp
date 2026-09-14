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
    for (int i = 1; i <= 5; i++)
    {
        cout << v[i - 1];
        cout << endl;
    }
}
int main()
{
    // pairs();
    vectors();
}