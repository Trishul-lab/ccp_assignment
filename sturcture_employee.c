#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
struct employeedetails
{
    char  employeename[100];
    int    eno[12];
    float salary;
    char   gender[5];
    char    maritalstatus[12];
}emp;

    printf("EMPLOYEE NAME:\n");
    gets(emp.employeename);
    printf("GENDER:\n");
    scanf("%s",&emp.gender);
    printf("ENTER SALARY:\n");
    scanf("%f",&emp.salary);
    printf("MARITAL STATUS:\n");
    scanf("%s",&emp.maritalstatus);
    printf("EMPLOYEE NUMBER:\n");
    scanf("%s",&emp.eno);
    printf("\n");
    printf("YOUR FEEDED DATA");
    printf(" \nNAME:%s\t",emp.employeename);
    printf("\t\nSALARY:%f ",emp.salary);
    printf("\t\nGENDER: %s",emp.gender);
    printf("\t\nEMPLOYEE NO:%s",emp.eno);
    printf("\t\nMARITAL_STATUS:%s",emp.maritalstatus);
    printf("\n\n");
    return 0;
}
