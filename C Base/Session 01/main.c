#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ho[10], ten[10], tenDem[10] ;
	int ngay, thang, nam;
	char lop[10];
	float diemTB;
	char strHoTen[20] = "Ho Ten";
	char strNgaySinh[20] = "Ngay Sinh";
	char strLop[20] = "Lop";
	char strDiemTB[20] = "Diem TB";
	printf("Nhap ho: ");
	scanf("%s", ho);
	printf("Nhap ten dem: ");
	scanf("%s", tenDem);
	printf("Nhap ten: ");
	scanf("%s", ten);

	printf("Nhap ngay sinh: ");
	scanf("%d", &ngay);
	printf("Nhap thang sinh: ");
	scanf("%d", &thang);
	printf("Nhap nam sinh: ");
	scanf("%d", &nam);
	
	printf("Nhap lop: ");
	scanf("%s", lop);
	
	printf("Nhap diem TB: ");
	scanf("%f", &diemTB);
	printf("%-15s : %s %s %s\n",strHoTen, ten, ho, tenDem);
	printf("%-15s : %d\\ %d\\ %d\n",strNgaySinh, ngay, thang, nam);
	printf("%-15s : %s\n",strLop,lop);
	printf("%-15s : %.2f",strDiemTB,diemTB);
	
	return 0;
} 
