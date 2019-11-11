#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Bai1: In ra day fibonaci (1, 1, 2, 3, 5, 8, ...)
void bai1(int n){
	int i;
	int n1 = 0, n2 = 1, n3;
	printf("%d %d ",n1, n2 );
	for(i = 2; i < n; i++){
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
}

//Bai2: in ra theo mau
//12345
//1234
//123
//12
//1

void bai2(int n){
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n + 1 - i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
						

int main(int argc, char *argv[]) {
	//bai1(10);
	bai2(5);
	return 0; 
}
