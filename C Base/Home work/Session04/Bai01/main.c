#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Bai1: tim gia tri nho nhat va lon nhat trong mang

void bai1(int array[], int n){
	int max = array[0], min = array[0];
	int i, j;
	for(i = 0; i < n; i++){
		if(array[i] > max){
			max = array[i];
		}
		if(array[i] < min){
			min = array[i];
		}
	}
	
	printf("\nMax = %d, Min = %d", max, min);
}

//Bai2: Dem so nguyen am va phu am cua 1 tu. Nguyen am = u e o a i

void bai2(char _str[]){
	char ueoai[] = {'u', 'e', 'o', 'a', 'i', 'U', 'E', 'O', 'A', 'I'};
	int i, j;
	int n = 0;
	for(i = 0; i < strlen(_str); i++){
		for(j = 0; j < 10; j++){
			if(_str[i] == ueoai[j]){
				n++;
			}
		}
	}
	
	printf("\nNguyen am = %d, phu am  = %d", n, strlen(_str) - n);
}

int main(int argc, char *argv[]) {
//	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	bai1(array, 9);
	bai2("toilaai");
	return 0;
}
