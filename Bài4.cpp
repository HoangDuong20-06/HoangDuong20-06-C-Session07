#include<stdio.h>
int main(){
	// Khai bao mang so nguyen va nhap cac phan tu cho cac mang so nguyen
	int n;
	printf("Nhap kich thuoc: ");
	scanf("%d",&n);
	// Nhap gia tri cho tung phan tu trong mang
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap a[%d] : ", i);
		scanf("%d", &a[i]);
	} 
    printf("Mang vua nhap: ");
    for(int i = 0; i < n; i++){
    	printf("%d ", a[i]);
    }
    return 0;
}
