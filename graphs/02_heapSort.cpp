


#include <iostream>
#include <vector>
using namespace std;

// Heapify function
void maxHeapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Heap Sort
void heapSort(vector<int> &arr)
{
    int n = arr.size();

    // Step 1: Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }

    // Step 2: Extract elements one by one
    for (int i = n - 1; i > 0; i--)
    {
        // Move current maximum to the end
        swap(arr[0], arr[i]);

        // Heapify the reduced heap
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    heapSort(arr);

    cout << "Sorted array: ";

    for (int x : arr)
        cout << x << " ";

    return 0;
}