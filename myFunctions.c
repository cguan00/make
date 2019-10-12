//Write a function that takes an array of int values as a parameter and returns the average of those values.
double average(int *arr, int size){
  int i;
  float sum = 0;
  for (i = 0; i < size; i++){
    sum += arr[i];
  }
  return (sum / size);
}

//Write a function that takes 2 arrays of equal size as parameters (you can chose the type).
//The function should copy the values of the first array into the second.
void arr_copy(int *a0, int *a1, int size){
  int i;
  for(i = 0; i < size; i++){
    a0[i] = a1[i];
  }
}

//Write a function that takes a string as a parameter and returns its length.
//When calculating the length of a string, do not include the terminating NULL in the result.
//(You should not use any extra parameters here)
int mystrlen(char *s){
  char chr = s[0];
  int len = 0;
  while (chr != '\0'){
    len++;
    chr = s[len];
  }
  return len;
}
