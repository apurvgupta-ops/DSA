// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// 0 0 0 0 0
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << i
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// 0 1 2 3 4
// 0 1 2 3 4
// 0 1 2 3 4
// 0 1 2 3 4
// 0 1 2 3 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << j
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// * * * *
// *     *
// *     *
// *     *
// * * * *
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
