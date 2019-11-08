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
	int i, j, max = 24; // so tang
	for(i = 65, j = 97; i < 91 ; i++, j++ ){
		printf("%1c %1c ", i, j);
	}
	
	return 0;
}
