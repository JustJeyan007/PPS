//WAP to find the length of the string ( w/o str fn's )
//WAP to copy the string ( w/o str fn's )
//WAP to compare two strings ( w/o str fn's )
//WAP to concate two strings ( w/o str fn's )

#include <stdio.h>
#include <string.h>
char ch[50],ch1[50],ch2[50];
int len , len1 ;
void length()
{
    printf("Enter the string : ");
    scanf("%S",ch);
    len=strlen(ch);
    printf("The length of the string is: %d",len);
    for (int i = 0;ch[i]!='\0';i++)
    {
        len1++;
    }
    printf("The length of the string without fn use is: %d",len1);
    printf("\n")
}
void copy()
{
    printf("Enter the string : ");
    scanf("%S",ch);
    strcpy(ch1,ch);
    printf("\n")
    printf("%s",ch1);
    for (int i = 0;ch[i]!='\0';i++)
    {
        ch2[i]=ch[i];
        
    }
    
    printf("The copy of the string without fn use is: %s",ch2);
    printf("\n")
}
void comp()
{
    printf("Enter the first string : ");
    scanf("%S",ch);
    printf("\n")
    printf("Enter the second string : ");
    scanf("%S",ch1);
    printf("\n")
    printf("The given strings are same is considered : %d" ,strcmp(ch,ch1));
    for (int i = 0;ch[i]!='\0';i++)
    {
        if (ch[i]-ch1[i]==0)
        {
            printf("True");
        }
        else 
        {
            printf("False");
        }
        
    } 
}

void cont()
{
    printf("Enter the first string : ");
    scanf("%S",ch);
    printf("Enter the second string : ");
    scanf("%S",ch1);
    printf("The concatinated str is :%S ", strcat(ch,ch1));
    
}

void main()
{
    int ch;
    printf("1.Find Length \n ");
    printf("2.Make a copy \n ");
    printf("3.Compare the given strings \n ");
    printf("4.Concatinate the given strings \n ");
    printf("Enter your choice :  ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : 
            length()
            break;
        case 2 :
            copy();
            break;
        case 3 :
            comp();
            break;
        case 4 :
            cont();
            break;
        default :
            printf("You've entered the wong choice ");
    }
}







