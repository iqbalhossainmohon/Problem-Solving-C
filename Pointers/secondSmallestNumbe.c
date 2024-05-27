/// Write a program to find the 2nd smallest number of a given array using pointers.

#include<stdio.h>

int main()
{
    int i, n, a[109], *p;
    scanf("%d",&n);
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        p=a;
        int mn=*p;
        for(i=1;i<n;i++){
                p++;
            if(*p<mn){
             mn=*p;
            }
        }
        int ans=10000;
        for(i=0;i<n;i++)
        {
            if(a[i]<ans&&a[i]>mn)
                ans=a[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
