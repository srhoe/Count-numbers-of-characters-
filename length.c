#include <stdio.h>

int get_string_legnth(char text[100]);

int main(void){
    char text[100];

    printf("Convert string into length\n:");
    scanf("%s", text);

    int legnth = get_string_legnth(text);
    printf("%i\n", legnth);
}

int get_string_legnth(char text[100]){
    int i = 0;
    while(text[i] != '\0'){
        i++;
    }
    return i;
}