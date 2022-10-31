#include <stdio.h>
void merge(int arr[] ,int  si , int ei ) {
    int size = ei - si + 1;
    int mid = (si + ei) / 2;
    int i = si;
    int temp[100];
    int j = mid + 1;
    int index = si;
    while (i <= mid && j <= ei) {
        if (arr[i] < arr[j]) {
            temp[index] = arr[i];
            i++;

        } else {
            temp[index] = arr[j];
            j = j + 1;


        }
        index++;

    }
    if (i > mid) {
        while (j <= ei) {
            temp[index] = arr[j];
            index++;
            j++;
        }
    } else {
        while (i <= mid) {
            temp[index] = arr[i];
            index++;
            i++;


        }
    }
    int p;
    p = si;
    while (p < index) {
        arr[p] = temp[p];
        p++;
    }
}
void mergesort(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }
    int mid = (si + ei) / 2;
    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);
    merge(arr, si, ei);
}
void display(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        }
    printf("\n");
    }
int main() {
    int arr[11] = {11, 6, 3, 4, 556, 56, 7, 44, 32, 2, 1};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    mergesort(arr, 0, size - 1);
    display(arr, size);
    return 0;

}
