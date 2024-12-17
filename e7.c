/*Write a C function that takes as input an integer and returns 1 if it is odd and returns 0 if it is even.*/

#include <stdio.h>

int evenOrOdd(int num) {
    if(num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
    return -1;
}

int main () {
    int num;
    int flag = 0;
    
    printf("Enter an  integer:");
    scanf("%d", &num);
    
    flag = evenOrOdd(num);
    printf("%d", flag);
    
    return 0;
}
