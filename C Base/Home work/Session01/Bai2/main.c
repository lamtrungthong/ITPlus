#include <stdio.h>
#include <stdlib.h>

/*Câu 1: Viet chuong trình chuyen doi so thap phân 256<n<65535 sang so nhi phân
dùng toán tu dich bít (bitwise). Trong dó n duoc nhap vào tu bàn phím.*/
void cau1(int d){
	if(d <= 256 || d >= 65535){
		printf("So ban vua nhap la n = %d \n", d);
		printf("Moi ban nhap so 256 < n < 65535 ");
	}else{
		int b;
		printf("%d", (b = d >>15) & 1 ? 1:0 );
		printf("%d", (b = d >>14) & 1 ? 1:0);
		printf("%d", (b = d >>13) & 1 ? 1:0);
		printf("%d", (b = d >>12) & 1 ? 1:0);
		printf("%d", (b = d >>11) & 1 ? 1:0);
		printf("%d", (b = d >>10) & 1 ? 1:0);
		printf("%d", (b = d >>9) & 1 ? 1:0);
		printf("%d", (b = d >>8) & 1 ? 1:0);
		printf("%d", (b = d >>7) & 1 ? 1:0);
		printf("%d", (b = d >>6) & 1 ? 1:0);
		printf("%d", (b = d >>5) & 1 ? 1:0);
		printf("%d", (b = d >>4) & 1 ? 1:0);
		printf("%d", (b = d >>3) & 1 ? 1:0);
		printf("%d", (b = d >>2) & 1 ? 1:0);
		printf("%d", (b = d >>1) & 1 ? 1:0);
		printf("%d", (b = d >>0) & 1 ? 1:0);
	}
}

/*Câu 2: Viet chuong trình chuyen doi so thap phân n<65535 sang so nhi phân dùng
toán tu dich bít (bitwise). Trong dó n duoc nhap vào tu bàn phím
*/
void cau2(int d){
	if( d >= 65535){
		printf("So ban vua nhap la n = %d \n", d);
		printf("Moi ban nhap so  n < 65535 ");
	}else{
		int b;
		printf("%d", (b = d >>15) & 1 ? 1:0 );
		printf("%d", (b = d >>14) & 1 ? 1:0);
		printf("%d", (b = d >>13) & 1 ? 1:0);
		printf("%d", (b = d >>12) & 1 ? 1:0);
		printf("%d", (b = d >>11) & 1 ? 1:0);
		printf("%d", (b = d >>10) & 1 ? 1:0);
		printf("%d", (b = d >>9) & 1 ? 1:0);
		printf("%d", (b = d >>8) & 1 ? 1:0);
		printf("%d", (b = d >>7) & 1 ? 1:0);
		printf("%d", (b = d >>6) & 1 ? 1:0);
		printf("%d", (b = d >>5) & 1 ? 1:0);
		printf("%d", (b = d >>4) & 1 ? 1:0);
		printf("%d", (b = d >>3) & 1 ? 1:0);
		printf("%d", (b = d >>2) & 1 ? 1:0);
		printf("%d", (b = d >>1) & 1 ? 1:0);
		printf("%d", (b = d >>0) & 1 ? 1:0);
	}
}
int main(int argc, char *argv[]) {
	int n;
	printf("Moi ban nhap n = ");
	scanf("%d", &n);
	printf("Cau 1 \n");
	cau1(n);
	printf("\nCau 2 \n");
	cau2(n);
	
	return 0;
}
