
#include <stdio.h>
#include<stdlib.h>

int main() {
    int *arr_malloc, *arr_calloc;
    int n,i;
    printf("enter the number of elements::");
    scanf("%d",&n);
    arr_malloc = (int*) malloc(n* sizeof(int));
    arr_calloc = (int *) calloc(n, sizeof(int));
    
    if(arr_malloc == NULL || arr_calloc == NULL)
    {
        printf("Memory allocation failed");
        return 1;
        
    }
    
    printf("\n Enter %d intergers in malloc array");
    for(i=0;i<n; i++)
    {
        printf("Element %d :",i=1);
        scanf("%d",&arr_malloc[i]);
    }
    
    printf("\n Enter %d intergers in calloc array");
    for(i=0;i<n; i++)
    {
        printf("Element %d :",i=1);
        scanf("%d",&arr_calloc[i]);
    }
    
    printf("\n The entered integer in malloc array are:\n");
    for(i=0;i<n; i++)
    {
        printf("%d",arr_malloc[i]);
    }
    
    printf("\n The entered integer in calloc array are:\n");
    for(i=0;i<n; i++)
    {
        printf("%d",arr_calloc[i]);
    }
    
    printf("\n");
    free(arr_malloc);
    free(arr_calloc);
    return 0;
}
