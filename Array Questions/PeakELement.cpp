// Given an array of integers.Find a peak element in it.An array element is a peak if it is NOT smaller than its neighbours.
// For corner elements, we need to consider only one neighbour.

// Naive approach
//  #include <iostream>
//  using namespace std;
//  int peakElement(int arr[], int size)
//  {

//     // checking if there is only one element
//     if (size == 1)
//     {
//         return 0;
//     }
//     // Check for first and last element
//     if (arr[0] >= arr[1])
//     {
//         return 0;
//     }
//     if (arr[size - 1] >= arr[size - 2])
//     {
//         return size - 1;
//     }

//     // checking for other elements
//     for (int i = 1; i < size - 1; i++)
//     {
//         if (arr[i] >= arr[i + 1] && arr[i] >= arr[i - 1])
//         {
//             return i;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 1, 2, 20, 1, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "index of the peak element is   " << peakElement(arr, size);
//     return 0;
// }

// DIVIDE AND CONQUER (recursion)
//  #include<iostream>
//  using namespace std;
//  int peakElement(int arr[], int start, int end, int size){
//      int mid = (start+end)/2

// }