#include<stdio.h>




void main()
{   int l,b,x,d=0,m,ls,y=0,ul=0,x1,suml=0; double c; int bu=1;
    printf("enter the length of the wooden piece : ");
scanf("%d",&l);ls=l;

    int a[l],a2[l],to[l];

    printf("enter the prises of the wood at different lengths ");
    for (int i=0;i<l;i++){
            printf("\n Enter prise of %d-lengthed wood : ",i+1);

            scanf("%d",&a[i]);
            a2[i]=a[i];
}
        for(int j=0;j<l;j++){
            for (int j2=j;j2<l;j2++)
            {
                if(a2[j]<a2[j2]){int k=a2[j];a2[j]=a2[j2];a2[j2]=k;}
            }        }
           // for (int jj=0;jj<l;jj++){printf("%d ",a2[jj]);}
           while(suml != ls ){

            for (int ii=0;ii<ls;ii++){if(a2[y]==a[ii]) {x=ii+1;} }
            if (x<=l){
                    for (int x1=0;x1<m;x1++){to[ul]=x;suml+=x; ul++; m=l/x; }ul-1;
                    if(l%x != 0){l=l%x; y++;
                    }else{}

                    }

                else {y++;        }


            }

printf("\n\n pieces to give max returns of wood to cut is : ");
for(int ok=0;ok<ul;ok++){printf("  %d  "  ,to[ok]); d+=a[to[ok]-1];          }

printf("\n\n total returns is = %d Rs\n\n\n",d);
            }






