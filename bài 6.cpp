#include<stdio.h>
int main(){
	int so1,so2,chon;
	do{
		printf("CALCULATOR\n");
		printf("1.tong hai so\n");
		printf("2.hieu hai so\n");
		printf("3.tich hai so\n");
		printf("4.thuong hai so\n");
		printf("5.thoat\n");
		printf("lua chon cua ban\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &so1);
                printf("Nhap so thu hai: ");
                scanf("%d", &so2);
                printf("Tong hai so la: %d\n", so1+so2);
                break;
            case 2:
                printf("Nhap so thu nhat: ");
                scanf("%d", &so1);
                printf("Nhap so thu hai: ");
                scanf("%d", &so2);
                printf("Hieu hai so la: %d\n", so1-so2);
                break;
            case 3:
                printf("Nhap so thu nhat: ");
                scanf("%d", &so1);
                printf("Nhap so thu hai: ");
                scanf("%d", &so2);
                printf("Tich hai so la: %d\n", so1*so2);
                break;
            case 4:
                printf("Nhap so thu nhat: ");
                scanf("%d", &so1);
                printf("Nhap so thu hai: ");
                scanf("%d", &so2);
                if (so2 == 0) {
                    printf("Khong the chia cho 0.\n");
                } else {
                    printf("Thuong hai so la: %.2f\n", (float)so1/so2);
                }
                break;
                 case 5:
                printf("Thoat.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chon != 5);
		return 0;
	
}
