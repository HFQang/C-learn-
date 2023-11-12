#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble_sort(char** arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // 交换两个字符串
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char* strings[3];

    // 为每个字符串分配内存并输入
    for (int i = 0; i < 3; i++) {
        strings[i] = (char*)malloc(50 * sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf_s("%s", strings[i]);
    }

    // 使用冒泡排序按顺序排列字符串
    bubble_sort(strings, 3);

    // 输出排序后的字符串
    printf("Sorted strings: ");
    for (int i = 0; i < 3; i++) {
        printf("%s ", strings[i]);
        free(strings[i]);  // 释放每个字符串的内存
    }

    return 0;
}
