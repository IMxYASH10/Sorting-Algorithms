// #include <iostream>
// #include <vector>
// using namespace std;
// class sort
// {
// public:
//     void bubblesort(vector<int> &arr)
//     {
//         int n = arr.size();
//         bool swapped;
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 0; j < n - i - 1; j++)
//             {
//                 swapped = false;
//                 if (arr[j] > arr[j + 1])
//                 {
//                     swap(arr[j], arr[j + 1]);
//                     swapped = true;
//                 }
//             }
//             if (!swapped)
//                 break;
//         }
//     }
// };

// void printVector(const vector<int> &arr)
// {
//     for (int num : arr)
//         cout << " " << num;
// }

// int main()
// {
//     vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
//     sort sort1;
//     sort1.bubblesort(arr);
//     cout << "Sorted array: \n";
//     printVector(arr);
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std; 

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //bubble sort
    bool swapping;
    for (int i = 0; i < n - 1; i++){
        swapping = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swapping = true;
            }
        }
            if (!swapping)
            break;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}