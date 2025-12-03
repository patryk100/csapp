#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *y ^ *x;
  *y = *x ^ *y;
}

void reverse_arr(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first <= last; first++, last--)
    inplace_swap(&a[first], &a[last]);
}

int main() {
  int numbers[] = {25, 50, 75, 100};
  reverse_arr(numbers, 4);
  printf("%d ", numbers[0]);
  printf("%d \n", numbers[1]);
  return 0;
}
