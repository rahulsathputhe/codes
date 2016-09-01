#include<stdio.h>
#include<stdlib.h>
void print(int a[], int size)
{
    int i;
    printf("The repeating element is");
 
    for(i = 0; i < size; i++)
    {
        if(a[abs(a[i])-1] > 0)
            a[abs(a[i])-1] = -a[abs(a[i])-1];
        else
            printf(" %d ", abs(a[i]));
    }
 
    printf("\nand the missing element is ");
    for(i=0; i<size; i++)
    {
        if(a[i]>0)
            printf("%d",i+1);
    }
}
 
int main()
{
    int a[] = {7, 3, 4, 5, 5, 6, 2};
    int  n = sizeof(a)/sizeof(a[0]);
    print(a, n);
    return 0;
}
