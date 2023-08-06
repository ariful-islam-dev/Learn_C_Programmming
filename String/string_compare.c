#include <stdio.h>
#include <string.h>

int string_compare(char a[], char b[]);

int string_length(char str[]){
    int i;

    for(i=0; str[i] != '\0'; i++);

        return i;
}

int main(){

char s[1002], word[100];
int i, j, length, is_word_started;

gets(s);
length =strlen(s);
is_word_started=0;

printf(string_compare(gets(s), gets(s)));

return 0;


}
int string_compare(char a[], char b[]){
    int i, j;

    for(i=0; a[i] != '\0' && b[i] != '\0'; i++){
        if(a[i] < b[i]){
            return -1;
        };

        if(a[i] > b[i]){
            return 1;
        }
    }

    if(string_length(a) == string_length(b)){
        return 0;
    }
    if(string_length(a) < string_length(b)){
        return -1;
    }

    if(string_length(a) > string_length(b)){
        return 1;
    }
}

