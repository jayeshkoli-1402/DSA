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

int main()
{
    pairs();
}