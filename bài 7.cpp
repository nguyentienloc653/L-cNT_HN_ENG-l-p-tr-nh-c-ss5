#include<stdio.h>

int main(){
int so1,so2,ucln;
	printf("Nhap so nguyen thu nhat :");
	scanf("%d",&so1);
	printf("Nhap so nguyen thu hai :");
	scanf("%d",&so2);
	if(so1==0 || so2==0) {
		ucln = (so1+so2);
	}else{
		while(so1!=so2){
			if(so1>so2){
				so1=so1-so2;
			}else{
				so2=so2-so1;
			}
		}
		ucln=so1;
	}
  printf("ucln = %d",ucln);
	return 0;
}
