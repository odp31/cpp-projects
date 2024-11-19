// linear search; simple but inefficient; checks each element sequentially
// time complexity: O(n) in worst case (have to check all) 
// space complexity: O(1)

int linearSearch(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

// binary search; efficient for sorted arrays; divides search space in half in each iteration 
// time complexity: O(log n)
// space complexity: O(1)

int binarySearch(int arr[], int low, int high, int x) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == x) {
      return mid;
    }
    if (arr[mid] > x) {
      return binarySearch(arr, low, mid - 1, x);
    }
    return binarySearch(arr, mid+1, high, x);
  }
return -1; 
}


// interpolation search; optimized binary search for uniformly distributed data 
// estimates postion of target element based on its value
// time complexity: O(log log n) in average case 
// sapce complexity: O(1)

int interpolationSearch(int arr[], int lo, int hi, int x)
{
  if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
    int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * *x - arr[lo]));

    if(arr[pos] == x){
      return pos;
    }
    if(arr[pos] < x) {
      return interpolationSearch(arr, pos+1, hi, x);
    }
    return interpolationSearch(arr, lo, pos - 1, x);
  }
return -1; 
}

