int arrsum(int arr[]) {
  size = sizeof(arr)/sizeof(arr[0]);
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}
