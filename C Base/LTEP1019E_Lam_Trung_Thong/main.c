#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 100

//Dinh nghia kieu du lieu sinhvien
struct sinhvien{
	char maSV[10];
	char hoTen[50];
	char gioiTinh[5];
	float diem1, diem2;
};

//Dinh nghia 1 node trong danh sach lien ket
struct node{
	int data;
	struct node *next;
}; 

//Bai A

void A(int array[MAX], int n){
	int i;
	int b;
	//Nhap phan tu cho mang
	for(i = 0; i < n ; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		fflush(stdin);
		scanf("%d", &array[i]);
	}
	
	for(i = n - 1; i >= 0; i--){
		if( (array[i] % 2) != 0){
			printf("\nSo le cuoi cung trong mang la: %d", array[i]);
			b = 1;
			break;
		}
	}
	if(b != 1){
		printf("\nKhong co so le nao trong mang!");
	}
}

//Bai B

void B(int matrix[MAX][MAX], int m, int n){
	int i, j;
	int max, min;
	//Nhap mang 2 chieu
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("Nhap phan tu matrix[%d][%d]: ", i, j);
			fflush(stdin);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nMang 2 chieu vua nhap\n");
	//xuat mang 2 chieu
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	//Xac dinh phan tu lon nhat va nho nhat trong mang
	max = matrix[0][0];
	min = matrix[0][0];
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			//tim phan tu lon nhat
			if(matrix[i][j] > max){
				max = matrix[i][j];
			}
			//tim phan tu nho nhat
			if(matrix[i][j] < min){
				min = matrix[i][j];
			}
		}
	}
	
	printf("\nPhan tu lon nhat trong mang la: %d", max);
	printf("\nPhan tu nho nhat trong mang la: %d", min);
}

//Bai C

void C(struct sinhvien sv[MAX], int n){
	int i, j;
	float diemTB;
	int best;
	//Nhap danh sach sinh vien
	for(i = 0; i < n; i++){
		printf("Nhap thong tin sinh vien thu %d.\n", i + 1);
		printf("Nhap ma sv: ");
		fflush(stdin);
		gets(sv[i].maSV);
		printf("Nhap ho ten: ");
		fflush(stdin);
		gets(sv[i].hoTen);
		printf("Nhap gioi tinh: ");
		fflush(stdin);
		gets(sv[i].gioiTinh);
		printf("Nhap diem mon 1: ");
		fflush(stdin);
		scanf("%f", &sv[i].diem1);
		printf("Nhap diem mon 2: ");
		fflush(stdin);
		scanf("%f", &sv[i].diem2);
	}
	
	//in danh sach sinh vien vua nhap
	printf("Thong tin danh sach sinh vien.\n", i+1);
	printf("STT\t ma SV\t ho ten\t gioi tinh\t diem mon 1\t diem mon 2\n");
	for(i = 0; i < n; i++){
		printf("%d \t %s   \t %s    \t %s       \t %.2f      \t %.2f\n",
		 i+1, sv[i].maSV, sv[i].hoTen, sv[i].gioiTinh, sv[i].diem1, sv[i].diem2);
	}
	//tim kiem va in ra sinh vien co diem trung binh cao nhat
	// diem trung binh  = (diem mon 1 + diem mon 2) / 2
	
	diemTB = (sv[0].diem1 + sv[0].diem2) / 2;
	best = 0;
	for(i = 1; i < n; i++){
		float temp = (sv[i].diem1 + sv[i].diem2) / 2;
		if(temp > diemTB){
			best ++;
		}
	}
	
	printf("Thong tin sinh vien co diem trung binh cao nhat.\n");
	printf("ma SV\t ho ten\t gioi tinh\t diem mon 1\t diem mon 2\t diemTB\n");
	printf("%s   \t %s    \t %s       \t %.2f      \t %.2f      \t %.2f\n",
	 sv[best].maSV, sv[best].hoTen, sv[best].gioiTinh, sv[best].diem1, sv[best].diem2, diemTB);
}

//Bai D


int main(int argc, char *argv[]) {

	
//Bai A
//	int array[MAX];
//	int n;
//	do{
//		printf("Nhap so phan tu cua mang: ");
//		scanf("%d", &n);
//	}while(n <= 0);
//	A(array, n);

//Bai B
//	int matrix[MAX][MAX];
//	int m, n;
//	do{
//		printf("Nhap so dong cua mang m = ");
//		scanf("%d", &m);
//	}while(m <= 0 );
//	
//	do{
//		printf("Nhap so cot cua mang n = ");
//		scanf("%d", &n);
//	}while(n <= 0 );
//	B(matrix, m, n);

//Bai C
//	struct sinhvien sv[MAX];
//	int n;
//	do{
//		printf("Nhap so sinh vien co trong danh sach: ");
//		scanf("%d", &n);
//	}while(n <= 0 );
//	C(sv, n);

//Bai D

	return 0;
}
