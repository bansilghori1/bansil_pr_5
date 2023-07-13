/*Q.2 Write a Program to find the largest element from a given 2D array.
*/


#include<stdio.h>

void main()
{

    int c,r,i,j,sum=0;

    printf("Enter the array's row size :- ");
    scanf("%d",&r);
    printf("EEnetr the array's colum size :- ");
    scanf("%d",&c);

    int a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]>sum)
            {
                sum = a[i][j];
            }
        }
    }

    printf("Max number :- %d",sum);
}