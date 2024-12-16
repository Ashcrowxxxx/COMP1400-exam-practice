/* Write a C function that takes as input an integer number, n, and converts it to a string and display it.
 思路：先用取余获得逆转的，再交换位置*/

#include <stdio.h>

int main(void) {
    int n;
    char str[20];
    int i = 0;
    
    printf("enter an interger number:");
    scanf("%d", &n);
    
    if (n == 0) {
        str[0] = '0';
        str[1] = '\0';
    } else {
        for (i = 0; n > 0; i++) {
            str[i] = (n % 10) + '0';
            n = n / 10;
        }
        str[i]= '\0';
        
        int start = 0;
        int end = i - 1;
        
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
    
    printf("The string is %s", str);
    
    return 0;
}
