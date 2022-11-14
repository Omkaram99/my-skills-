#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void sgpacl(int sn);
void semcla(int s);
void takeSemValues(int s);
void printsem(int s);
FILE *Bfile;

struct semlist
{
    char sname[20][10];
    int scr[10];
    char sgrade[10][10];
    int tcrd;
    double sgpa;
    int snum;
} sem[8];

void main()
{Bfile = fopen("BTechCgpa.txt","w");
    char a; int semN;
    printf("\t\t\t\t*************** B-TECH CGPA CALUCULATION(R16) ***************\n");
    printf("\t\t\t\tcreated by P.Omkaram downloaded from https://omkar99.epizy.com\n\n\n");
    printf("\t\t\tAre you lateral eatery ? if \"yes\" enter y else \"n\" : ");
    fprintf(Bfile,"\t\t\t\t*************** B-TECH CGPA CALUCULATION(R16) ***************\n");
    fprintf(Bfile,"\t\t\t\tcreated by P.Omkaram downloaded from https://omkar99.epizy.com\n\n\n");
    fprintf(Bfile,"\t\t\tAre you lateral eatery ? if \"yes\" enter y else \"n\" : ");
    scanf("%c",&a);a= toupper(a);
    fprintf(Bfile,"%c",a);
    if (a=='Y'){semN = 2;  }
    else {semN=8;}
    for (int i =0; i<semN;i++ )
        {
        takeSemValues(i);
        semcla(i);


        }
      //  for(int te=0;te<sem[0].snum;te++){printf("%s",sem[0].sgrade[te]);}
        //char ao = sem[0].sgrade[1];
        //printf("%s",ao);
       // for (int pe=0;pe<sem[0].snum;pe++){printf("\n\n%s",sem[0].sgrade[pe]);}
//printsem(semN);
 for(int s=0 ;s<semN;s++){
     printf("\n\t\t\t***************** -markes of %d semestor- ******************\n",s+1);
     fprintf(Bfile,"\n\t\t\t***************** -markes of %d semestor- ******************\n",s+1);
     int a=0;
  printf("\t\t\tsubjact name\t\tgrade\t\t    cridet\n\n");
  fprintf(Bfile,"\t\t\tsubjact name\t\tgrade\t\t    cridet\n\n");
    for (int j=0;j<sem[s].snum;j++)
    {
        a=strlen(sem[s].sname[j]);

        printf("\t\t\t%d] %s",j+1,sem[s].sname[j]);
        fprintf(Bfile,"\t\t\t%d] %s",j+1,sem[s].sname[j]);
        for (int k=0;k<23-a;k++){printf(" "); fprintf(Bfile," ");}
        printf("%s",sem[s].sgrade[j]);//if(j==7){printf("\n%s\n",sem[s].sgrade[j]);}
        fprintf(Bfile,"%s",sem[s].sgrade[j]);
        printf("\t\t\t%d\n\n",sem[s].scr[j]);
        fprintf(Bfile,"\t\t\t%d\n\n",sem[s].scr[j]);
    }
    printf("\n\t\t\tTotal no.of subjects is : %d \n\t\t\tTotal credits in sem is : %d \n\t\t\tTotal SGPA is           : %0.3f\n\n",sem[s].snum,sem[s].tcrd,sem[s].sgpa);
    fprintf(Bfile,"\n\t\t\tTotal no.of subjects is : %d \n\t\t\tTotal credits in sem is : %d \n\t\t\tTotal SGPA is           : %0.3f\n\n",sem[s].snum,sem[s].tcrd,sem[s].sgpa);
}
sgpacl(semN);
}


//         assinning a values
void takeSemValues(int s)
{ char ca[10],cn; printf("\n\n\t\t\t\t\tEnter no.of subject in %d sem : ",s+1);
fprintf(Bfile,"\n\n\t\t\t\t\tEnter no.of subject in %d sem : ",s+1);
  scanf("%d",&sem[s].snum); //printf("\t\t\t\t\t %d\n",sem[s].snum);
  fprintf(Bfile,"%d",sem[s].snum);
    for(int j=0;j<sem[s].snum;j++)
        {
        printf("\n\t\t\t\tEnter subject %d name  is : ",j+1);
        fprintf(Bfile,"\n\t\t\t\tEnter subject %d name  is : ",j+1);
              scanf("%s",sem[s].sname[j]);
              fprintf(Bfile,"%s",sem[s].sname[j]);

        printf("\n\t\tEnter subject grade of %s is : ",sem[s].sname[j]);
        fprintf(Bfile,"\n\t\tEnter subject grade of %s is : ",sem[s].sname[j]);
         scanf("%s",sem[s].sgrade[j]);

        *sem[s].sgrade[j]= toupper(*sem[s].sgrade[j]);
            fprintf(Bfile,"%s",sem[s].sgrade[j]);
        printf("\n\t\tEnter subject credit %s is   : ",sem[s].sname[j]);
            fprintf(Bfile,"\n\t\tEnter subject credit %s is   : ",sem[s].sname[j]);
         scanf("%d",&sem[s].scr[j]);

            fprintf(Bfile,"%d",sem[s].scr[j]);
         //scanf("%d",&sem[s].scr[j]);
         //fprintf(Bfile,"%d",sem[s].scr[j]);
        }
}




void semcla(int s)
{
    int tcr=0;double tpa=0,m=0;
    for(int j=0;j<sem[s].snum;j++)
    {
        tcr += sem[s].scr[j];
        char b=*sem[s].sgrade[j];

                if(b=='O'){m=10;}
                else if(b=='S'){m=9;}
                else if(b=='A'){m=8;}
                else if(b=='B'){m=7;}
                else if(b=='C'){m=6;}
                else if(b=='D'){m=5;}
                else if(b=='F'){m=0;}

            tpa+=(sem[s].scr[j]*m);//printf("\n\n%d\n\n",sem[s].scr[j]);
    }
    sem[s].tcrd=tcr;
    sem[s].sgpa = tpa/tcr;
    //printf("\n\n%f\n\n",tpa);

}
void sgpacl(int sn)
{
    double cgps =0;int tscr=0;
    for (int i=0 ;i<sn;i++){
        tscr+=sem[i].tcrd;
        cgps += (sem[i].tcrd*sem[i].sgpa);    }


    printf("\n\n\n\t\t\t***************You'rs CGPA is : %0.3f**************\n",cgps/tscr);
    fprintf(Bfile,"\n\n\n\t\t\t***************You'rs CGPA is : %0.3f**************\n",cgps/tscr);
    printf("\t\t\t***************You'rs Persantage is : %0.3f**************\n\n",(cgps/tscr - 0.75)*10);
    fprintf(Bfile,"\t\t\t***************You'rs Persantage is : %0.3f**************\n\n",(cgps/tscr - 0.75)*10);
    printf("all data is saved as BTechCgpa.txt ");
    fclose(Bfile);
}





/*void printsem(int sn)

{      for(int s=0 ;s<sn;s++){
     printf("\n\t\t\t***************** -markes of %d semestor- ******************\n",s+1);int a=0;
  printf("\t\t\tsubjact name\t\tgrade\t\t    cridet\n\n");
    for (int j=0;j<sem[s].snum;j++)
    {
        a=strlen(sem[s].sname[j]);

        printf("\t\t\t%d] %s",j+1,sem[s].sname[j]);
        for (int k=0;k<23-a;k++){printf(" ");}printf("%s",sem[s].sgrade[j]);if(j==7){printf("\n%s\n",sem[s].sgrade[j]);}
        printf("\t\t\t%d\n\n",sem[s].scr[j]);
    }
    printf("\n\t\t\tTotal no.of subjects is : %d \n\t\t\tTotal credits in sem is : %d \n\t\t\tTotal SGPA is           : %0.3f\n\n",sem[s].snum,sem[s].tcrd,sem[s].sgpa);
}}*/
