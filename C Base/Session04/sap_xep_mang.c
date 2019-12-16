#include <stdio.h>

int main(int argc, char *argv[]){
	int n, i, j, temp; 
	int arr[n];
	
	printf("\nNhap so phan tu cua mang = ");
	scanf("%d", &n);
	fflush(stdin);
	//nhap mang
	for(i = 0; i< n; i++){
		printf("\nNhap phan tu thu arr[%d] = ", i+1);
		scanf("%d", &arr[i]);	
	}
	//in ra mang
	printf("\nMang vua nhap.");
	for(i = 0; i< n; i++){
		printf("%d ", arr[i]);		
	}
	//xap xep
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}
	
	//in ra mang
	printf("\nMang sau khi sap xep.");
	for(i = 0; i< n; i++){
		printf("%d ", arr[i]);		
	}
	return 0;
	
	
}
