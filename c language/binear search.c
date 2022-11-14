#include <stdio.h>
void main ()
{
    int a[100],b,c,d,i,j,item,m;
    printf("Enter number of elements in list : ");scanf("%d",&b);

    for(i=0;i<b;i++)
    {printf ("\n Enter %d elements : ",i+1);
        scanf("%d",&a[i]);
    }
    for (j=0;j<b;j++)
    {
        for(int k=0;k+1<b;k++)
        {
            if (a[j]<a[k]){d=a[j];a[j]=a[k];a[k]=d;}
        }
    }

    for (int o=0;o<b;o++){printf("%d\t",a[o]);}
search:
printf("\nEnter item to search : ");
scanf("%d",&item);
int lb=0,ub=b-1,mid,start,end;
start=lb;
end=ub;
mid=(start+end)/2;
while (start<=end && a[mid]!=item){ if (item<a[mid]){ end=mid- 1;}else{start=mid+ 1;}mid=(start+end)/2;}
if (item==a[mid]){printf("search item location is : %d",mid+1);}
 else {printf("Search element is not found !");}
printf("\n 1.Search again \n 2.To exit");scanf("%d",&m);if (m==1){goto search;}else{ }

    }
