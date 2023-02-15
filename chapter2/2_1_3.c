#include <stdio.h>

int linear_search(int arr[], int size, int v) {
  for (size_t i = 0; i < size; i++)
  {
    if (arr[i] == v) return i;
  }
  return -1;
}

int main(int argc, char const *argv[])
{
  int size = argc - 2;
  int arr[size];
  for (size_t i = 1; i < argc-1; i++)
  {
    sscanf(argv[i], "%d", &arr[i-1]);
  }
  int v;
  sscanf(argv[argc-1], "%d", &v);
  int r = linear_search(arr, size, v);
  printf("%d\n", r);
  return r;
}
