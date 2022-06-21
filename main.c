#include "base.h"

int main(void) {
    clear();
    // printf("Hello World");

    char a, b[10];
    printf("Enter a char: ");
    scanf("%c", &a);
    fflush(stdin); // flush whole input cache
    
    printf("Enter a sentence: ");
    gets(b);
    printf("%c - %s", a, b);

    




    return 0;
}