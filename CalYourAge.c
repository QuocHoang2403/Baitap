#include<stdio.h>
#include<stdint.h>


uint16_t currenYear = 2022 ;
uint8_t currenMonth = 10;


int condition (int day, int month, int year )
{
    
    if(day< 1 || day > 31){
        printf("ERROR!!! Day is not defined\n");
        return 0;
    }
    else if(month< 1 || month> 12 ){
        printf("ERROR!!! Month is not defined\n");
        return 0;
    }
    else if(year <1 || year > currenYear){
        printf("ERROR!!! Year is not defined\n");
        return 0;
    }
    if(month == 2){
        if(day< 1 || day > 29){
        printf("ERROR!!! Day is not defined\n");
        return 0;
        }
    }
}

void processing (int day, int month, int year)
{
    uint8_t age;
    age = currenYear - year;
    if(month > currenMonth){
        age = age -1;
    }
    printf("Your age is %d year old !!!\n", age);
}

int main (int argc, char const *argv[])
{
    int day, month, year ;


    do
    {
        printf("Please enter your day of birth: " );
        scanf("%d", &day);
        printf("Please enter your month of birth: " );
        scanf("%d", &month);
        printf("Please enter your year of birth: " );
        scanf("%d", &year);
    } while (condition(day, month,year)==0);

    processing(day,month,year);

    printf("Done\n");


    return 0;
}