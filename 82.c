//write a program in C to print array elements in reverse order using pointer

#include <stdio.h>

int main()
{
    int arr[100];
    int size, i;
    scanf("%d", &size);
    for(i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    return 0;
}