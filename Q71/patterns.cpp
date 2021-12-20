// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // *
// // **
// // ***
// // ****
// // *****
// // ******
// // *******
// // ********
// // *********

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 10; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // **********
// // *********
// // ********
// // *******
// // ******
// // *****
// // ****
// // ***
// // **
// // *

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         int j;
//         for (j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = j; k < 10; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // **********
// //  *********
// //   ********
// //    *******
// //     ******
// //      *****
// //       ****
// //        ***
// //         **
// //          *

#include <iostream>
using namespace std;

int main()
{
    for (int i = 10; i > 0; i--)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = j - 1; k < 10; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
//           *
//          **
//         ***
//        ****
//       *****
//      ******
//     *******
//    ********
//   *********
//  **********
