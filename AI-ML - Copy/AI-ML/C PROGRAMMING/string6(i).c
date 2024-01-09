#include<stdio.h>
#include<string.h>
int main()
{
        char a[100];
        scanf("%s",a);
        int n;
        n=strlen(a);
        for(int i=0;i<n;i+=2)
        {
                int tem=a[i];
                a[i]=a[i+1];
                a[i+1]=tem;


        }

        printf("%s",a);
}
