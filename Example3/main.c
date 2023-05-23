#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    int roll_no;
    float marks;
    char name[80];

};

struct student s[100];
void Take_Input(FILE *);
void Display_details(FILE *);

int main()
{
    FILE *ft; int option;
    ft=fopen("D:/c program/opying.txt","a+");

    while(1)
    {
        printf("1.add student details\n");
        printf("2.display student details\n");
        printf("3.exit\n");
        printf("enter your option:");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
           Take_Input(ft);
                    break;
         case 2:Display_details(ft);
            break;
        case 3:exit(0);
               break;
       default:printf("sorry invalid options...");
        }
    }
    fclose(ft);

    return 0;
}

void Take_Input(FILE *fpp)
{
    printf("Enter The Name");
    scanf("%s",s->name);
    fprintf(fpp,"%s\t",s->name);
    printf("Enter The RollNo");
    scanf("%d",&s->roll_no);
    fprintf(fpp,"%d\t",s->roll_no);
    printf("Enter The Marks of Student");
    scanf("%f",&s->marks);
    fprintf(fpp,"%f\n",s->marks);


}

void Display_details(FILE *fpp)
{
    rewind(fpp);
    while(fscanf(fpp,"%s %d %f",s->name,&s->roll_no,&s->marks)!=EOF)
    {
        printf(" %s\t %d\t %f\n",s->name,s->roll_no,s->marks);
    }

}

