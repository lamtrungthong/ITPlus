#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	char id[5];
	char name[50];
	int score;
} st;

void input_st(struct student  *st){
	printf("Nhap ten: ");
	fflush(stdin);
	gets(st->name);
	printf("Nhap id: ");
	fflush(stdin);
	gets(st->id);
	printf("Nhap diem: ");
	fflush(stdin);
	scanf("%d", &st->score);
}

void input_class(struct student *classes, int n){
	int i;
	for(i = 0; i < n; i++){
		input_st(classes + i);
	}
}

void output_class(struct student *classes, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\n==================");
		printf("\nTen : %s", (classes + i)->name);
		printf("\nID  : %s", (classes + i)->id);
		printf("\nDiem: %d", (classes + i)->score);
	}
}
int main(int argc, char *argv[]) {
	
	int n;
	struct student ITPLUS[50];
	do{
		printf("Nhap so luong sv : ");
		scanf("%d", &n);
	}while(n <=0 );

	input_class(ITPLUS, n);
	output_class(ITPLUS, n);

	return 0;
}
