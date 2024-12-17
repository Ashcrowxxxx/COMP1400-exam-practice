/*Write a function that receives an array of integers, its size, an integer target and an empty array of two integers. The function should update the empty array with indices of the two numbers in the first array such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.*/

#include <stdio.h>

void findTwoSum(int arr[], int size, int target, int answer[]){
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] +arr[j] == target) {
                answer[0] = i;
                answer[1] = j;
                return;
            }
        }
    }
}

int main(){
    int answer[2] = {0};
    int arr[100] = {0};
    int target;
    int size = 0;
    
    printf("enter an array of integer:");
    for (size = 0; size < 100; size++) {
        if (scanf("%d", &arr[size]) != 1) {
            break;
        }
    }
    
    printf("enter a target integer:");
    scanf("%d", &target);
    
    findTwoSum(arr, size, target, answer);

    printf("the indices of 2 number are %d, %d", answer[0], answer[1]);
    return 0;

}


