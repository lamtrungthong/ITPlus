#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Viet mot chuong trình xuat ra giá tri ASCII cua các ký tu ‘A’ và ‘b’.
void bai1(){
	char a = 'A';
	char b = 'b';
	printf("%d \n", a); // dung %d de hien thi gia tri ascii cua ki tu
	printf("%d \n", b);
}

/*#include <stdio.h>
void main()
{
int breadth;
float length, height;
scanf(“%d%f%6.2f”, breadth, &length, height);
printf(“%d %f %e”, &breadth, length, height);
}
Sua loi chuong trình trên.
*/

void bai2(){
	int breadth;
	float length, height;
	scanf("%d%f%f", &breadth, &length, &height);
	printf("%d %f %e", breadth, length, height);
}

/*
Viet mot chuong trình nhap vào name, basic, daper (phan tram cua D.A), bonper (phan
tram loi tuc) và loandet (tien vay bi khau tru) cho mot nhân viên. Tính luong nhu sau:
salary = basic + basic * daper/100 + bonper * basic/100 -
loandet
*/
void bai3(){
	char name[10];
	int basic, daper;
	float salary, bonper, loandet;
	char strName[] = "Name";
	char strBasic[] = "Basic";
	char strSalary[] = "Salary";
	
	printf("Enter name: ");		scanf("%s", name);
	printf("Enter basic: ");	scanf("%d", &basic);
	printf("Enter daper: ");	scanf("%d", &daper);
	printf("Enter bonper: ");	scanf("%f", &bonper);
	printf("Enter loandet: ");	scanf("%f", &loandet);
	
	salary = (basic + (basic * (daper/100)) + (bonper * (basic/100))- loandet);
	printf("%-10s     %-10s          %-10s\n", strName, strBasic, strSalary);
	printf("%-10s     %-10d          %-100.2f", name, basic, salary);
}
int main(int argc, char *argv[]) {
//	bai1();
//	bai2();
//	bai3();
	
	return 0;
}
