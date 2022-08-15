#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int num;
void checkNumber(int num){
	printf("Nhap so: ");
    scanf("%d", &num);
if (num<2) {
        printf("%d khong phai la so nguyen to\n", num);
  	}

    for (int i = 2; i < num - 1; ++i) {
        if (num % i == 0) {
            printf("%d khong phai la so nguyen to\n", num);
        }
    
   else printf("%d la so nguyen to\n", num);
	}
}

void menu(){
	int ch;
	while(1)
	{
		printf("-------------------------------------\n");
		printf("\t\tMenu\n");
		printf("-------------------------------------\n");
		printf("\n 1. Nhap so nguyen va kiem tra so nguyen to");
		printf("\n 2. Thoat");
		printf("\nEnter your choice: ");
		scanf("\n %d", &ch);
		
		switch(ch)
		{
			case 1:
				checkNumber(num);
				break;
			case 2:
				exit(0);
		}
	}
}
   
int main(){
    menu();
    return 0;
}
