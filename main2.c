#include <stdio.h>
int inArray(int arr[], int size, int target){
  for(int i = 0; i < size; i++)
    if(arr[i] == target) return 1;
  return 0;
}

int sum(int arr[], int size){
  int result = 0;
  for(int i = 0; i < size; i++)
    result += arr[i];
  return result;
}

int main(void) {
  int arr[20];
  for(int i = 0; i < 20;){
    int to_add;
    printf("%d => ", i+1);
    scanf("%d", &to_add);
    if(inArray(arr, i + 1, to_add) == 0){
      arr[i] = to_add;
      i++;
    }
    else{
      printf("This value exists. plz try again!\n");
    }
  }


  printf("\nThe sum = %d", sum(arr, 20));


  return 0;

}
