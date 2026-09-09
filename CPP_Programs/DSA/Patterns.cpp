#include <iostream>
using namespace std;

void PR1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void PR2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void PR3(int n)
{
    cout << "My Method\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < abs(-i + n); j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "Teacher Method\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void PR4(int n)
{
    int k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        k++;
        cout << "\n";
    }
}

void PR5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int x = 1; x <= 2 * (n - i + 1) - 1; x++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

void PR6(int n)
{
    for (int i = 1; i <= (n * 2 - 1); i++)
    {
        int stars = i;
        if (i > n)
            stars = n * 2 - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void PR7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}
void PR8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

void PR9(int n)
{
    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= (n / 2); i++)
    {
        for (int j = 1; j <= (2 * (n / 2) - i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void PR10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start;
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void PR11(int n)
{
    int stspace = (n * 2) - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= stspace; k++)
        {
            cout << "*";
        }
        stspace = stspace - 2;
        for (int x = i; x >= 1; x--)
        {
            cout << x;
        }
        cout << endl;
    }
}

void PR12(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x += 1;
        }
        cout << endl;
    }
}

void PR13(int n)
{

    cout << "My Method\n";
    char arr[10] = {'a', 'b', 'c', 'd', 'e'};
    int x = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << arr[j] << " ";
            // cout << arr[x] << " ";
            // x += 1;
        }
        cout << endl;
    }

    cout << "Professional Method\n";
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    // PR1(5);
    // PR2(5);
    // PR3(5);
    // PR4(5);
    // PR5(5);
    // PR6(5);
    // PR7(5);
    // PR8(5);
    // PR9(10);
    // PR10(5);
    // PR11(5);
    // PR12(5);
    PR13(5);
}