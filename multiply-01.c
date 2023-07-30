#include <stdio.h>

int main(){
    int n, i;

    /*while(i<=10){
        printf("%d X %d = %d\n", n, i, n*i);
        i=i+1;
    }\
    */

    /*

    for(i;i<=10; i++){
        printf("%d X %d = %d\n", n, i, n*i);
    }*/

   for(n=1; n<=20; n++){
    for(i=1; i<=10; i++){
        printf("%d X %d = %d\n", n, i, n*i);
    }
   }

    return 0;
}
