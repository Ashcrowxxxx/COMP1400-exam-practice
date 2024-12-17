#include <stdio.h>

// 冒泡排序函数：升序排列数组
void bubbleSort(int arr[], unsigned int size) {
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100];       // 假设最多输入 100 个整数
    unsigned int size = 0; // 实际输入的整数个数
    int sum = 0;        // 用于计算总和
    float average = 0;  // 平均值

    printf("Enter integers in the range [-50000 to 5000000] (-1 to stop):\n");

    while (size < 100) {
        int num;
        scanf("%d", &num);

        if (num >= -50000 && num <= 5000000) {  // 检查输入范围
            arr[size] = num;
            sum += num;
            size++;
        } else {
            printf("Invalid input. Please enter a number in the range [-50000, 5000000].\n");
        }
    }

    // 如果没有输入任何有效数据
    if (size == 0) {
        printf("No valid numbers were entered.\n");
        return 0;
    }

    // 排序数组
    bubbleSort(arr, size);

    // 计算平均值
    average = (float)sum / size;

    // 输出排序结果
    printf("\nNumbers in ascending order:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // 输出最大值和平均值
    printf("\nThe biggest value is: %d\n", arr[size - 1]);  // 排序后最大值在最后
    printf("The average is: %.2f\n", average);

    return 0;
}
    
    
    
