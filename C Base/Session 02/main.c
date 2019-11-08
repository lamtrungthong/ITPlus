#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nhap vao diem trung binh cua sinh vien và in ra màn hình hoc luc
	// diem TB < 5.0 => yeu
	// diem TB >= 5 && <= 6.5 => TB
	// diem TB > 6.5 && <= 8 => Kha
	// diem TB > 8 && <= 9 => Gioi
	// diem TB > 9 => Xuat sac	
	
//	float diemTB;
//	printf("Moi ban nhap diem TB = ");
//	scanf("%f", &diemTB);
//	
//	printf("Diem TB  = %.2f \n", diemTB);
//	
//	if(diemTB >= 0 && diemTB < 5){
//		printf("Hoc luc yeu !");
//	}else if(diemTB >= 5 && diemTB <= 6.5 ){
//		printf("Hoc luc TB !");
//	}else if(diemTB > 6.5 && diemTB <= 8 ){
//		printf("Hoc luc kha !");
//	}else if(diemTB > 8 && diemTB <= 9 ){
//		printf("Hoc luc gioi !");
//	}else if(diemTB > 9 && diemTB <=10 ){
//		printf("Hoc luc xuat sac !");
//	}else{
//		printf("Moi ban nhap diem TB 0 >= diem TB <=10 !");
//	}
//	
	
	//Phep toan + - * /
	
//	char sel;
//	int a, b;
//	
//	printf("Moi ban nhap so 1 = ");
//	scanf("%d", &a);
//	fflush(stdin);
//	printf("Moi ban nhap lua chon = ");
//	scanf("%c", &sel);
//	printf("Moi ban nhap so 2 = ");
//	scanf("%d", &b);
//	
//	switch(sel){
//		case '+':
//			printf("Ket qua: a + b =  %d", (a+b));
//			break;
//		case '-':
//			printf("Ket qua: a - b =  %d", (a-b));
//			break;
//		case '*':
//			printf("Ket qua: a * b =  %d", (a*b));
//			break;
//		case '/':
//			if(b != 0){
//				printf("Ket qua: a / b =  %0.2f", ((float)a/b ));
//				break;	
//			}
//			break;
//		default :
//			printf("Lua chon cua ban khong dung !");
//			break;
//	}	
	return 0;
}
