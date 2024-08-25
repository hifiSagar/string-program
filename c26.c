#include<stdio.h>                /* string*/
int main(){
char name[10] ={'s','a','g','a','r','.','t', '\0'};
char name2 [10] = "hacker";
char name3 [10];
printf("%s \n", name);
puts(name2);

gets(name3);
puts(name3);
for ( int  i = 0; i < 4; i++)
{
             printf("%c \n", name[i]);
}

    return 0;
}