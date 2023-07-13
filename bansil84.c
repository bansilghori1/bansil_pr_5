/*Q.3 Write a Program to find the transpose matrix of a given 2D array.
*/
#include<stdio.h>

void main(){

int i,r,c,sum=0;

printf("Enter the size of Row & colum =   ");
scanf("%d",&i);

int a[i][i];

printf("Enter the array's elements\n");
for(r=0;r<i;r++){
   for(c=0;c<i;c++){
    
      printf("a[%d][%d] =  ",r,c);
      scanf("%d",&a[r][c]);
   
   }
}

for(r=0;r<i;r++){
   for(c=0;c<i;c++){
   
   printf("%d",a[c][r]);
   
   }
printf("\n");
}
}