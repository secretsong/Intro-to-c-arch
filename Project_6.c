//Sam Feuerborn
//11-29-20
//Project 6, give comments to an uncommented fnt

#include<stdio.h>

//Program Designed to take in the size of an array and the numbers 
//and organize the values from smallest to largest

//constant variables to use for the main and external fnts
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
//main fnt, to take in and print out array
int main()
{
	
	//takes in the size of the array
    int a[30],n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    
    //takes in the nums in the array
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    //declaration of the void fnt
    mergesort(a,0,n-1);
    
    //prints out array from smallest to largest
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        
    return 0;
}
 
 
 //sorts the array from smallest to largest
 //by using a value check system of two array values at once
void mergesort(int a[],int i,int j)
{
    int mid;
        
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);       
        mergesort(a,mid+1,j);    
        merge(a,i,mid,mid+1,j);    
    }
}
 
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];    //array used for merging
    int i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;
    
//sets format and organizes them accordingly 
    while(i<=j1 && j<=j2)    
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)    
        temp[k++]=a[i++];
        
    while(j<=j2)    
        temp[k++]=a[j++];
        
    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
