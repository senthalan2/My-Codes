#include<stdio.h>
#include<conio.h>
int findpos(int a[],int key)
{
    
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            break;
        }
    }
    return i;
}
void main()
{
    int arr[10]={1,21,45,66,98,85,78,4,55,48},key=45,pos;
    pos=findpos(arr,key);
    printf("position of %d is %d.",key,pos);
    getch();
}
