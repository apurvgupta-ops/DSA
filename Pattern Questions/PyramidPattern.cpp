//     *
//    ***
//   *****
//  *******
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// *********
//  *******
//   *****
//    ***
//     *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = n; i >0; i--)
//     {
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//    1
//   234
//  56789
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4, count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * i - 1; j++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
// }

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
#include <iostream>
using namespace std;
int main()
{
    int n = 4, count = 0, count1 = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
            count++;
        }
        for (int k = 0; k < i; k++)
        {
            if (count <= n - 1)
            {
                cout << i + k << " ";
                count++;
            }
            else
            {
                count1++;
                cout << i + k - 2 * count1 << " ";
            }
        }
        count1 = count = k = 0;
        cout << endl;
    }
}