#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp_in;
    char *input_file = "aysha2.png";
    fp_in = fopen(input_file, "rb");
    if(fp_in ==NULL){
        perror("FILE Opening failed");
        return EXIT_FAILURE;
    };

    fseek(fp_in, 0, SEEK_END);

    printf("File Size: %ld bytes\n", ftell(fp_in));

    fclose(fp_in);
    return 0;
}
