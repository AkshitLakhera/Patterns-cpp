//        Patterns

#include <bits/stdc++.h>
using namespace std;
/* Pattern 1*/
// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

/* Pattern2*/
// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

/*  Pattern3 */
// void print(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " " << j;
//         }
//         cout << endl;
//     }
// }

/* Pattern4*/
// void print(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

/*Pattern5*/
// my way
// void print(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }
// striver way
void print(int n)
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
int main()
{
    int n;
    cin >> n;
    print(n);
}