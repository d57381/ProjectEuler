#include<stdio.h>
#include<stdlib.h>

int divisibleByThree(int a);
int divisibleByFive(int a);
int sumArray(int *arr, int size);

int main(void){
  int holder = 0, sum = 0;
  const int MAX = 1000;
  int *arr = malloc(MAX*sizeof(int));
  if (arr == NULL){
    fprintf(stderr, "malloc failed\n");
    return -1;
  }

  for(int i = 1; i< MAX; i++){
    if(divisibleByThree(i) || divisibleByFive(i)){
      arr[holder] = i;
      holder++;
    }
  }
  sum = sumArray(arr, holder);
  printf("%d", sum);

  return 0;
}

int divisibleByThree(int a){
  if(a%3 == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int divisibleByFive(int a){
  if(a%5 == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int sumArray(int *arr, int size){
  int sum = 0;
  for(int i = 0; i<size; i++){
    sum += arr[i];
  }
  return sum;
}
