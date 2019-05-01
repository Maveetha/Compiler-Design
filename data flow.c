
#include <stdio.h>
#include<string.h>

struct op
{
char l[20];
char r[20];
}
op[10], pr[10];

void main()
{
int a, i, k, j, n, z = 0, m, q,lineno=1;
char * p, * l;
char temp, t;
char * tem;char *match;

printf("enter no of values");
scanf("%d", & n);
for (i = 0; i < n; i++)
{
printf("\tleft\t");
scanf("%s",op[i].l);
printf("\tright:\t");
scanf("%s", op[i].r);
}
printf("intermediate Code\n");
for (i = 0; i < n; i++)
{   printf("Line No=%d\n",lineno);
printf("\t\t\t%s=", op[i].l);
printf("%s\n", op[i].r);lineno++;
}
printf("***Data Flow Analysis for the Above Code ***\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
match=strstr(op[j].r,op[i].l);
if(match)
{
printf("\n %s is live at  %s \n ", op[i].l,op[j].r);
}
}
}}

