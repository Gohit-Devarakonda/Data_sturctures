#include<stdio.h>
void Merge(int arr[],int lo, int mid, int hi)
{
    int b[10];
    int i=lo,j=mid+1,k=0;
    while(i<=mid && j<=hi)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=hi)
    {
        b[k]=arr[j];
        j++;
        k++;
    }
    for(i=lo,k=0;i<=hi;i++,k++)
    {
        arr[i]=b[k];
    }
}

void MergeSort(int arr[],int lef,int rig)
{
    if(lef<rig)
    {   int mid=(lef+rig)/2;
        MergeSort(arr,lef,mid);
        MergeSort(arr,mid+1,rig);
        Merge(arr,lef,mid,rig);         
    }
}
int main()
{
    int arr[25],i,n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    MergeSort(arr,0,n-1);
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}