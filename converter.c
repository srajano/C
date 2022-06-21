#include "base.h"

int main() {
    clear();

    int choice1, choice2, answer;
    char input[10];

    printf("Enter input choice\n1. Octal 2.Decimal 3.Hexa : ");
    scanf("%d", &choice1);
    printf("Enter output choice\n1. Octal 2.Decimal 3.Hexa : ");
    scanf("%d", &choice2);

    if(choice1 == choice2) {
        printf("\nAre you serious?");
        return 1;
    }
    else {
        printf("\nRule for input:\nIf octal, then start with 0\nIf hexa, then start with 0x\n");
        printf("\n Enter your input number: ");
        scanf("%s", input);
    }

    switch(choice1) {
        case 1:
            printf("Converting Octa\n");
            if(choice2 == 2) answer = octal2decimal(input);
            else if(choice2 == 3) answer = octal2hexa(input);
            break;
        case 2:
            printf("Converting Decimal\n");
            if(choice2 == 1) answer = decimal2octal(input);
            else if(choice2 == 3) answer = decimal2hexa(input);
            break;
        case 3:
            printf("Converting Hexa\n");
            if(choice2 == 1) answer = hexa2octal(input);
            else if(choice2 == 2) answer = hexa2decimal(input);
            break;
        default:
            printf("\nplease try again");
            return 0;
    }
    printf("\n\nAnswer %d", answer);
    return 0;
}
