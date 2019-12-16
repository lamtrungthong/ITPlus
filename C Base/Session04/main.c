#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	char name_str[10];
//	char class_str[20];
//	
//	printf("\nNhap ten: ");
//	fflush(stdin);
//	gets(name_str);
////	scanf("%s", name_str);
//	
//	printf("\nNhap lop: ");
//	fflush(stdin);
//	gets(class_str);
////	scanf("%s", class_str);
//	
//	//Ham noi hai chuoi str1 va str2 va tra va chuoi str1; str1 = str1 + str2
////	printf("\nHam noi chuoi = %s", strcat(name_str, class_str)); // name_str = name_str + class_str
////	printf("\nName_str = %s", name_str); // cong chuoi
//	
//	//so sanh chuoi so sanh tung ky tu voi nhau, lay gia tri he 10 trong bang ma ascii de so sanh
////	if(strcmp(name_str, class_str) < 0){
////		printf("\nname_str < class_str"); //  neu gia tri cua ki tu tai chuoi name_str lon hon ki tu tai chuoi class_str 
////	}else if(strcmp(name_str, class_str) > 0){
////		printf("\nname_str > class_str"); // neu gia tri cua ki tu tai chuoi name_str nho hon ki tu tai chuoi class_str
////	}else{
////		printf("\nname_str = class_str"); // giong nhau ve tat cac cac ki tu
////	}
////	
////	// xac dinh vi tri xuat hien trong chuoi
////	printf("\n%d", strchr(name_str, 'a')); // tra ve dia chi cua gi tri tim thay trong chuoi
////	
////	//copy chuoi str1 = str2 
////	printf("\n%s" ,strcpy(name_str, class_str));
////	
////	//do dai thuc su cua chuoi
////	printf("\n%d", strlen(name_str)); // chi tinh tu dau chuoi den ki tu null
//
//
//	
//	
//	printf("\nThong tin cua ban.");
//	printf("\nName : %s", name_str);
//	printf("\nClass: %s", class_str);

	char _str[50];
	char temp_str[50] = "";
	int i, j = 0;
	printf("\nNhap chuoi = ");
	fflush(stdin);
	gets(_str);
	
	for(i = 0; i < strlen(_str); i++){
		if(_str[i] != ' '){
			if(_str[i] != '\0'){
				temp_str[j] = _str[i];
				j++;
			}	
		}else{
			if(_str[i] != '\0' && j > 0){
				if(temp_str[i-1] != ' ' && _str[i+1] != ' ' && _str[i+1] != '\0') {
				temp_str[j] = _str[i];
				printf("\nelse = %c, %d", _str[i], j);
				j++;
				}
			}
		}
	}
//	printf("|");
	printf("\nChuoi = |%s| \nLength = %d", temp_str, strlen(temp_str));

//	int n, i, j, temp; 
//	int arr[10];
//	
//	printf("\nNhap so phan tu cua mang = ");
//	scanf("%d", &n);
//	fflush(stdin);
//	//nhap mang
//	for(i = 0; i< n; i++){
//		printf("\nNhap phan tu thu arr[%d] = ", i+1);
//		scanf("%d", &arr[i]);	
//	}
//	//in ra mang
//	printf("\nMang vua nhap. ");
//	for(i = 0; i< n; i++){
//		printf("%d ", arr[i]);		
//	}
//	//xap xep
//	for(i = 0; i < n-1; i++){
//		for(j = i+1; j < n; j++){
//			if(arr[i] < arr[j]){
//				arr[i] = arr[i] + arr[j];
//				arr[j] = arr[i] - arr[j];
//				arr[i] = arr[i] - arr[j]; 
//			}
//		}
//	}
//	
//	//in ra mang
//	printf("\nMang sau khi sap xep. ");
//	for(i = 0; i< n; i++){
//		printf("%d ", arr[i]);		
//	}
	
	
	return 0;
}
