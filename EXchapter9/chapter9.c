#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int a[],int low, int high);
int split(int a[],int low, int high);

void quicksort(int a[],int low, int high){
    int middle;

    if(low>=high) return;
    middle = split(a,low,high);
    quicksort(a,low,middle-1);
    quicksort(a,middle+1,high);
}

int split(int a[],int low, int high){
    int part_element=a[low];

    while(1){
        while(low < high && part_element <=a[high]){
            high--;
        }
        if(low>=high){break;}
        a[low++]=a[high];

        while (low<high &&a[low]<= part_element){
            low++;
        }
        if(low>=high){break;}
        a[high--] = a[low];
    }

    a[high]=part_element;
    return high; 
}

void exerc1(){

}

int main() {
    // Write C code here
    // reverse();
    exerc9();

    exerc15();

    return 0;
}
