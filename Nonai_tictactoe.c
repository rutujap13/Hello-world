#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
     char turn = 'o',table[10];
     int i,j=0,index=0;

for(i =0;i<9;i++){
        table[i]='0';
    }
//printf("%s",table);

while(j<9){

printf("\nenter position of %c: from  0 to 8: ",turn);
//printf("%d ->",j);
scanf("%d",&i);


//printf("%c",table[i]);


if(table[i]!='x' && table[i]!='o')
{
    if(turn=='x')
    {
        table[i]='x';
        turn = 'o';
        index+=pow(3,8-i);
    }
    else
    {
        table[i]='o';
        turn = 'x';
        index+=2*pow(3,8-i);
            }
}
else if(table[i]=='x' || table[i]=='o')
{
    printf("occupied");
    continue;
}
j++;

}
printf("\n%s\n",table);
printf("Index: %d",index);
}

