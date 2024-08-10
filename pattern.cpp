//        Patterns

#include <bits/stdc++.h>
using namespace std;
/* Pattern 1*/
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/* Pattern2*/
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*  Pattern3 */
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }
        cout << endl;
    }
}

/* Pattern4*/
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

/*Pattern5*/
// my way
void print5(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
// striver way
void printS(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
/*Pattern 6*/
void print6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
/*pattern 7*/
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*pattern 8*/
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/* pattern 9*/
void print9(int n)
{
    print7(n);
    print8(n);
}
/*pattern 10*/
void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        //  after when i is greater then n we have to  break the it
        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            (start = 0);
        for (int j = 0; j < i; j++)
        {
            cout << start;
            // flip the start
            start = 1 - start;
        }
        cout << endl;
    }
}
void print12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        if (space > 0)
        {
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
        }
        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void print13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // here looping is done in the character
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 0; i <= 0; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        };
        cout << endl;
    }
}
void print16(int n)
{
    for (int i = 0; i <= n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i; j++)
        {
            cout << "ch ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print14(n);
}