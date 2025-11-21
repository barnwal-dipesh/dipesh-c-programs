#include <stdio.h>
int main()
{
    printf("Input size of the Array: ");
    int size, i, n, c=-1;
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array elemetns:\n");
    for( i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    i=0;
    printf("Enter element to be searched: ");
    scanf("%d", &n);
    while(i<size){
        if(n==arr[i])
        {
            c = i;
        }
        i++;
    }
    if(c==-1)
        printf("The number %d does not exist in the Array", n);
    else
        printf("The number %d exists at %d index of the Array", n, c);
}