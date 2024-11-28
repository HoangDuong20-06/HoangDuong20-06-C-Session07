#include <stdio.h>
int main() {
    int a[5];
    int i;
    // Nhap gia tri cho mang
    printf("Nhap 5 so nguyen: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    // Thay doi gia tri cua cac phan tu
    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            a[i] += 3; 
        } else {
            a[i] += 2;
        }
    }
    // In mang sau khi thay doi
    printf("Mang sau khi thay doi:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
