#include <iostream>

using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void SelectionSort (int arr[], int n)
{
    int i, j, min_index;
  
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;

        for(j = i + 1; j < n ; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        Swap(&arr[min_index] , &arr[i]);
    }
}

void PrintArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
  int n;
  std::cin >> n;

  int arr[n];
    
 for(int i = 0; i < n; i++)
 {
   std::cin >> arr[i]; 
 } 
  

   SelectionSort(arr, n);

   PrintArray(arr, n);

    return 0; 
} 
