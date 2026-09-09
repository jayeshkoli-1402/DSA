#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < (n - i - 1); x++)
        {
            cout << " ";
        }

        for (int y = 0; y < (i * 2 + 1); y++)
        {
            cout << "*";
        }

        for (int z = 0; z < (n - i - 1); z++)
        {
            cout << " ";
        }

        cout << "\n";
    }
}

void patterna8(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int x = 0; x <= (n - i - 1); x++)
        {
            cout << " ";
        }

        for (int imp = 0; imp < n; i++)
        {
            for (int y = 0; y < i; y++)
            {
                cout << "*";
            }
        }
        for (int z = 0; z <= (n - i - 1); z++)
        {
            cout << " ";
        }

        cout << "\n";
    }
}
int main()
{
    pattern7(5);
}