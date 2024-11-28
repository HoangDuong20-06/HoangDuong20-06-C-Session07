#include <stdio.h>
int main() {
    int a[5];
    int i;
    int so_le = 0;
    // Nhap gia tri cho mang
    printf("Nhap 5 so nguyen: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    // In ra cac so chan
    printf("Cac so chan trong mang la: \n");
    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            so_le = 1;
        }
    }
    // Neu không tim thay so chan
    if (!so_le) {
        printf("Mang khong chua so chan.\n");
    }
    return 0;
}
