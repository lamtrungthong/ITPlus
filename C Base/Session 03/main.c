#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Vong lap
int main(int argc, char *argv[]) {
	//vi du doi he 10 sang he 2
//	int dec = 65535, i;
//	if(dec >= 256 ){
//		for(i = 31; i >= 0; i--){
//			if(dec & (0x1 << i)){
//				printf("1");
//			}else{
//				printf("0");
//			}
//		}
//	}
	
	//vi du in A a B b ...
	// day = 5 ngoi sao
//	int i, j, max = 24; // so tang
//	for(i = 65, j = 97; i < 91 ; i++, j++ ){
//		printf("%1c %1c \n", i, j);
//	}
	
	//in tam giac vuong
//	int h = 10;
//	int i, j;
//	for(i = 0; i < h; i++){
//		for(j = 0; j < 2*h; j++)
//			if(j <= i)
//				printf("* ");
//			else
//				printf("  ");
//		printf("\n");
//	}
	
	//Chuyen tu he 10 sang he 2
//	int n;
//	int i;
//	do{
//		printf("\nNhap n = ");
//		scanf("%d", &n);
//	}while(n < 256 || n > 65535);
//	
//	for(i = 31; i >= 0; i--){
//		if(n & (0x01 << i)){
//			printf("1");
//		}else{
//			printf("0");
//		}
//	}

	//may tinh don gian
//	int a, b;
//	char phepTinh;
//	char tt;
//	do{
//		printf("\nNhap a = ");
//		fflush(stdin);
//		scanf("%d", &a);
//		printf("\nNhap phep tinh = ");
//		fflush(stdin);
//		scanf("%c", &phepTinh);
//		fflush(stdin);
//		switch(phepTinh){
//			case '+':
//				printf("\nNhap so b = ");
//				scanf("%d", &b);
//				printf("\nKet qua: a + b = %d", (a+b));
//				break;
//			case '-':
//				printf("\nNhap so b = ");
//				scanf("%d", &b);
//				printf("\nKet qua: a - b = %d", (a-b));
//				break;
//			case '*':
//				printf("\nNhap so b = ");
//				scanf("%d", &b);
//				printf("\nKet qua: a * b = %d", (a*b));
//				break;
//			case '/':
//				printf("\nNhap so b = ");
//				scanf("%d", &b);
//				printf("\nKet qua: a / b = %d", (float)a/b);
//				break;
//			default :
//				printf("\nBan can nhap dung cac phep tinh +, -, *, / !");
//				break;
//		}
//		if(phepTinh == '+' || phepTinh == '-' || phepTinh == '*' || phepTinh == '/'){
//			printf("\nBan co muon tiep tuc khong? (y/n)");
//			fflush(stdin);
//			scanf("%c", &tt);
//		}
//	}while(phepTinh != '+' && phepTinh != '-' && phepTinh != '*' && phepTinh != '/' || tt == 'y');

	// tinh diem trung binh
//	float diem[8];
//	int i;
//	float diemTB = 0;
//	for(i = 0; i < 8; i++){
//		printf("\nNhap diem mon %d = ", i+1);
//		scanf("%f", &diem[i]);
//		diemTB += diem[i];
//		printf("\n0x%x", &diem[i]);
//	}
//	printf("\nDiem trung binh = %.2f",diemTB/8 );

	//Nhap mang 2 chieu
	int n, m, i, j;
	int mt[n][m];
	
	printf("\nNhap so cot = ");
	scanf("%d", &n);
	printf("\nNhap so hang = ");
	scanf("%d", &m);
	printf("\nn = %d \nm = %d",n, m);
	for(i = 0; i < n; i++){
		for(j =0; j < m; j++){
			printf("\nNhap phan tu thu mt[%d][%d] = ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
	
//	printf("\nMa tran vua nhap.");
//	for(i = 0; i < n; i++){
//		for(j =0; j < m; j++){
//			printf("%d",mt[i][j]);
//		}
//		printf("\n");
//	}

	
	return 0;
}
