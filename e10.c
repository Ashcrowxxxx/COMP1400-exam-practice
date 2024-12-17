/*Write a C program that reads ten integer numbers from the user and stores them in an array of size 10. Then counts and displays the sum of the odd numbers which are in the even index positions of the array.*/

#include <stdio.h>
int main () {
    int arr[10] ={0};
    int size = 10;
    int count = 0;
    int sum = 0;
    
    printf("enter 10 integers:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i += 2) {
        if (arr[i] % 2 == 1) {
            sum += arr[i];
            count++;
        }
    }
    
    printf("sum = %d,\ncount = %d,", sum, count);
    return 0;
}
    
    
