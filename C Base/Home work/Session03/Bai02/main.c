#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Bai1: in ra duoi dang
/*
1
12
123
1234
12345
*/

void bai1(int n){
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}

//Bai2: in ra bang cuu chuong cua 1 so

void bai2(int n){
	int i;
	printf("Bang cuu chuong cua %d. \n", n);
	for(i = 1; i <= 10; i++){
		printf("\n %d x %d = %d ", n, i, (n*i));
	}
}
int main(int argc, char *argv[]) {
	//bai1(10);
	bai2(9);
	return 0;
}
