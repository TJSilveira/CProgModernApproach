#include<stdio.h>
#include<stdlib.h>

void exerc1(){
	int month=0;
	int day=0;
	int year=0;

	puts("\nEnter a date (dd/mm/yyy):");
	scanf("%d/%d/%d",&day,&month,&year);
	printf("%4i%2i%2i",year,month,day);
}

void exerc4(){
	int num1;
	int num2;
	int num3;

	puts("\nEnter phone number [(xxx) xxx-xxxx]:");
	scanf("(%3d) %3d-%4d",&num1,&num2,&num3);
	printf("You entered: %d.%d.%d",num1,num2,num3);

}

void exerc5(){
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;

	puts("Enter the numbers from 1 to 16 in any order:");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);

	int sum_rows1 = num1+num2+num3+num4;
	int sum_rows2 = num5+num6+num7+num8;
	int sum_rows3 = num9+num10+num11+num12;
	int sum_rows4 = num13+num14+num15+num16;

	int sum_columns1 = num1+num5+num9+num13;
	int sum_columns2 = num2+num6+num10+num14;
	int sum_columns3 = num3+num7+num11+num15;
	int sum_columns4 = num4+num8+num12+num16;

	int diagonal_1 = num1+num6+num11+num16;
	int diagonal_2 = num4+num7+num10+num13;

	printf("%d\t%d\t%d\t%d\n",num1,num2,num3,num4);
	printf("%d\t%d\t%d\t%d\n",num5,num6,num7,num8);
	printf("%d\t%d\t%d\t%d\n",num9,num10,num11,num12);
	printf("%d\t%d\t%d\t%d\n",num13,num14,num15,num16);

	printf("Row sums: %d %d %d %d\n",sum_rows1,sum_rows2,sum_rows3,sum_rows4);
	printf("Column sums: %d %d %d %d\n",sum_columns1,sum_columns2,sum_columns3,sum_columns4);
	printf("Diagonal sums: %d %d\n",diagonal_1,diagonal_2);

}

int main(){
	float a = 123.354524525;
	printf("%-6.4e",a);

	// exerc1();
	// exerc4();
	exerc5();
}