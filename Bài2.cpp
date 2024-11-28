#include<stdio.h>
int main(){
	int a[5];
	printf("Nhap 5 so nguyen \n");
	for(int i =0; i < 5; i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d", &a[i]);
	}
	printf("Tung phan tu vua nhap: ");
	for(int i = 0; i < 5 ; i++){
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
