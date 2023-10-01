#include <stdio.h>

int main(){
    FILE *fp;
    char filename[] = "my_file.txt";
    fp = fopen(filename, "w");

    fprintf(fp, "this is a file created by my program! ");
    fprintf(fp, "I am so happy.\n" );
    fclose(fp);
    fprintf(fp, "second Line.\n");

    return 0;
}
