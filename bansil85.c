/*Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
*/

#include<stdio.h>

void main(){

int i,j,r,c;

printf("Enter the size of Row =   ");
scanf("%d",&i);

printf("Enter the size of column =   ");
scanf("%d",&j);

int a[i][j];

printf("Enter the array A's elements\n");
for(r=0;r<i;r++){
   for(c=0;c<j;c++){
    
    printf("a[%d][%d] =  ",r,c);
    scanf("%d",&a[r][c]);
    }
}

int p,q,sum=0,s=0;
printf("Enetr row number : ");
scanf("%d",&p);

printf("Elements of row %d: ",p);
for(r=0;r<i;r++){
    if(r==p){
        for(c=0;c<j;c++){ 
    
        printf("%d ",a[r][c]);
            sum = sum + a[r][c];
        }
    }
}
printf("\nThe sum of %d row is : %d\n",p,sum );

printf("Enter the column number : ");
scanf("%d",&q);

printf("Elements of coloum %d: ",q);

for(c=0;c<j;c++){
    if(c==q){
        for(r=0;r<i;r++){ 
    
        printf("%d ",a[r][c]);
        s = s + a[r][c];
        }
    }
}
printf("\nThe sum of %d raw is : %d",q,s);

}