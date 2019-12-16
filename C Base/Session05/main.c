#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//struct- kieu du lieu co cau truc

//dinh nghia sv
//su dung 
typedef struct sv { // dinh nghia kieu 
	char name[30];
	unsigned int old;
	float score;
	char ID[10];
};
int main(int argc, char *argv[]) {
//	struct sv sv1, sv2;
//	
//	printf("Kich thuc sv1 = %d byte", sizeof(sv1));
//	
//	printf("\nNhap ten = ");
//	gets(sv1.name);
//	printf("\nNhap tuoi = ");
//	fflush(stdin);
//	scanf("%d", &sv1.old);
//	printf("\nNhap ID = ");
//	fflush(stdin);
//	gets(sv1.ID);
//	
//	printf("================");
//	
//	printf("\nThong tin ban vua nhap.");
//	printf("\nTen   : %s", sv1.name);
//	printf("\nTuoi  : %d", sv1.old);
//	printf("\nID    : %s", sv1.ID);
//	
//	memcpy(&sv2, &sv1, sizeof(struct sv)); // ham copy vung nho memcpy(&dich, &nguon, sizeof(struct kieu du lieu ))
//	printf("\n================");
//	
//	printf("\nThong tin sinh vien 2.");
//	printf("\nTen   : %s", sv2.name);
//	printf("\nTuoi  : %d", sv2.old);
//	printf("\nID    : %s", sv2.ID);
	
	
	/*viet chuong trinh nhap vao n sv voi cac truong
		- ten, tuoi, diemtb, masv
		- in ra man hinh ds da nhap
		- in thong tin cua ban co diem cao nhat, thap nhat
		- sap xep theo chieu tang dan, giam dan theo diemtb
		- them, bot 1 ban vao danh sach vao vi tri k nhap tu ban phim
	*/
	unsigned int n, i, j;
	struct sv sv[30];
	struct sv sv_max, sv_min; //bien tam luu chu sv co diem cao nhat va thap nhat
	struct sv sv_temp; //bien tam dung de sap xep
	unsigned int k; //vi tri k de them hoac bot sv trong ds sv 
	struct sv sv_k;
	char sv_name[30];
	do{
		printf("\nBan muon nhap bao nhieu sinh vien? ");
		scanf("%d", &n);
		fflush(stdin);
	}while((n <= 0) || (n > 30));
	
	//nhap thong tin
	for(i = 0; i < n; i++){
		printf("\nNhap sv thu %d :", i+ 1);
		printf("\nNhap ten: ");
		gets(sv[i].name);
		fflush(stdin);
		printf("\nNhap tuoi: ");
		scanf("%d", &sv[i].old);
		fflush(stdin);
		printf("\nNhap diemTB: ");
		scanf("%f", &sv[i].score);
		fflush(stdin);
		printf("\nNhap mssv: ");
		gets(sv[i].ID);
		fflush(stdin);
	}
	
	//in ra ds da nhap
	
	for(i = 0; i < n; i++){
		printf("\nThong tin sv thu %d :", i+ 1);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].old);
		printf("\nDiemTB: %.2f", sv[i].score);
		printf("\nMssv: %s", sv[i].ID);
	}
	
	printf("\n===============");
	//in ra thong tin sv diem cao nhat va thap nhat
	//sap xep
	memcpy(&sv_max, &sv[0], sizeof(struct sv));
	memcpy(&sv_min, &sv[0], sizeof(struct sv));
	
	for(i = 0; i < n; i++){
		if(sv[i].score >= sv_max.score){
			sv_max = sv[i];
		}
		
		if(sv[i].score <= sv_min.score){
			sv_min = sv[i];
		}
	}
	
	//in ra thong tin sv diemtb cao nhat
	printf("\nThong tin sv diemTB cao nhat.");
	printf("\nTen: %s", sv_max.name);
	printf("\nTuoi: %d", sv_max.old);
	printf("\nDiemTB: %.2f", sv_max.score);
	printf("\nMssv: %s", sv_max.ID);
	//in ra thong tin sv diemtb cao nhat
	printf("\nThong tin sv diemTB thap nhat.");
	printf("\nTen: %s", sv_min.name);
	printf("\nTuoi: %d", sv_min.old);
	printf("\nDiemTB: %.2f", sv_min.score);
	printf("\nMssv: %s", sv_min.ID);
	
	printf("\n============");
	//xap xep ds theo chieu giam dan
	for(i = 0; i < n - 1; i++){
		for(j = i+1; j < n; j++){
			if(sv[i].score < sv[j].score){
				sv_temp = sv[i];
				sv[i] = sv[j];
				sv[j] = sv_temp;
			}
		}
	}
	//in ra theo chieu giam dan
	printf("\nDs sv theo chieu giam dan");
	for(i = 0; i < n; i++){
		printf("\nThong tin sv thu %d :", i+ 1);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].old);
		printf("\nDiemTB: %.2f", sv[i].score);
		printf("\nMssv: %s", sv[i].ID);
	}
	
	//xap xep ds theo chieu giam dan
	for(i = 0; i < n - 1; i++){
		for(j = i+1; j < n; j++){
			if(sv[i].score > sv[j].score){
				sv_temp = sv[i];
				sv[i] = sv[j];
				sv[j] = sv_temp;
			}
		}
	}
	//in ra theo chieu giam dan
	printf("\nDs sv theo chieu tang dan");
	for(i = 0; i < n; i++){
		printf("\nThong tin sv thu %d :", i+ 1);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].old);
		printf("\nDiemTB: %.2f", sv[i].score);
		printf("\nMssv: %s", sv[i].ID);
	}
	
	//them 1 ban vao ds vao vi tri k, nhap tu ban phim
	do{
		printf("\nNhap vi tri sv can them vao: ");
		scanf("%d", &k);
	}while(k <= 0 || k > n);
	
	printf("\nNhap thong tin sv thu k =  %d :", k);
	fflush(stdin);
	printf("\nNhap ten: ");
	gets(sv_k.name);
	fflush(stdin);
	printf("\nNhap tuoi: ");
	scanf("%d", &sv_k.old);
	fflush(stdin);
	printf("\nNhap diemTB: ");
	scanf("%f", &sv_k.score);
	fflush(stdin);
	printf("\nNhap mssv: ");
	gets(sv_k.ID);
	fflush(stdin);
	
	for(i = n; i >= k; i--){
		sv[i] = sv[i-1];
	}
	sv[k] = sv_k;
	
	printf("\nDs sv sau khi them .");
	for(i = 0; i < n+1; i++){
		printf("\nThong tin sv thu %d :", i+ 1);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].old);
		printf("\nDiemTB: %.2f", sv[i].score);
		printf("\nMssv: %s", sv[i].ID);
	}
	
	
	//xoa 1 ban vao ds vao vi tri k, nhap tu ban phim
	do{
		printf("\nNhap vi tri sv can xoa vao: ");
		scanf("%d", &k);
	}while(k < 0 || k > n);
	
	for(i = k; i < n; i++){
		sv[i] = sv[i+1];
		
	}
	
	printf("\nDs sv sau khi bot .");
	for(i = 0; i < n; i++){
		printf("\nThong tin sv thu %d :", i+ 1);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].old);
		printf("\nDiemTB: %.2f", sv[i].score);
		printf("\nMssv: %s", sv[i].ID);
	}
	
	//xoa 1 ban trong ds theo ten
	
	//tim k
	fflush(stdin);
	printf("\nNhap ten can xoa : ");
	gets(sv_name);
	for(i = 0; i < n; i++){
		if(!strcmp(sv[i].name, sv_name)){
			k = i;
			break;
		}
	}
	
	for(i = k; i < n; i++){
		sv[i] = sv[i+1];
	}
	
	printf("\nDs sv sau khi bot theo ten.");
	for(i = 0; i < n-1; i++){
		printf("\nThong tin sv thu %d :", i+ 1);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].old);
		printf("\nDiemTB: %.2f", sv[i].score);
		printf("\nMssv: %s", sv[i].ID);
	}
	
	return 0;
}
