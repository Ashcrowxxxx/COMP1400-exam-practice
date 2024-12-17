/*Write a C program to read a lowercase character and convert it into the corresponding uppercase character.*/

#include <stdio.h>

char convertNumber(char num) {
    if (num >='a' && num <='z') {
        num -= 32;
    }
    return num;
}

int main () {
    char num;
    
    printf("Enter a lowercase charactor:");
    scanf("%c", &num);
    
    num = convertNumber(num);
    printf("the uppercase charactor is %c", num);
    return 0;
}
