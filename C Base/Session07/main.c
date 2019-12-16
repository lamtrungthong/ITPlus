#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	char ID[10];
	char name[50];
	unsigned int old;
	unsigned int score;
};

void input (struct student *st_ptr, unsigned int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\nNhap thong tin sv thu %d.", i+1);
		printf("\nNhap ID: ");
		fflush(stdin);
		gets((st_ptr+i)->ID);
		printf("Nhap ten: ");
		fflush(stdin);
		gets((st_ptr+i)->name);
		printf("Nhap tuoi: ");
		fflush(stdin);
		scanf("%d", &(st_ptr+i)->old);
		printf("Nhap diem: ");
		fflush(stdin);
		scanf("%d", &(st_ptr+i)->score);
	}
}

void output(struct student *st_ptr, unsigned int n){
	unsigned int i;
	for(i = 0; i < n; i++){
		printf("\n================");
		printf("\nThong tin sv thu %d", i+1);
		printf("\nID: %s", (st_ptr+i)->ID);
		printf("\nName: %s", (st_ptr+i)->name);
		printf("\nOld: %d", (st_ptr+i)->old);
		printf("\nScore: %d", (st_ptr+i)->score);
	}
}
//C:\Tai Lieu\ITPlus\ITPlus\C Base\Session07
int main(int argc, char *argv[]) {
	
	unsigned int n = 2, i;
	struct student ptr_st[30];
	input(ptr_st, n);
	output(ptr_st, n);
	return 0;
}
