#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	int h; // chieu cao cua tam giac
	
	printf("Nhap h = ");
	scanf("%d", &h);
	
//	for( i =0; i < h ; i++){
//		for( j =0; j < 2*h; j++)
//			if(j >= (h-1-i) && j <= (h-1+i))
//				printf(" * ");
//			else
//				printf("   ");
//		printf("\n");
//	}

//in tam giac nguoc
	int n = 2*h;
	for( i =0; i < h ; i++){
		for( j =0; j < n; j++)
			if(j <= ((n-1)-1-i) && j >= i )
				printf(" * ");
			else
				printf("   ");
		printf("\n");
	}
	
	return 0;
}
