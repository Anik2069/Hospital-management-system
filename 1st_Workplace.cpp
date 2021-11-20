//Header Files
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<string.h>
//Function Declaration
int welcome_page(void);
int front_page();
int management_frontpage();
int Patient_frontpage();
int admin_log_in(void);
int registration(void);//not Done
int patient_log_in();//not Done
int title(void);
int admin_menu();//not Done
int doctor(void);//not Don
int list(void);//not Don
int staff(void);//not Don
int information(void);//not Don
int bill(void);//not Don
int info(void);//not Don
//Global Variables
int choice;
int i;
//ADMIN Password

//Main Function
int main()
{
    welcome_page();
    front_page();
}

int welcome_page(void)
{
        printf("\n\n\n\t\t\t*************************\t\t\t");
        printf("\n\t\t\t*Welcome To ABC Hospital*\t\t\t\n");
        printf("\t\t\t*************************\t\t\t\n\n");
        printf("\n\t\t\tpress enter to proceed!!\n");
        getch();
}
int front_page(void)
{
     system("cls");
     title();
     printf("\n\n\t\t\t1.Management\n");
     printf("\t\t\t2.Patient\n");
     printf("\t\t\t3.Doctor\n\n");
     printf("Enter Your Choice:\n");
     scanf("%d",&choice);

         switch(choice)
         {

         case 1:
             management_frontpage();
             i++;
             break;
         case 2:
             system("cls");
              title();
             Patient_frontpage();
            i++;
            break;
         case 3:
              system("cls");
              title();
              management_frontpage();
              i++;
             break;
         default:
            printf("Invalid Number");
            getch();
            front_page();
            break;


     }

}
int title(void)
{
  printf("\n\n\t\t\t\*************************\t\t\t");
  printf("\n\t\t\t**ABC General Hospital***\t\t\t");
  printf("\n\t\t\t*************************\t\t\t");
}
int management_frontpage(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t1.Log in");
    printf("\n\t\t\tPress 1 for Log in: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        admin_log_in();
    }
}
int Patient_frontpage(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t1.Log in");
    printf("\n\t\t\t2.Registration");
    printf("\nEnter Your Choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        patient_log_in();
        break;
    case 2:
        registration();
        break;
    default:
        printf("Invalid Choice");
        Patient_frontpage();
        break;

    }
}
int admin_log_in(void)
{

char name[20];
char password[100];
printf("\n\n\t\t\tUsername: ");
scanf("%s",name);
printf("\n\t\t\tPassword: ");
scanf("%s",password);
if (strcmp(name, "Anik") == 0 && strcmp(password, "2069") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else if(strcmp(name, "Shourav") == 0 && strcmp(password, "2071") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else
printf("The user name or password you entered is invalid.\n");
getch();
}
int patient_log_in()
{

}
int registration(void)
{

}
int admin_menu()
{
    system("cls");
    title();
    printf("\n\n\t\t\t1.Time schedule of doctor");
    printf("\n\t\t\t2.Doctor list");
    printf("\n\t\t\t3.Time schedule of staff");
    printf("\n\t\t\t4.Information");
    printf("\n\t\t\t5.Bill");
    printf("\n\t\t\t6.New doctor information");
    printf("\n\n\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {

    case 1:
    doctor();
    break;
    case 2:
    list();
    break;
    case 3:
    staff();
    break;
    case 4:
    information ();
    break;
    case 5:
    bill();
    break;
    case 6:
    info();
    break;
    default:
    printf("\n\n\n\t\t\tNo Match Found");

    getch();


         }

}
int doctor(void)
{

}int list(void)
{

}int staff(void)
{

}int bill(void)
{

}int information(void)
{

}int info(void)
{

}
