/* Write a C function that takes as input an integer number, n, and displays all the positive factors of n(excluding n itself) and returns the sum of them.
 For example: n=12, Output = 1, 2, 3, 4, 6 return 16.*/


#include <stdio.h>

int factorialSum(int n) {
    int sum = 0;
    printf("output = ");
    for (int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
            printf("%d ", i);
        }
    }
    return sum;
}
        
int main(void) {
    int n;
    int re = 0;
    
    printf("Enter an integer number:");
    scanf("%d", &n);
    
    re =factorialSum(n);
    
    printf("return %d", re);
           
    return 0;
}
    
    
    
    
    
    

    
    
    
    
