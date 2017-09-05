/*Given a string, S, of length N that is indexed from 0 to N-1, 
print its even-indexed and odd-indexed characters as 2 space-separated strings on a 
single line (see the Sample below for more detail).*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
    int i ,len;
    char str[10000],str1[10000]={0},str2[10000]={0};
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(i%2==0)
            str1[i/2] = str[i];
        else
            str2[(i-1)/2] = str[i];
    }
    printf("%s %s \n",str1,str2);

}
return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
