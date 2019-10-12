#include <stdio.h>
#include "myHeaders.h"

int main(){
  int a1[] = {1,2,3,4};
  int a2[] = {9,8,7,6};
  printf("Average 1: %f\n", average(a1, 4));
  printf("Average 2: %f\n", average(a2, 4));
  arr_copy(a1, a2, 5);
  printf("Average 3: %f\n", average(a2, 4));
  char *s = "hello";
  printf("length of %s: %d\n", s, mystrlen(s));
  return 0;
}
