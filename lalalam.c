#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("\t \t \tMatrix Engine\n");
    int n;
    printf("Enter 1 For Addition of two matrices:\nEnter 2 for Subtraction of Two matrices:\nEnter 3 for multiplication of two matrices:\nEnter 4 to find the determinant of a square matrix (2 or 3):");
    scanf("%d",&n);
    switch(n)
    {case 1:
    {int r;
    printf("Enter no of rows/column of square matrix:");
    scanf("%d",&r);
    int a[r][r];
    int b[r][r];
    int c[r][r];
    int x,y;
    printf("Enter %d elements of first matrix:", r*r);
    for(x=0;x<r;x++)
    for(y=0;y<r;y++)
    scanf("%d", &a[x][y]);
    for(x=0;x<r;x++){
        for(y=0;y<r;y++)
        printf("\t%d",a[x][y]);
        printf("\n");
    }
    printf("Enter %d elements of second matrix", r*r);
    for(x=0;x<r;x++)
    for(y=0;y<r;y++)
    scanf("%d", &b[x][y]);
    for(x=0;x<r;x++){
        for(y=0;y<r;y++)
        printf("\t%d",b[x][y]);
        printf("\n"); 
    }
     for(x=0;x<r;x++)
    for(y=0;y<r;y++)
    c[x][y]=a[x][y]+b[x][y];
    printf("Sum of two matrix is:\n");
    for(x=0;x<r;x++){
    for(y=0;y<r;y++)
    printf("\t%d", c[x][y]);
    printf("\n");
}}
break;
case 2:
{int r;
    printf("Enter no of rows/column of square matrix");
    scanf("%d",&r);
    int a[r][r];
    int b[r][r];
    int c[r][r];
    int x,y;
    printf("Enter %d elements of first matrix", r*r);
    for(x=0;x<r;x++)
    for(y=0;y<r;y++)
    scanf("%d", &a[x][y]);
    for(x=0;x<r;x++){
        for(y=0;y<r;y++)
        printf("\t%d",a[x][y]);
        printf("\n");
    }
    printf("Enter %d elements of second matrix", r*r);
    for(x=0;x<r;x++)
    for(y=0;y<r;y++)
    scanf("%d", &b[x][y]);
    for(x=0;x<r;x++){
        for(y=0;y<r;y++)
        printf("\t%d",b[x][y]);
        printf("\n"); 
    }
     for(x=0;x<r;x++)
    for(y=0;y<r;y++)
    c[x][y]=a[x][y]-b[x][y];
    printf("Subtraction of two matrix is:\n");
    for(x=0;x<r;x++){
    for(y=0;y<r;y++)
    printf("\t%d", c[x][y]);
    printf("\n");
}}
break;
case 3:
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int a[10][10], b[10][10], result[10][10];
    printf("Enter %d elements of first matrix:\n", r1*c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter %d elements of second matrix:\n", r2*c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
}
    
break;

case 4:
     {
    int a[3][3];
    int n, i, j;
    float det = 0;
    printf("Enter order of square matrix (2 or 3): ");
    scanf("%d", &n);
    printf("Enter %d elements of the matrix:\n", n*n);
    for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    scanf("%d", &a[i][j]);
    if(n == 2) {
        det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    }
    else if(n == 3) {
        det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
            - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
            + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    }
    else {printf("This program supports only 2x2 and 3x3 matrices.\n");
        
    }

    printf("Determinant = %.2f", det);
    return 0;
}


default:
printf("Enter a valid option");
exit(1);
}
 return 0;   
}