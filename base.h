#include <stdio.h>
#include <stdlib.h>

void clear(void) {
    system("cls");
}

int output =0;

int octal2decimal(char * input) {
    if(input[0] == '0') {
        printf("This function is working\n");
    }
    else {
        printf("Wrong Detection of Octa Number\n");
        exit(1);
    }
    return output;
}

int octal2hexa(char * input) {
    if(input[0] == '0') {
        printf("This function is working\n");
    }
    else {
        printf("Wrong Detection of Octa Number\n");
        exit(1);
    }
    return output;
}

int decimal2octal(char * input) {
    printf("This function is working\n");
    return output;
}

int decimal2hexa(char * input) {
    printf("This function is working\n");
    return output;
}

int hexa2octal(char * input) {
    if(input[0]== '0' && input[1] == 'x') {
        printf("This function is working\n");
    }
    else {
        printf("Wrong Detection of Octa Number\n");
        exit(1);
    }
    return output;
}

int hexa2decimal(char * input) {
    if(input[0]== '0' && input[1] == 'x') {
        printf("This function is working\n");
    }
    else {
        printf("Wrong Detection of Octa Number\n");
        exit(1);
    }
    return output;
}

