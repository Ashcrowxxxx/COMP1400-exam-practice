/*Write a C function that takes two string arrays as input and returns 1 if they are equal and otherwise returns 0. Two arrays are considered equal if both arrays contain the same number of elements, and all corresponding pairs of elements in the two arrays are equal in the same order.*/

#include <stdio.h>

int compareArray(char arr1[], char arr2[]) {
    int i = 0;

    while (arr1[i] != '\0' && arr2[i] != '\0') {
        if (arr1[i] != arr2[i]) {
            return 0;  // 如果字符不相等，返回 0
        }
        i++;
    }

    // 检查两个字符串是否同时结束
    if (arr1[i] == '\0' && arr2[i] == '\0') {
        return 1;  // 如果两个字符串都到达结束符，返回 1
    }

    return 0;  // 长度不一样，返回 0
}

int main() {
    char arr1[30] = {0};  // 初始化字符数组
    char arr2[30] = {0};

    printf("Enter the first array: ");
    scanf("%29s", arr1);  // 读取最多 29 个字符，防止溢出

    printf("Enter the second array: ");
    scanf("%29s", arr2);

    if (compareArray(arr1, arr2)) {
        printf("The arrays are equal.\n");
    } else {
        printf("The arrays are not equal.\n");
    }

    return 0;
}
