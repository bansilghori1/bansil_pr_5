/*Q.1 Write a Program to find all the negative elements from a given 1D array.
*/
#include<stdio.h>

void main (){

int i,n;

printf("Enter array size =  ");
scanf("%d",&n);

int a[n];

printf("Enter array A's elemets \n");
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        }

printf("The negative elemets is : ");
    for(i=0;i<n;i++){
    if(a[i]<0){
        printf("%d",a[i]);
        }
    }
}