/* Write a C function that takes two input parameters, an array of characters (a string), and its size (integer),and returns 1 if the first character of the given string is uppercase, returns 0 if it is lowercase, and returns -1 if it is a digit.*/

#include <stdio.h>
#include <string.h>

int identifyFirstCharacter(char str[]){
    char  first_c = str[0];
    if (first_c >= 'A' && first_c <= 'Z') {
        return 1;
    } else if (first_c >= 'a' && first_c <= 'z'){
        return 0;
    } else if(first_c >= '0' && first_c <= '9'){
        return -1;
    }
    return -2;
}

int main(void) {
    char str[20];
    unsigned long size = 0;
    int result = 0;
    
    printf("enter a string:");
    scanf("%s", str);
    size = strlen(str);
    
    if (size > 0) {
            result = identifyFirstCharacter(str);
            printf("Result: %d\n", result);
        } else {
            printf("String is empty.\n");
        }

        return 0;
    }
   

