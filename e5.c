/* Write a function that takes an integer as input and returns the sum of all its digits */

#include <stdio.h>

int main (){
    int num;
    int i = 0;
    int sum = 0;
    int digit = 0;
    
    printf("enter an integer:");
    scanf("%d", &num);
    
    if (num == 0) {
        sum = 0;
    }else{
        for (i = 0; num > 0; i++) {
            digit = num % 10 ;
            num /= 10;
            sum += digit;
        }
    }
        printf("the sum of all its digits is %d", sum);
        
        return 0;
}
