#include <stdio.h>

int main(){

int arr[]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int i, j, temp;

for( i=0, j=9; i< 10/2; i++, j--){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  //  printf("%d\n", arr[i] = arr[j]);
}

for(i=0; i<10; i++){
    printf("%d\n", arr[i]);
}

return 0;
}
