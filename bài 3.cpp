#include<stdio.h>
int main(){
	int x,sum=0;
		printf("Nhap so nguyen duong :");
		scanf("%d",&x);
		
	if(x<=0){
		printf("Sai so");
	} else {
		for(int i=1; i<=x;i++){
			sum += i;
		}
		printf("Tong cac so tu 1 den %d la: %d\n", x, sum);
	}
	return 0;
}
