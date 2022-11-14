#include <stdio.h>
int main ()
{
    int a[100],b,c,d;
    printf("Enter number of elements : ");
    scanf("%d",&b);

    for (int i=1;i<=b;i++)
    {printf("\n Enter %d element : ",i);
        scanf("%d",&a[i]);
    }
     rearrange:
    printf ("\n Select a option \n 1.Ascending order\n 2.descending order\n");
    scanf("%d",&c);
    if (c==2)
    {
        for (int j=1;j<=b;j++)
        {
            for (int k=1;k+ 1<=b;k++)
            {
                if (a[j]>a[k]){d=a[j];a[j]=a[k];a[k]=d;}
            }
        }
    }
  else  if (c==1)
    {
        for (int l=1;l<=b;l++)
        {
            for (int m=1;m+ 1<=b;m++)
            {
                if (a[l]<a[m]){d=a[l];a[l]=a[m];a[m]=d;}
            }
        }
    }
    for (int p=1;p<=b;p++)
    {
        printf("\n%d",a[p]);
    }
    printf("\n 3.Rearrange list\n 4.To exit\n"); int g;
    scanf("%d",&g);if (g==4){ return 0;}else if (g==3){goto rearrange;}
    return 0;
}
