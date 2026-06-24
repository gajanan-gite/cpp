#include<stdio.h>

int main()
{
    int no = 11;

    int *iptr = &no;
    printf("gaju %d",&iptr);
    int **iptr1=&iptr;
    printf("gaju %d",&*iptr);

    
    
    return 0;
}