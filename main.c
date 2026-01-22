#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
