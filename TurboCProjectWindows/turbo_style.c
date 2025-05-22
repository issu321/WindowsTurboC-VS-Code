#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
void main(){
    int a[100],n,i,low=0,high=4,mid,num;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the element to be searched");
    scanf("%d", &num);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==num){
            printf("Found at POS %d", mid+1);
            return;
        }
        else if(a[mid]<num)
        low = mid+1;
        else
        high = mid-1;
    }
    printf("Error");
}