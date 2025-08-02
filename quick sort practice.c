#include<stdio.h>
void quicksort(int array[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        i=first;
        j=last;
        pivot=first;
        while(i<j)
        {
            while(array[i]<=array[pivot])
            {
                i++;
            }
            while(array[j]>array[pivot])
            {
                j--;
            }
            if(i<j)
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        temp=array[j];
        array[j]=array[pivot];
        array[pivot]=temp;
        quicksort(array,first,j-1);
        quicksort(array,j+1,last);
        
    }
}
int main()
{
    int array[50],i,n;
    printf("How many numbers do you want to enter:-");
    scanf("%d",&n);
    printf("Enter %d Numbers:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    quicksort(array,0,n-1);
    printf("Sorted numbers:-");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}