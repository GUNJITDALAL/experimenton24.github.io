#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    
    int num;
    char name[15];
    //printf("Enter any number");
    //scanf("%d",&num);
    //printf("\nEnter your number=%d",num);
    //printf("\nEnter single character");
   // data=getche();
    //printf("\nYour character is =");
    //putch(data);
    printf("Enter your name:",name);
    gets(name);
    printf("\nYour name is =");
    puts(name);
    printf("Enter your name= ",name);
    scanf("%s ",name);
    printf("\nYour name is =%s ",name);


    return 0;
}
