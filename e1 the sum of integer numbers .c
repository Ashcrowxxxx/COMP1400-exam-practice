/* Write a C function that takes as input an integer number, n, and displays the sum of integer numbers from 1 to n-1.
   For example, n= 5, output: 10 (4+3+2+1)*/

#include <stdio.h>
int main() {
    
    int num;
    int output = 0;
    
    printf("Enter an integer number:");
    scanf("%d", &num);
    
    for (int i = 1; i < num; i++) {
        output += i;
    }
    printf("output = %d\n", output);
    
    return 0;
}
    
    
    
    
