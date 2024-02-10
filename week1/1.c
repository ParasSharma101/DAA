/*Given an already sorted array of positive integers, design an algorithm and implement it using a 
program to find whether given key element is present in the array or not. Also, find total number 
of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).*/ 

#include<stdio.h>

void main()
{
    int arr[50],n,m,p,i,j,k,flag,c;

    printf("Enter the number of times you want to check the key exists\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the length of the array");
        scanf("%d",&m);

        printf("Enter the elements of array");
        for(k=0; k<m; k++)
        {
            scanf("%d",&arr[k]);
        }
        printf("Enter the key you want to search ");
        scanf("%d",&p);

        flag=0;
        c=1;
        for(k=0;k<m;k++)
        {
            if(arr[k]==p)
            {
                flag=1;
                break;
            }
            c++;
        }
        if(flag==1)
        {
            printf("Key %d is present at position %d\n",p,c++);
        }
        else
        {
            printf("Key %d is not present \n",p);
        }
    }
}
