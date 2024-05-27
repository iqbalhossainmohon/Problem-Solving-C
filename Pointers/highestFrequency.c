/// Write a program to find a number which has highest frequency of a given array using pointers.

#include<stdio.h>

int main(){
    int i,n,d,a[1009],f[1009],*p;
        scanf("%d",&n);

    for(i=0;i<=1002;i++)
        f[i]=0;
            for(i=0;i<n;i++){
                scanf("%d",&a[i]);

                d=a[i];
                f[d]++;
            }

                p=f;
                int mx=0;
                int ans=0;
            for(i=1;i<=1000;i++){
                    p++;
                if(mx<*p){
                    mx=*p;
                    ans=i;
                    }
                }
            printf("%d\n",ans);
    return 0;
}

