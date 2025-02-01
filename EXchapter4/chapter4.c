#include<stdio.h>
#include<stdlib.h>

void exerc6(){
    char ean[12];
    scanf("%12s",ean);

    puts("Enter the first 12 digits of an EAN:");

    int num1=ean[0]-48;
    int num2=ean[1]-48;
    int num3=ean[2]-48;;
    int num4=ean[3]-48;;
    int num5=ean[4]-48;;
    int num6=ean[5]-48;;
    int num7=ean[6]-48;;
    int num8=ean[7]-48;;
    int num9=ean[8]-48;;
    int num10=ean[9]-48;;
    int num11=ean[10]-48;;
    int num12=ean[11]-48;;

    int final_num = 9-((num2+num4+num6+num8+num10+num12)*3+(num1+num3+num5+num7+num9+num11)-1)%10;
    printf("Check digit: %i",final_num);
}

int main(){
    exerc6();

    return 0;
}