#include <stdio.h>

int main(){
    int namta[10][10];

    int row, col, count=0;

    for(row = 0; row< 10; row++){
        for(col=0; col< 10; col++){
            namta[row][col] = (row+1) *(col+1);
        }
    }
    //printf("%d",namta);


    for(row =0; row<10; row++){
        for(col =0; col < 10; col++){
            printf("%d x %d = %d\n", (row+1), (col+1), namta[row][col]);
            if(namta[row][col] % 2 == 0){
                    count++;
                //printf("%d", namta[row][col]);
            }
        };
        printf("\n");
    }
    printf("total even number: %d", count);
    return 0;
}
