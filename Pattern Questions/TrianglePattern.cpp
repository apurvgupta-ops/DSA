// *
// * *
// * * *
// * * * *
// * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << j
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// *****
// ****
// ***
// **
// *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = n; i >= 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//     *
//    **
//   ***
//  ****
// *****
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= n; i++)

//     {
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5, count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
// }

//         1
//       2 3
//     3 4 5
//   4 5 6 7
// 5 6 7 8 9

#include <iostream>
using namespace std;
int main()
{
    int n = 5, count = 0, count1 = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
            count++;
        }
        for (k = 0; k < i; k++)
        {
            if (count <= n - 1)
            {

                cout << i + k << " ";
                count++;
            }
        }
        count1 = count = k = 0;
        cout << endl;
    }
}