#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 30
typedef struct sinhvien
{
	char name[30];
	unsigned int old;
	float score;
	char ID[3];
};
FILE *f;

void ghi(struct sinhvien *sv, int n){
	int i;
	f = fopen("sv.txt", "w+b");
	for(i = 0; i < n; i++){
		fwrite(sv+i, 1, sizeof(struct sinhvien),f);
	}
	fclose(f);
}

void doc(struct sinhvien *sv, int n){
	int i;
	f = fopen("sv.txt", "r+b");
	for(i = 0; i < n; i++){
		fread(sv+i, 1, sizeof(struct sinhvien),f);
	}
	fclose(f);
}

int main()
{
	
	struct sinhvien abc[MAX];
	struct sinhvien sv[MAX];
	int n = 2;
	int i;	
	for(i = 0; i < n; i++){
		printf("Nhap ten: ");
		fflush(stdin);
		gets(abc[i].name);
		
		printf("Nhap tuoi: ");
		fflush(stdin);
		scanf("%d", &abc[i].old);
		
		printf("Nhap diem: ");
		fflush(stdin);
		scanf("%f", &abc[i].score);
		
		printf("Nhap ID: ");
		fflush(stdin);
		gets(abc[i].ID);
	} 
	
	
	ghi(abc, n);
	doc(sv, n);
	printf("\n===============\n");
	for(i = 0; i < n; i++){
		printf("%s \t%d \t%f \t%s \n", sv[i].name, sv[i].old, sv[i].score, sv[i].ID);
	}
	return 0;
	
}

