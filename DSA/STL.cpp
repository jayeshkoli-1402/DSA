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

void vectors_iteration()
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

void vectors_insertion()
{
    vector<int> v1(2, 100);          // {100, 100}
    v1.insert(v1.begin(), 200);      // {200, 100, 100}
    v1.insert(v1.end(), 300);        // {200, 100, 100, 300}
    v1.insert(v1.end(), {400, 500}); // {200, 100, 100, 300, 400, 500}
    for (auto x : v1)
    {
        cout << x << endl;
    }
}

void vector_opearations()
{
    vector<int> v2 = {6, 2, 7, 1};
    // v2.clear(); // Clears the vector
    // v2.erase(v2.begin());
    // v2.erase(v2.end() - 1);
    // v2.pop_back();

    for (auto x : v2)
    {
        cout << x << endl;
    }

    cout << "Size: " << v2.size() << endl;
    cout << "IS Empty: " << v2.empty() << endl;
}

void lists()
{
    list<int> ls;
    ls.push_back(4);
    ls.push_back(6);
    ls.emplace_back(9);
    ls.push_front(2);
    ls.emplace_front(1);
    for (auto x : ls)
    {
        cout << x << endl;
    }
}

void stacks()
{
    stack<int> st;
    st.push(5);
    st.push(7);
    st.push(2);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
}

void queues()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(20);
    cout << q.front() << endl; //[20, 10, '5']
    q.pop();
    cout << q.front() << endl; //[20, '10']
    q.front() += 5;
    cout << q.front() << endl; //[20, 15]
}

void sets()
{
    set<int> st;

    st.emplace(4);
    st.emplace(4);
    st.insert(6);

    for (auto x : st)
    {
        cout << x << endl;
    }
    auto it = st.find(6);

    cout << *it << endl;
    st.erase(4);

    for (auto y : st)
    {
        cout << y << endl;
    }

    auto cut = st.count(4);

    cout << cut;
}

void maps()
{
    map<int, int> mp;
    mp.insert({1, 5});
    mp.insert({5, 5});
    mp.insert({3, 5});
    mp.insert({6, 5});
    mp[2] = 4;
    // cout << mp[2] << endl;

    for (auto i = 0; i <= mp.size(); i++)
    {
        mp[i];
    }
}
int main()
{
    // pairs();
    // vectors_iteration();
    // vectors_insertion();
    // vector_opearations();
    // lists();
    // stacks();
    // queues();
    // sets();
    // Multiset is exactly same as set it just stores duplicate values
    // Unordered set is exactly same as set just lower bound and uppder bound does not work and it stored data in any order
    maps();
}