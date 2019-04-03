
#include<stdio.h>
#include<conio.h>
void main()
{
   
        int n,a[50],i;
        clrscr();
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                if(i==a[i])
                {
                    
        printf("%d",i);
                }
        }
}

