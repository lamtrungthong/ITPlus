#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Bai1 : kiem tra a chia het cho b hay khong
void bai1(int a, int b){
	if(a >= b){
		if((a % b) == 0){
			printf("\na chia het cho b");
		}else
			printf("\na khong chia het cho b");

	}else{
		printf("\nSo a can lon hon hoac bang so b!");
	}
}

//Bai2: so sanh a*b voi 1000

void bai2(int a, int b){
	if((a * b) < 1000){
		printf("\nTich hai so a*b < 1000");
	}else if((a * b) == 1000){
		printf("\nTich hai so a*b = 1000");
	}else{
		printf("\nTich hai so a*b > 1000");
	}
} 

//Bai3: tinh x = a - b, neu x = a || b in ra a || b : in ra khong co so nao

void bai3(int a, int b){
	if(a >= b){
		if((a - b) == a){
			printf("\nHieu bang gia tri a = %d", a);
		}else if((a - b) == b){
			printf("\nHieu bang gia tri b = %d", b);
		}else{
			printf("\nHieu khong bang bat ki gia tri nao!");
		}
	}else{
		printf("\nBan can nhap a >= b!");
	}
	
	
}

//Bai4: Tinh luong cuoi thanh cua nhan vien voi tung loai nhan vien luong = luongcb * tro cap
//nv loai A - tro cap = 300
//nv loai B - tro cap = 250
//nv con lai - tro cap = 100

void bai4(int luongCB, char loaiNV){
	switch(loaiNV){
		case 'A':
			printf("\nLuong cuoi thang = %d", (luongCB+300));
			break;
		case 'B':
			printf("\nLuong cuoi thang = %d", (luongCB+250));
			break;
		default :
			printf("\nLuong cuoi thang = %d", (luongCB+100));
			break;
	}
}

//Bai5: Xep loai sinh vien theo diem
//diem >= 75 => loai A
//60 <= diem < 75 => loai B
//45 <= diem < 60 => loai C
//35 <= diem < 45 => loai D
//35 > diem => loai E

void bai5(int diem){
	if(diem <= 100 && diem >= 0){
		if(diem < 35){
			printf("\nSinh vien xep loai E.");
		}else if(diem < 45){
			printf("\nSinh vien xep loai D.");
		}else if(diem < 60){
			printf("\nSinh vien xep loai C.");
		}else if(diem < 75){
			printf("\nSinh vien xep loai B.");
		}else{
			printf("\nSinh vien xep loai A.");
		}
	}else{
		printf("\nBan can nhap diem 0 <= diem <= 100 .");
	}
}
int main(int argc, char *argv[]) {
	
	//bai1(4, 3);
	//bai2(10, 100);
	//bai3(2, 2);
	//bai4(1000, 'A');
	bai5(10);
	return 0;
}
