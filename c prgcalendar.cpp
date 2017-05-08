#include<stdio.h>
void cal (int y, int sd);
int leap(int year);
main()
{
	int year,stdt;
	printf("\nEnter the year:");
	scanf("%d",&year);
	printf("\nEnter day no.(1:sun 2:mon 3:tue 4:wed 5:thu 6:fri 7:sat):");
	scanf("%d",&stdt);
	cal(year,stdt);
	return 0;
}

void cal (int y, int sd)
{
	printf("\n\t\t\t\tYEAR %d CALENDAR\n\n\n",y);
	int i,j,a[12][31],n,l=sd,k,v,u;
	char d[7][3],m[12][12];
	d[7][3]={{'S','U','N'},{'M','O','N'},{'T','U','E'},{'W','E','D'},{'T','H','U'},{'F','R','I'},{'S','A','T'}};
	m[12][12]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	for(i=0;i<12;++i)
	    {   printf("\n%s\n",m[i]);
	    	for(j=0;j<7;++j)
	    	    printf("\t%s",d[j]);
	    	printf("\n");
	    	if((i%2==1 && i<7)||(i%2==0 && i>6))
	    	   {
	    	   	if(i==1)
	    	   	   {
	    	   	   	if(leap(y))
	    	   	   	   n=29;
	    	   	   	else
	    	   	   	   n=28;
	    	   	   }
	    	   	else
				   n=30;   
	    	   }
	    	else
	    	   n=31;
	    	switch(l)
	    	{
	    		case 2: printf("\t   \t");
	    		        break;
	    		case 3: printf("\t   \t   \t");
	    		        break;
	    		case 4: printf("\t   \t   \t   \t");
	    		        break;
	    		case 5: printf("\t   \t   \t   \t   \t");
	    		        break;
	    		case 6: printf("\t   \t   \t   \t   \t   \t");
	    		        break;
	    		case 7: printf("\t   \t   \t   \t   \t   \t   \t");
	    		        break;
	    	}
	    	printf("1");
	    	if(l==7)
	    	    printf("\n");
	    	v=2;
	    	for(j=0;j<5;++j)
	    	    {   
	    	        if(j!=0)
	    	           k=1;
	    	        else
	    	           k=l+1;
	    	    	for(;k<=7 && v<=n;++k,++v)
	    	    	    printf("\t%d",v);   
	    	    }
	    	v=2;
	    	l=k;
	    }
}

int leap(int year)
{
	if(year%400 == 0)
         return 1;
      else if(year%4==0 && year%100!=0)
         return 1;
      else
         return 0;
}
