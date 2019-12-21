#include<stdio.h>
int main()
{
    int year, month,xingqi;
    int i, j, leap,s=0;
    int y[2]={365,366};
    int tab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31}, 
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    scanf ("%d %d",&year,&month);
    for(i=1900;i<=year;i++){
        leap=((i%4==0&&i%100!=0)||i%400==0);
        if(i<year){
            s+=y[leap];
        }
        if(i==year){
            for(j=1;j<month;j++){
                s+=tab[leap][j];
            }
        }
    }
    xingqi=s%7+1;
    leap=((year%4&&year%100!=0)||year%400==0);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    for (j=0;j<xingqi;j++){
        printf ("    ");
    }
    for(i=1;i<=tab[leap][month];i++){
        j++;
        if(i<tab[leap][month]){
            if(j%7!=0)
                printf ("%3d ",i);
            if(j%7==0)
        	    printf ("%3d\n",i);
        } 
        if(i==tab[leap][month])
            printf ("%3d\n",i);
    }
}

