#include<stdio.h>  
unsigned long long input();
int main()
{
	unsigned long long n, m, tmp;
    while ( scanf("%llu%llu", &n, &m) != EOF ) {  
		unsigned long long i,j,k,b;
		unsigned long long a[m]; 
        //printf("n:%llu,m:%llu\n",n,m);
		for (k = 0;k < n; k++) { 
			unsigned long long match = 0;
			unsigned long long acount = 0;
			unsigned long long bcount = 0;
			for (j = 0;j < m; j++) 
				a[j] = input();
			b = input();
			while (acount < m && bcount < m ) {
				//printf("compare:a=%llu, b=%llu, acount =%llu , bcount = %llu\n",a[acount],b,acount, bcount);
				if ( a[acount] == b ) {
					acount++;
					bcount++;
					match++;
					if (bcount < m )
						b = input();
				} else if ( a[acount] < b ) {
					acount++;	
				} else { // *a > *b
					bcount++;
					if (bcount < m )
						b = input();
				}
			}
			while ( (bcount + 1)  < m ) {
				b = input();
				bcount++;
			}
			printf("%llu\n",match);
		}
    }  
}

unsigned long long input()  
{  
  char cha;  
  unsigned long long x=0;  
  while(cha=getchar())  
     if(cha!=' '&&cha!='\n') break;  
  x=cha-48;  
  while(cha=getchar())   
    {  
     if(cha==' '||cha=='\n') break;  
      x=x*10+cha-48;  
    }  
    return x;  
}
