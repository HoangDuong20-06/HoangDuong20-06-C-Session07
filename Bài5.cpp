#include <stdio.h>

int main() {
    int a[5];
    int i, max, min;
    // Nhap gia tri cho mang
    printf("Nhap 5 so nguyen: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    // Gan gia tri cua phan tu dau tien cho max va min
    max = a[0];
    min = a[0];
    // Tim phan tu lon nhat va nho nhat
    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    // In ket qua
    printf("Phan tu lon nhat la: %d\n", max);
    printf("Phan tu nho nhat la: %d\n", min);
    return 0;
}
