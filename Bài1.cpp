#include <stdio.h>
int main() {
    // Khai bao mang so nguyen co 5 phan tu
    int a[5];
    // Gan gia tri truc tiep cho mang
    a[0] = 2;
    a[1] = 20;
    a[2] = 60;
    a[3] = 6;
    a[4] = 0;
    // In ra cac phan tu cua mang
    printf("Cac phan tu caa mang la: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    // Tinh va in ra do dai cua mang
    int n = sizeof(a) / sizeof(a[0]);
    printf("\nDo dai cua mang la: %d\n", n);
    return 0;
}
