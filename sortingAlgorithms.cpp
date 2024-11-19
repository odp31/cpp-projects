// 1. bubble sort; compares adjacent elements and swaps them if they are in wrong order
// time complexity: o(n^2) in worst and average cases; O(n) in best case 
// space complexity: O(1)

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

// selection sort; finds min element in unsorted part and swaps it with first element 
// time complexity: O(n^2) in all cases
// space complexity: O(1)

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++){
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if(arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

// insertion sort; inserts each element into its correct position in sorted part of array 
// time complexity: O(n^2) in worst case, O(n) in best case
// space complexity: O(1)

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j+1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

// merge sort; divides array into two haves, sorts each recursively, mergest them 
// time complexity: o(n log n) in all cases
// space complexity: O(n)

void merge(int arr[], int left, int mid, int right)
{
  // implementation
}
void mergeSort(int arr[], int left, int right)
{
  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merges(arr, left, mid, right);
  }
}

// quick sort; picks a pivot element, partitons array into two subarrays, recursively sorts them 
// time complexity: O(n log n) average case, O(n^2) in worst case
// space complexity: O(log n) average case, O(n) worst case 

void quickSort(int arr[], int low, int hight)
{
  if(low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high); 
  }
}

