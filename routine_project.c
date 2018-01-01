/*
                    Routine project by Rabbi
            only for CSE 2nd Semester ,11th batch :)
                        Hope you like it :)
*/



#include <stdio.h>
#include <string.h>
int main()
{
    char day[20];
    printf("\t\t\t====HABHIT-CSE====\n\t\t     Routine of 2nd Semester\n\n");
    printf("Enter a day name as Input. i,e : saturday,Sunday....\n");
    gets(day);
    //logical Part start from here.
    if(strcasecmp(day,"Saturday")==0)
    {
        printf("\n");
        printf("|     Time   |  Name of Sir | Subject name |\n|------------|--------------|--------------|\n");
        printf("|9:10-9:50   | Khayrul Sir  | Mathematics  |\n|------------|--------------|--------------|\n");
        printf("|9:50-10:30  | Suzan Sir    |Data structure|\n|------------|--------------|--------------|\n");
        printf("|10:50-11:30 |Snigdha Mam   | EEE          |\n|------------|--------------|--------------|\n");
        printf("|11:30-12:10 |Sudarsan Sir  |Discrete math |\n|------------|--------------|--------------|\n");

    }
    else if(strcasecmp(day,"Sunday")==0)
    {
        printf("\n");
        printf("|     Time   |  Name of Sir | Subject name |\n|------------|--------------|--------------|\n");
        printf("|9:10-9:50   | Snigdha Mam  |   EEE        |\n|------------|--------------|--------------|\n");
        printf("|9:50-10:30  | Sudarsan Sir | Discrete math|\n|------------|--------------|--------------|\n");
        printf("|10:50-11:30 | Mizanur Sir  | Statistics   |\n|------------|--------------|--------------|\n");
        printf("|11:30-12:10 | Khayrul Sir  | Mathematics  |\n|------------|--------------|--------------|\n");
    }
    else if(strcasecmp(day,"Monday")==0)
    {
        printf("\nWeekend Day\n");
    }
    else if(strcasecmp(day,"Tuesday")==0)
    {
        printf("\n");
        printf("|     Time   |  Name of Sir | Subject name |\n|------------|--------------|--------------|\n");
        printf("|9:10-9:50   | Sudarsan Sir | Discrete math|\n|------------|--------------|--------------|\n");
        printf("|9:50-10:30  | Mizanur Sir  | Statistics   |\n|------------|--------------|--------------|\n");
        printf("|10:50-11:30 | Suzan Sir    |Data structure|\n|------------|--------------|--------------|\n");
        printf("|11:30-12:10 | Snigdha Mam  |   EEE        |\n|------------|--------------|--------------|\n");
    }
    else if(strcasecmp(day,"Wednesday")==0)
    {
        printf("\n");
        printf("|     Time   |  Name of Sir | Subject name |\n|------------|--------------|--------------|\n");
        printf("|9:10-9:50   | Suzan Sir    |   Lab class  |\n|------------|--------------|--------------|\n");
        printf("|9:50-10:30  | Suzan Sir    |   Lab class  |\n|------------|--------------|--------------|\n");
        printf("|10:50-11:30 | Mizanur Sir  |   Statistics |\n|------------|--------------|--------------|\n");
        printf("|11:30-12:10 | khayrul Sir  |   Mathematics|\n|------------|--------------|--------------|\n");
    }
    else if(strcasecmp(day,"Thursday")==0)
    {
        printf("\nWeekend Day\n");
    }
    else if(strcasecmp(day,"Friday")==0)
    {
        printf("\nWeekend Day\n");
    }
    else {
        printf("Wrong data as input");
    }
    return 0;
}

