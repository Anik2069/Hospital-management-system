//Header Files

#define _WIN32_WINNT 0x0500

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
COORD Coordinate;
//Function Declaration
int welcome_page(void);
int front_page();
int management_frontpage();
int Patient_frontpage();
int admin_log_in(void);
int registration(void);//not Done
int patient_log_in();//not Done
int title(void);
int admin_menu();
int doctor(void);
int list(void);
int staff(void);//not Done
int information(void);//not Done
int bill(void);//not Done
int info(void);//not Done
int loading(void);
int category(void);
int cardiology(void);//not Done
int child(void);//done
int dental(void);//
int dermatology(void);//
int neuromedicine(void);//
int oncology(void);//
int orthopedics(void);//not done
int days(void);//done
int patient_menu(void);//done
int medicine_info(void);
int report(void);
int complain(void);
int service(void);
int cost(void);
int log_out(void);
int doc_log();
int doctormenu();
int time();
int serial();
int dp();
int checkdoctorreg();
int checkPateientreg();
int docstaff();
int ConsoleTitle(void);
int MaximizeOutputWindow(void);
int SetConsoleSize(void);
//Child Doctor
int doc_1(void);
int doc_2(void);
int doc_3(void);
int doc_4(void);
int doc_5(void);
int doc_6(void);
int doc_7(void);
int doc_8(void);
int doc_9(void);
int doc_10(void);

//
//Dental Doctor
int doc_21(void);
int doc_22(void);
int doc_23(void);
int doc_24(void);
int doc_25(void);
int doc_26(void);
int doc_27(void);
int doc_28(void);
int doc_29(void);
int doc_30(void);
/**/
//
//cartology
int doc_41();
int doc_42();
int doc_43();
int doc_44();
int doc_45();
int doc_46();
int doc_47();
int doc_48();
int doc_49();
int doc_50();
/**/
//oncology
int doc_61(void);
int doc_62(void);
int doc_63(void);
int doc_64(void);
int doc_65(void);
int doc_66(void);
int doc_67(void);
int doc_68(void);
int doc_69(void);
int doc_70(void);
/*
*/
//
//
//dematology
int doc_81(void);
int doc_82(void);
int doc_83(void);
int doc_84(void);
int doc_85(void);
int doc_86(void);
int doc_87(void);
int doc_88(void);
int doc_89(void);
int doc_90(void);
/**/
//
int doc_102();
int doc_103();
int doc_104();
int doc_105();
int doc_106();
int doc_107();
int doc_108();
int doc_109();
int doc_110();
int doc_111();
/**/
//Orthopedis
int doc_122();
int doc_123();
int doc_124();
int doc_125();
int doc_126();
int doc_127();
int doc_128();
int doc_129();
int doc_130();
/**/
//another Function
int satarday(void);
int sunday(void);
int monday(void);
int tuesday(void);
int wenesday(void);
int thursday(void);
int friday(void);

//Global Variables
int choice;
int i=0,c,de=0;
int rem=0,dc=0,pc=0,optioon=0;
int re=0;//optioon=0;
////file declration
FILE *fp,*fp1,*fp2;
/////
float total=0;
float total2=0;
float total3=0;
float total4=0;
float total5=0;
float total6=0;
float total7=0;
float total8=0;
float total9=0;
float total10=0;
float total11=0;
float total12=0;
float total13=0;
float total14=0;
float total15=0;
float total16=0;
float total17=0;
float total18=0;
float total19=0;
float total20=0;
int SetCursorPosition(int ,int );

char d[100];
int a1;
char ch;
int p=0;
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
//ADMIN Password
struct registration
{
    char name[30];
    char pass[30];
    char email[100];
    char address[50];
} cus[100],cust[100];

struct doctor_reg
{
    char dname[30];
    char dpass[30];
    char code[30];
}do1[100],do2[100];

//Main Function
int main()
{
    ConsoleTitle();
    MaximizeOutputWindow();
    SetConsoleSize();
    system("color 5B");
    loading();
    welcome_page();
    front_page();
}
int ConsoleTitle(void){ //Application title fixer

    SetConsoleTitle("1st_Workplace");

    return 0;

}
int MaximizeOutputWindow(void){ //Maximize console window

    HWND ConsoleWindow;

    ConsoleWindow = GetConsoleWindow();

    ShowWindow(ConsoleWindow, SW_MAXIMIZE);

    return 0;

}

int SetConsoleSize(void){ //Set custom console size

    system("mode CON: COLS=220");

    return 0;

}
int welcome_page(void)
{
        system("cls");
        printf("\n\n\n\t\t\t*************************\t\t\t");
        printf("\n\t\t\t*Welcome To ABC Hospital*\t\t\t\n");
        printf("\t\t\t*************************\t\t\t\n\n");
        printf("\n\t\t\tpress enter to proceed!!\n");
        getch();
}
int front_page(void)
{
     loading();
     system("cls");
     title();
     printf("\n\n\t\t\t1.Management\n");
     printf("\t\t\t2.Patient\n");
     printf("\t\t\t3.Doctor\n\n");
     printf("\n\t\t\tEnter Your Choice:");
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
             doc_log();
              i++;
             break;

         default:
            printf("Invalid Number");
            printf("\nPress Enter:");
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
        loading();
        system("cls");
        title();
        admin_log_in();

}
int Patient_frontpage(void)
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t   \xdb Patient Portal \xdb");
    printf("\n\t\t\t\=========================");
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
int i;
char name[20];
char password[30];
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Management Portal \xdb");
    printf("\n\t\t\t\=========================");
printf("\n\n\t\t\tUsername: ");
scanf("%s",name);
printf("\n\t\t\tPassword: ");
  while(1)
            {
                ch=getch();
                if(i==15)
                    break;
                if(ch==ENTER)
                {
                    password[i]='\0';
                    break;
                }
                else if(ch==BKSP)
                {
                    if(i>0)
                    {
                        i--;
                        printf("\b \b");
                    }
                }
                else if(ch==TAB || ch==SPACE)
                {
                    continue;
                }
                else
                {
                    password[i]=ch;
                    i++;
                    printf("*");
                }

            }

if (strcmp(name, "Anik") == 0 && strcmp(password, "2069") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else if(strcmp(name, "Showrov") == 0 && strcmp(password, "2071") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else if(strcmp(name, "Ashik") == 0 && strcmp(password, "2080") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else
{

printf("\n\n\t\t\tThe user name or password you entered is invalid.\n");
printf("\n\n\t\t\tDo you Exit It???");
printf("\n\t\t\tPress 1 to go back page");
printf("\n\t\t\t Or");
printf("\n\t\t\tPress 2 to Re-enter your password");
printf("\n\t\t\tEnter YOur choice:");
scanf("%d",&choice);
if (choice==1)
    front_page();
else if (choice==2)
    admin_log_in();
else
{

    printf("\n\t\t\tAgain Your choice is Invalid!!!!!!!");
getch();
}
}
}
int patient_log_in()
{
    loading();
    system("cls");
    title();

    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdbPatient Sign In \xdb");
    printf("\n\t\t\t\=========================");
        int i, rem=0, optioon=0;
        char ch;
        FILE *fp1,*fp2;
        fflush(stdin);
        char name1[30];
        char passw[30];
        printf("\n\n\t\t\tPatient Name: ");
        fgets(name1, 30, stdin);
        fflush(stdin);

        printf("\n\t\t\tPassword: ");
        //scanf("%30s",passw);
        fgets(passw, 30, stdin);
        fp1 = fopen("regis.bin","rb+");
        fread(&cust, sizeof(cust), 1, fp1);
        fclose(fp1);
        for(i=0;i<100;++i)
            {
            if ((0==strcmp(name1,cust[i].name)) && (0==strcmp(passw,cust[i].pass)))
                {
                printf("\nCorrect Name & Password");
                printf("\n");
                i=100;
                optioon=1;
                }

            }
            if(optioon==1)
            {
                system("pause");
                patient_menu();
                printf("\n");
                system("pause");
            }
            else
                {

    printf("\n\t\t\tWrong password");
    system("pause");
    printf("\n\n\t\t\tPress 1 for Registraton");
    printf("\n\t\t\tPress 2 for Log in again");
    printf("\n\t\t\tPress 3 for Back");
    printf("\n\n\t\t\tEnter Your Choicee:");
    fflush(stdin);
    scanf("%d",&choice);
    if(choice==1)
    {
        registration();
    }
    else if(choice==2)
    {
        system("cls");
        patient_log_in();
    }
    else
    {
        Patient_frontpage();
    }



                }
}






int registration(void)
{
    loading();
    system("cls");
    title();
printf("\n\n\t\t\t    \xdb Patient Sign Up\xdb\t\t\t");
printf("\n\t\t\t=========================");

    int i, rem=0, optioon;
     FILE *fp1,*fp2; //regis  ..........remember
     fp2=fopen("pnumber.bin","rb+");
         if (fp2==NULL)
            {
        fp2 = fopen("pnumber.bin","wb+");
        fwrite(&rem, sizeof(rem), 1, fp2);
        fclose(fp2);
    }
    fread(&rem, sizeof(rem), 1, fp2);
    fclose(fp2);



    fp1 = fopen("regis.bin","rb+");
    if (fp1==NULL){
        fp1 = fopen("regis.bin","wb+");
        fclose(fp1);
    }
    fread(&cus, sizeof(cus), 1, fp1);
    fclose(fp1);
    fflush(stdin);
            for(i=rem;i<rem+1;++i)
                {
            printf("\n\n\t\t\tPatient Name: ");
            fgets(cus[i].name, 30, stdin);
            printf("\n\t\t\tPatient Password: ");
            fgets(cus[i].pass, 30, stdin);
            printf("\n\t\t\tPatient Email:");
            fgets(cus[i].email, 30, stdin);
            printf("\n\t\t\tPatient Address:");
            fgets(cus[i].address, 30, stdin);
                }

    fp1 = fopen("regis.bin","wb+");
    fwrite(&cus, sizeof(cus), 1, fp1);
    fclose(fp1);
    fp2 = fopen("pnumber.bin","wb+");
    ++rem;
    fwrite(&rem, sizeof(rem), 1, fp2);
    fclose(fp2);
    pc=pc+1;
    printf("\n\t\t\tYour are successfully Registered");
    printf("\n\t\t\tPress 1 for Login");
     printf("\n\t\t\tPress 2 for Back");
      printf("\n\t\t\tEnter You choice");
      scanf("%d",&choice);
      if(choice==1)
      {
          patient_log_in();
      }
      else
    {
        front_page();
    }


}
int admin_menu()
{
    p=0;
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Management Menu \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\n\t\t\t1.Time schedule of doctor");
    printf("\n\t\t\t2.Doctor Details");
    printf("\n\t\t\t3.Time schedule of staff");
    printf("\n\t\t\t4.Check Payment History");
    printf("\n\t\t\t5.Bill");
    printf("\n\t\t\t6.Add doctor USer Name and password");
    printf("\n\t\t\t7.Check Registration of Doctor");
    printf("\n\t\t\t8.Check Registration of Patient");
    printf("\n\t\t\t9.Check Complan");
    printf("\n\n\t\t\t10. Log out");
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
    case 7:
    checkdoctorreg();
    break;
    case 8:
    checkPateientreg();
    break;
    case 9:
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Check Complain \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\n");
    c=0;
    fp=fopen("complan.txt","r");
    for(i=0;c!=EOF;++i)
    {
        c=getc(fp);
        printf("%c",c);
    }
    fclose(fp);
        break;
    case 10:
        printf("\n\t\t\t");
        system("pause");
        front_page();
    break;
    default:
    printf("\n\n\n\t\t\tNo Match Found");
    log_out();
    getch();
    break;

         }

   printf("\n\t\t\t");
   system("pause");
   admin_menu();
}
int doctor(void)
{
    loading();
    system("cls");
    title();
    days();
}
int list(void)
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Categories \xdb");
    printf("\n\t\t\t\=========================");



    printf("\n\n\t\t\t1.Cardiology Heart Specialist");
    printf("\n\t\t\t2.Child Specialist");
    printf("\n\t\t\t3.Dental Doctor");
    printf("\n\t\t\t4.Dermatology Specialist");
    printf("\n\t\t\t5.Neuromedicine Specialist");
    printf("\n\t\t\t6.Oncology Cancer Specialist");
    printf("\n\t\t\t7.Orthopedics Specialist ");
    printf("\n\t\t\tenter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      cardiology();
      break;
    case 2:
        child();
        break;
    case 3:
        dental();
        break;
    case 4:
        dermatology();
        break;
    case 5:
        neuromedicine();
        break;
    case 6:
        oncology();
        break;
    case 7:
        orthopedics();
        break;
    default:
        printf("\n\t\t\tNo match found");
 printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");
    printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        if(p==0)
        {

        admin_menu();

        }
        else
        {
            patient_menu();
        }
    }
    else
    {
        list();
    }
        break;

    }
}
int staff(void)
{
loading();
system("cls");
title();
 printf("\n\n\t\t\t1.Shift 1\n");
     printf("\t\t\t2.Shift 2\n");
     printf("\t\t\t3.Shift 3\n\n");
     printf("Enter Your Choice:\n");
     scanf("%d",&choice);

         switch(choice)
         {
         case 1:
             loading();
    system("cls");
    title();
             printf("\n==============================================================");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tTarek Ahmed\t\xDD\tCardiology\t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tSahadat Hossain\t\xDD\tCardiology\t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tEkram Hasan\t\xDD\tCardiology\t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tMahin Hasan\t\xDD\tCardiology\t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tSujon Ahmed\t\xDD\tCardiology\t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tSaif Uddin\t\xDD\tCardiology\t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n\t\t\tPress Enter For back");
        getch();
        staff();
    break;
         case 2:
             loading();
    system("cls");
    title();
               printf("\n==============================================================");
    printf("\n\xDD\tMs. Munni\t\xDD\t\tChild \t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tAfroja khatun\t\xDD\t\tChild \t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tSuchitra Ahmed\t\xDD\t\tChild \t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tChoitey Ahmed\t\xDD\t\tChild \t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tMithila Mou\t\xDD\t\tChild \t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tEmon Hasan\t\xDD\t\tChild \t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n\t\t\tPress Enter For back");
        getch();
        staff();
break;
         case 3:
             loading();
    system("cls");
    title();
             printf("\n==============================================================");
    printf("\n\xDD\tMahbub Hossain\t\xDD\toncology \t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tAkash Ahmed\t\xDD\toncology \t\xDD\9.00am-2.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tJahir Ahmed\t\xDD\toncology \t\xDD\9.00am-9.00pm\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tRaihan Hasan\t\xDD\toncology \t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tBijon Pal\t\xDD\toncology \t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
    printf("\n==============================================================");
    printf("\n\xDD\tBijon Pal\t\xDD\toncology \t\xDD\9.00pm-9.00am\xDD");
    printf("\n==============================================================");
     printf("\n\t\t\tPress Enter For back");
        getch();
        staff();
break;
         default:
             loading();
        printf("\n\n\t\t\tInVlid INput");
        printf("\n\t\t\tPress Enter For back");
        getch();
        admin_menu();
        break;


         }


}


int bill(void)
{
    loading();
    char pname[30],age[15],add[100],phn[11];


    int i=0;
    FILE *fp;
    float cash,re,due,final;
    system("cls");
    title();
    fflush(stdin);
    SetCursorPosition(20,8);
    printf("Patient Name:");
    gets(pname);

    fp=fopen("bill.txt","a");
    fprintf(fp,"\nPaitent Name:%s",pname);
    fclose(fp);

    SetCursorPosition(50,8);

    printf("Patient Age:");
    gets(age);
    SetCursorPosition(20,9);
    printf("Patient Address:");
    gets(add);
    SetCursorPosition(20,10);
    printf("Patient Phone Number:");
    gets(phn);

    printf("\n\t\t\t\tN.B:Press 1 for Bill End");
    SetCursorPosition(20, 14);
    printf("Object");
    printf("__________");
    printf("\n\n\n");
    SetCursorPosition(40, 14);
    printf("Quantity");
    printf("__________");
    printf("\n\n\n");
    SetCursorPosition(60, 14);
    printf("Amount");
    printf("__________");
    printf("\n\n\n");

    while(i<15)
    {
    SetCursorPosition(20, 15+i);
    gets(d);
    if (strcmp(d, "check up")==0)
    {        printf("\n");
        total=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
        total=(1000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total);
        i++;
    }
     else if(strcmp(d, "ct scan")==0)

    {

        total2=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total2=(10000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total2);
         i++;
    }
         else if(strcmp(d, "urine test")==0)

    {

        total3=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total3=(500*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total3);
         i++;
    }
         else if(strcmp(d, "ECG")==0)

    {

        total4=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total4=(1200*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total4);
         i++;
    }
         else if(strcmp(d, "MRI test")==0)

    {

        total5=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total5=(5000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total5);
         i++;
    }
         else if(strcmp(d, "blood test")==0)

    {

        total6=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total6=(200*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total6);
         i++;
    }
         else if(strcmp(d, "Ultrasonography")==0)

    {

        total7=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
        total7=(1000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total7);
         i++;
    }
         else if(strcmp(d, "General Surgery")==0)

    {

        total8=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total8=(24000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total8);
         i++;
    }
             else if(strcmp(d, "DNA test")==0)

    {

        total9=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total9=(2000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total9);
         i++;
    }
             else if(strcmp(d, " X-RAY test")==0)

    {

         total10=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total10=(1500*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total10);
         i++;
    }

             else if(strcmp(d, " IVF Procedure ")==0)

    {

         total11=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total11=(12000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total11);
         i++;
    }


             else if(strcmp(d, " ENT Surgery  ")==0)

    {

        total12=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total12=(14000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total12);
         i++;
    }

             else if(strcmp(d, "HURT SERGERY")==0)

    {

      total13=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total13=(52000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total13);
         i++;
    }

             else if(strcmp(d, "ORTHOPEDIC SERGERY")==0)

    {

        total14=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total14=(25000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total14);
         i++;
    }

             else if(strcmp(d, " CARDIOLOGY SERGERY")==0)

    {

         total15=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total15=(30000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total15);
         i++;
    }

    else if(strcmp(d,"Addmission charge")==0)
        {

         total16=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total16=(10000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total16);
         i++;
    }
    else if(strcmp(d,"Bed Cost")==0)
        {

         total17=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total17=(12000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total17);
         i++;
    }
        else if(strcmp(d,"Normal Delivery")==0)
        {

         total18=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total18=(22000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total18);
         i++;
    }
            else if(strcmp(d,"ICU")==0)
        {

         total19=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total19=(22000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total19);
         i++;
    }
            else if(strcmp(d,"NICU")==0)
        {

         total20=0;
        SetCursorPosition(40, 15+i);
        scanf("%d",&a1);
         total20=(22000*a1);
        SetCursorPosition(60, 15+i);
        printf("%f",total20);
         i++;
    }
    else if(strcmp(d, "1")==0)
    {

       i=15;


    }

}
      float bill;
       //
        bill=total+total2+total3+total4+total5+total6+total7+total8+total9+total10+total11+total12+total13+total14+total15+total16+total17+total18+total19+total20;

        SetCursorPosition(20, 10+i);
        printf("____________________________________________________________");
        SetCursorPosition(60, 11+i);
        printf("TOTal=%f",bill);
            fp=fopen("bill.txt","a");
            fprintf(fp,"\nTotal Bill is:%f",bill);
            fclose(fp);
        bill:
        SetCursorPosition(60, 12+i);
        printf("Cash =");
        scanf("%f",&cash);
        if (cash>=bill)
        {
            final=0;
          final=cash-bill;
          SetCursorPosition(20, 13+i);
          printf("____________________________________________________________");
          SetCursorPosition(60, 14+i);
          printf("Return=%f",final);
        }
        else
        {
            final=bill-cash;
          SetCursorPosition(20, 13+i);
          printf("____________________________________________________________");
          SetCursorPosition(60, 14+i);
          printf("Due=%f",final);
          printf("\nPlease Complete the Due :)");
          i=i+5;
          bill=final;
          goto bill;
        }

printf("\n\t\tPress 1 for Print the Bill:");
scanf("%d",&choice);
if(choice==1)
{

    loading();
    system("cls");
    title();
        char a[]="YouR Bill Iss Printing.......\n\t\t\t\tPLease wait.............";
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\xdb\xdb");
    for(i=0;a[i]!='\0';i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }

    printf("\n\n\t\tYour Bill Is Successfully Print Out");
    printf("\n");
    system("pause");
    admin_menu();
}







}

int information(void)
{
    loading();
    system("cls");
    title();
    printf("\n");
    printf("\n\t\t\t#####PAYMENT HISTORY####");
    printf("\n");
    c=0;
    fp=fopen("bill.txt","r");
      for(i=0;c!=EOF;++i)
        {
        c = getc(fp);
        printf("%c", c);
    }
    fclose(fp);
    printf("\n\n\n\t\t\tPress 1 for Back ");
    printf("\n\t\tPress 1:");
    scanf("%d",&choice);
    if(choice==1)
    {

        admin_menu();
    }

}
int info(void)
{
char z[100];
fflush(stdin);
printf("\n\t\t\tEnter Your Password:");
gets(z);
if(strcmp(z,"founder")==0)
{

    system("cls");
    title();
    printf("\n");
    printf("\n\t\t #####DocTor RegisTration######");
    printf("\n\n\t\t\tN.B: Special Code:");
    printf("\n\t\t\tChild(1-10)\t\tDental(21-30)");
     printf("\n\t\t\tCardiology(41-50)\t\tOnclogy(61-70)");
      printf("\n\t\t\tDematology(81-90)\t\tMedicine(101-110)");
       printf("\n\t\t\t\t\Orthopedis(121-130)");

    int i, re=0, optioon;
     FILE *fp1,*fp2; //regis  ..........remember
     fp2=fopen("doc_rem.bin","rb+");
         if (fp2==NULL)
            {
        fp2 = fopen("doc_rem.bin","wb+");
        fwrite(&re, sizeof(re), 1, fp2);
        fclose(fp2);
    }
    fread(&re, sizeof(re), 1, fp2);
    fclose(fp2);



    fp1 = fopen("doc_reg.bin","rb+");
    if (fp1==NULL){
        fp1 = fopen("doc_reg.bin","wb+");
        fclose(fp1);
    }
    fread(&do1, sizeof(do1), 1, fp1);
    fclose(fp1);
    fflush(stdin);
            for(i=re;i<re+1;++i)
                {
            printf("Name: ");
            fgets(do1[i].dname, 30, stdin);
            printf("Pass: ");
            fgets(do1[i].dpass, 30, stdin);
            printf("Special Code:");
            fgets(do1[i].code, 30, stdin);
                }

    fp1 = fopen("doc_reg.bin","wb+");
    fwrite(&do1, sizeof(do1), 1, fp1);
    fclose(fp1);
    fp2 = fopen("doc_rem.bin","wb+");
    ++re;
    fwrite(&re, sizeof(re), 1, fp2);
    fclose(fp2);
    dc=dc+1;
}
else
    {
        printf("\n\n\t\t\tYour are not perfect for this");
    }
system("pause");
admin_menu();
}
int loading()
{
    char a[]="Loading.......";
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\xdb\xdb");
    for(i=0;a[i]!='\0';i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
}
int cardiology(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t==============Cardilogist========================");
    printf("\n\n\n\t\t\t1.Professor Dr. Abdullah-Al-Safi Majumder ");
    printf("\n\t\t\t2.Professor (Dr.) Mohammad Safiuddin ");
    printf("\n\t\t\t3.Dr. H. I. Lutfor Rahman Khan");
    printf("\n\t\t\t4.Professor Dr. Md. Afjalur Rahman");
    printf("\n\t\t\t5.Professor Dr. AbduzZaher");
    printf("\n\t\t\t6.Professor Dr. Abu Zafar");
    printf("\n\t\t\t7.Professor HasinaBanoo");
    printf("\n\t\t\t8.Professor Dr. K.M.H.S. SirajulHaque");
    printf("\n\t\t\t9.Professor Dr. Munshi Md. Mujibur Rahman");
    printf("\n\t\t\t10.Professor Dr. Momenuzzaman");

    printf("\n\n\t\t\tEnter Your Choice:");
    scanf("%d",&choice);
     switch (choice)
    {
    case 1:
        doc_41();
        break;
        case 2:
        doc_42();
        break;
        case 3:
        doc_43();
        break;
        case 4:
        doc_44();
        break;
        case 5:
        doc_45();
        break;
        case 6:
        doc_46();
        break;
        case 7:
        doc_47();
        break;
        case 8:
        doc_48();
        break;
        case 9:
        doc_49();
        break;
        case 10:
        doc_50();
        break;

        default:
        printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");
    printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
    {
        cardiology();
    }
        break;
}


}
int child(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t=============Child specialist================*");
    printf("\n\n\n\t\t\t1.Dr. Rezoana Rima");
    printf("\n\t\t\t2.Dr. S.K.A. Razzaque");
    printf("\n\t\t\t3.Dr. Kazi Abul Hasan");
    printf("\n\t\t\t4.Dr. Md. Al - Amin  Mridha");
    printf("\n\t\t\t5.Dr. Md. Aminul  Ehsan");
    printf("\n\t\t\t6.Professor Dr. Afiqul Islam");
    printf("\n\t\t\t7.Professor Dr. Md. Abid Hossain Mollah");
    printf("\n\t\t\t8.Professor Dr. Selim Shakur");
    printf("\n\t\t\t9.Dr. Syed  Khairul  Amin");
    printf("\n\t\t\t10.Professor Dr. Mohammed  Istiaque  Hossain");

    printf("\n\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        doc_1();
        break;
        case 2:
        doc_2();
        break;
        case 3:
        doc_3();
        break;
        case 4:
        doc_4();
        break;
        case 5:
        doc_5();
        break;
        case 6:
        doc_6();
        break;
        case 7:
        doc_7();
        break;
        case 8:
        doc_8();
        break;
        case 9:
        doc_9();
        break;
        case 10:
        doc_10();
        break;

        default:
        printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");

    printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
    {
    child();
    }
    break;
}
}
int dental(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t==========Dental specialist==============");
    printf("\n\n\n\t\t\t1.DR. Abdullah khan");
    printf("\n\t\t\t2.Dr.M.A. Shikder");
    printf("\n\t\t\t3.Professor Dr. Md. ShamsulAlam");
    printf("\n\t\t\t4.Professor Dr. Khandaker Abdul Azim");
    printf("\n\t\t\t5.Dr. Mohammed ShafiUllah");
    printf("\n\t\t\t6.Dr. Nurul Amin");
    printf("\n\t\t\t7.Dr. Salahuddin (Swapon)");
    printf("\n\t\t\t8.Dr. Debashis Dey");
    printf("\n\t\t\t9.Dr. Mohammad ShafiUllah");
    printf("\n\t\t\t10.Dr. Syed T. Ahsan Ratan");

    printf("\n\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        doc_21();
        break;
        case 2:
        doc_22();
        break;
        case 3:
        doc_23();
        break;
        case 4:
        doc_24();
        break;
        case 5:
        doc_25();
        break;
        case 6:
        doc_26();
        break;
        case 7:
        doc_27();
        break;
        case 8:
        doc_28();
        break;
        case 9:
        doc_29();
        break;
        case 10:
        doc_30();
        break;

        default:
        printf("\n\n\n\t\tYou entered the wrong number!!!!....");
    printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
    {
    dental();
    }
    break;

    }
}
int dermatology(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t==========Dematology Specialist============");
    printf("\n\n\n\t\t\t1.Dr. A.S. Mofrehuddin Ahmed");
    printf("\n\t\t\t2.Dr. A.S.M. Zakariya");
    printf("\n\t\t\t3.Dr. Abida Sultana");
    printf("\n\t\t\t4.Dr. Ahammad Ali");
    printf("\n\t\t\t5.Dr. Anisur Rahman");
    printf("\n\t\t\t6.Dr. AtiyaAnjum");
    printf("\n\t\t\t7.Dr. Brg.Gen. J.B.M. Zafar Sadeque(Rtd)");
    printf("\n\t\t\t8.Dr. Chowdhury Mohammad Ali");
    printf("\n\t\t\t9.Dr. Col. Habib Rahmatullah");
    printf("\n\t\t\t10.Dr. Didarul Ahsan");

    printf("\n");
    printf("\n\n\t\t\tEnter Your Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        doc_81();
        break;
        case 2:
        doc_82();
        break;
        case 3:
        doc_83();
        break;
        case 4:
        doc_84();
        break;
        case 5:
        doc_85();
        break;
        case 6:
        doc_86();
        break;
        case 7:
        doc_87();
        break;
        case 8:
        doc_88();
        break;
        case 9:
        doc_89();
        break;
        case 10:
        doc_90();
        break;

        default:
        printf("\n\n\n\t\tYou entered the wrong number!!!!....");
    printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
    {
    dermatology();
    }
    break;

    }


}
int neuromedicine(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t===========Neuromdeicine Specialists========");
    printf("\n\n\n\t\t\t1.Professor Dr. Mansur Habib");
    printf("\n\t\t\t2.Professor Dr. QuaziDeen Mohammad");
    printf("\n\t\t\t3.Professor Dr. Md. Abdul Hai");
    printf("\n\t\t\t4.Prof. Dr. Md. Abdul Hayee");
    printf("\n\t\t\t5.Professor Dr. M. A. Mannan");
    printf("\n\t\t\t6.Professor Dr. Md. AmirulHaque");
    printf("\n\t\t\t7.Professor Dr. Md. Ashraf Ali");
    printf("\n\t\t\t8.Professor Dr. (Major Retd.) Md. Mahbubur Rahman");
    printf("\n\t\t\t9.Professor Dr. SirajulHaque");
    printf("\n\t\t\t10.Professor Dr. Syed Wahidur Rahman");

    printf("\n\n\t\t\tEnter Your Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        doc_102();
        break;
        case 2:
        doc_103();
        break;
        case 3:
        doc_104();
        break;
        case 4:
        doc_105();
        break;
        case 5:
        doc_106();
        break;
        case 6:
        doc_107();
        break;
        case 7:
        doc_108();
        break;
        case 8:
        doc_109();
        break;
        case 9:
        doc_110();
        break;
        case 10:
         doc_111();
        break;

        default:
        printf("\n\n\n\t\tYou entered the wrong number!!!!....");
         printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
        neuromedicine();

    }
}
int oncology(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t===========Oncology Cancer specialist=============");
    printf("\n\n\n\t\t\t\t1.Prof. Dr. Sarwar Alam");
    printf("\n\t\t\t2.Professor Dr. Lt. Col. Md. Mofazzel  Hossain");
    printf("\n\t\t\t3.Professor  Dr. Parveen  Shahida  Akhter");
    printf("\n\t\t\t4.Professor Dr. A.B.M.F. Karim");
    printf("\n\t\t\t5.Professor (Dr). Saumen Basu");
    printf("\n\t\t\t6.Prof. Dr. Syed Md. Akram  Hossain");
    printf("\n\t\t\t7.Dr. Zafor Md. Masud");
    printf("\n\t\t\t8.Dr. Masuda  Begum");
    printf("\n\t\t\t9.Dr. M A Hashem");
    printf("\n\t\t\t10.Dr. A K M Hamidur  Rahman");

    printf("\n\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        doc_61();
        break;
        case 2:
        doc_62();
        break;
        case 3:
        doc_63();
        break;
        case 4:
        doc_64();
        break;
        case 5:
        doc_65();
        break;
        case 6:
        doc_66();
        break;
        case 7:
        doc_67();
        break;
        case 8:
        doc_68();
        break;
        case 9:
        doc_69();
        break;
        case 10:
        doc_70();
        break;

        default:
        printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");
         printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
        oncology();

    }

}
int orthopedics(void)
{
    system("cls");
    title();
    printf("\n\n\t\t\t========Orthopedics Specialist==========");
printf("\n\n\t\t\t1.Dr. Amit Kapoor");
printf("\n\t\t\t2.Dr. Abu Jafar Chowdhury");
printf("\n\t\t\t3.Professor Dr. Kh. Abdul Awal");
printf("\n\t\t\t4.Professor Dr. M. Hafizur Rahman");
printf("\n\t\t\t5.Professor M. K. I. Qayyum Chowdhury");
printf("\n\t\t\t6.Prof. Dr. Md. Siraj-Ul-Islam");
printf("\n\t\t\t7.Professor Dr. QaziShahidulAlam");
printf("\n\t\t\t8.Brig Gen Professor Dr. A K M Masud");
printf("\n\t\t\t9.Professor Dr. A.K.M. AkterMurshed");
printf("\n\t\t\t10.Dr. ShyamalDebnath");

   printf("\n\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        doc_122();
        break;
        case 2:
        doc_123();
        break;
        case 3:
        doc_124();
        break;
        case 4:
        doc_125();
        break;
        case 5:
        doc_126();
        break;
        case 6:
        doc_127();
        break;
        case 7:
        doc_128();
        break;
        case 8:
        doc_129();
        break;
        case 9:
        doc_130();
        break;
       // case 10:
        //doc_131();
       // break;

        default:
        printf("\n\n\t\t\t\tYou entered the wrong number!!!!....");
         printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
        orthopedics();

    }
}
int category()
{



        loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Categories \xdb");
    printf("\n\t\t\t\=========================");



    printf("\n\n\t\t\t1.Cardiology Heart Specialist");
    printf("\n\t\t\t2.Child Specialist");
    printf("\n\t\t\t3.Dental Doctor");
    printf("\n\t\t\t4.Dermatology Specialist");
    printf("\n\t\t\t5.Neuromedicine Specialist");
    printf("\n\t\t\t6.Oncology Cancer Specialist");
    printf("\n\t\t\t7.Orthopedics Specialist ");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      cardiology();
      break;
    case 2:
        child();
        break;
    case 3:
        dental();
        break;
    case 4:
        dermatology();
        break;
    case 5:
        neuromedicine();
        break;
    case 6:
        oncology();
        break;
    case 7:
        orthopedics();
        break;
    default:
        printf("\n\t\t\tno match found");
        break;

    }
}
int days()
{
    system("cls");
    title();
    printf("\n\n\t\t=====\xdbTime Schedule of Doctor\xdb=======");
    printf("\n\n\n\t\t1.Satarday");
    printf("\n\n\n\t\t2.Sunday");
    printf("\n\n\n\t\t3.Monday");
    printf("\n\n\n\t\t4.Tuesday");
    printf("\n\n\n\t\t5.Wenesday");
    printf("\n\n\n\t\t6.Thursday");
    printf("\n\n\n\t\t7.Friday");

    printf("\n\n\n\t\tEnter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
      satarday();
      break;
    case 2:
        sunday();
        break;
    case 3:
        monday();
        break;
    case 4:
        tuesday();
        break;
    case 5:
        wenesday();
        break;
    case 6:
        thursday();
        break;
    case 7:
        friday();
        break;
    default:
        printf("\n\t\t\tNo match found");
             printf("\n\n\n\t\t\tPress Enter to BAck Page");
             getch();
             if(p==1)
             {
                 patient_menu();
             }
             admin_menu();
             break;


}
}
//
//
//
int satarday(void)
{
    system("cls");
    title();
    printf("\n\n");
    printf("\n=============================================================================");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tRoom NO\t\xDD\tTime \xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Abdullah-Al-Safi\t\xDD\tCardiology\t\xDD\t502MB\t\xDD 1.00-3.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mohammad Safiuddin\xDD\tCardiology\t\xDD\t309MB\t\xDD 2.00-4.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Amit Kapoor\t\xDD\tOrthopedics\t\xDD\t205MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Abu Jafar Chowdury\xDD\tOrthopedics\t\xDD\t209MB\t\xDD 3.00-7.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Sarwar Alam\t\xDD\tOncology\t\xDD\t404MB\t\xDD 1.00-5.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mofazzel  Hossain\t\xDD\tOncology\t\xDD\t303MB\t\xDD 9.00-3.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mansur Habib\t\xDD\tMedicine\t\xDD\t201MB\t\xDD 11.00-1.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. QuaziDeen Mohammad\xDD\tMedicine\t\xDD\t407MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD\ DR. Abdullah khan\t\xDD\tDental\t\t\xDD\t307MB\t\xDD\ 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr.M.A. Shikder\t\xDD\tDental\t\t\xDD\t307MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Rezoana Rima\t\xDD\tChildren\t\xDD\t505MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Kazi Abul Hasan\t\xDD\tChildren\t\xDD\t505MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Mofrehuddin Ahmed\t\xDD\tDermatology\t\xDD\t301MB\t\xDD 9.00-1.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}
int sunday(void)
{
    system("cls");
    title();
printf("\n=============================================================================");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tRoom NO\t\xDD\tTime \xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. M. Hafizur Rahman\t\xDD\tCardiology\t\xDD\t502MB\t\xDD 1.00-3.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Kh. Abdul Awal\t\xDD\tCardiology\t\xDD\t309MB\t\xDD 2.00-4.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Amit Kapoor\t\xDD\tOrthopedics\t\xDD\t205MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. M A Hashem\t\xDD\tOrthopedics\t\xDD\t209MB\t\xDD 3.00-7.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Masuda  Begum\t\xDD\tOncology\t\xDD\t404MB\t\xDD 1.00-5.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mofazzel  Hossain\t\xDD\tOncology\t\xDD\t303MB\t\xDD 9.00-3.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. Md. Abdul Hayee\t\xDD\tMedicine\t\xDD\t201MB\t\xDD 11.00-1.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. Md. Abdul Hai\t\xDD\tMedicine\t\xDD\t407MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD\ Dr. Debashis Dey\t\xDD\tDental\t\t\xDD\t307MB\t\xDD\ 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Nurul Amin\t\xDD\tDental\t\t\xDD\t307MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Afiqul Islam\t\xDD\tChildren\t\xDD\t505MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Md. Aminul  Ehsan\t\xDD\tChildren\t\xDD\t505MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Zakariya\t\t\xDD\tDermatology\t\xDD\t301MB\t\xDD 9.00-1.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();
}
int monday(void)
{
    system("cls");
    title();
    printf("\n=============================================================================");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tRoom NO\t\xDD\tTime \xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD  Dr. AbduzZaher\t\xDD\tCardiology\t\xDD\t502MB\t\xDD 1.00-3.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Kh. Abdul Awal\t\xDD\tCardiology\t\xDD\t309MB\t\xDD 2.00-4.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. QaziShahidulAlam\t\xDD\tOrthopedics\t\xDD\t205MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. M A Hashem\t\xDD\tOrthopedics\t\xDD\t209MB\t\xDD 3.00-7.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Lutfun Naher\t\xDD\tOncology\t\xDD\t404MB\t\xDD 1.00-5.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mofazzel  Hossain\t\xDD\tOncology\t\xDD\t303MB\t\xDD 9.00-3.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. Md. Abdul Hayee\t\xDD\tMedicine\t\xDD\t201MB\t\xDD 11.00-1.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. M. A. Mannan\t\xDD\tMedicine\t\xDD\t407MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD\ Dr. Clopa Pina Podder\t\xDD\tDental\t\t\xDD\t307MB\t\xDD\ 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Nurul Amin\t\xDD\tDental\t\t\xDD\t307MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Afiqul Islam\t\xDD\tChildren\t\xDD\t505MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Md. Aminul  Ehsan\t\xDD\tChildren\t\xDD\t505MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Zakariya\t\t\xDD\tDermatology\t\xDD\t301MB\t\xDD 9.00-1.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();
}
int tuesday(void)
{
    system("cls");
    title();
    printf("\n=============================================================================");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tRoom NO\t\xDD\tTime \xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Momenuzzaman\t\xDD\tCardiology\t\xDD\t502MB\t\xDD 1.00-3.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Sufia Rahman\t\xDD\tCardiology\t\xDD\t309MB\t\xDD 2.00-4.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. A.K.M. AkterMurshed\xDD\tOrthopedics\t\xDD\t205MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. M A Hashem\t\xDD\tOrthopedics\t\xDD\t209MB\t\xDD 3.00-7.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Md. Ehteshamul Huq\xDD\tOncology\t\xDD\t404MB\t\xDD 1.00-5.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mofazzel  Hossain\t\xDD\tOncology\t\xDD\t303MB\t\xDD 9.00-3.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. Md. AmirulHaque\t\xDD\tMedicine\t\xDD\t201MB\t\xDD 11.00-1.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. M. A. Mannan\t\xDD\tMedicine\t\xDD\t407MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD\ Dr. BarkatUllah\t\xDD\tDental\t\t\xDD\t307MB\t\xDD\ 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Mehedi Amin\t\xDD\tDental\t\t\xDD\t307MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Syed  Khairul  Amin\xDD\tChildren\t\xDD\t505MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Selim Shakur\t\xDD\tChildren\t\xDD\t505MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. Zakariya\t\t\xDD\tDermatology\t\xDD\t301MB\t\xDD 9.00-1.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n\n\n\t\t\tPress Enter To Go Menu:");

 getch();
    days();
}
int wenesday(void)
{
        printf("\n=============================================================================");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tRoom NO\t\xDD\tTime \xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Sufia Rahman\t\xDD\tCardiology\t\xDD\t502MB\t\xDD 1.00-3.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. SayedAzizulHaque  \xDD\tCardiology\t\xDD\t309MB\t\xDD 2.00-4.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. SarwarIbne Salam\t\xDD\tOrthopedics\t\xDD\t205MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Jahangir Alam\t\xDD\tOrthopedics\t\xDD\t209MB\t\xDD 3.00-7.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. NaheedRukhsana\t\xDD\tOncology\t\xDD\t404MB\t\xDD 1.00-5.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Md. EhteshamulHuq\t\xDD\tOncology\t\xDD\t303MB\t\xDD 9.00-3.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. Kamal Sayed Chowdhury\xDD\tMedicine\t\xDD\t201MB\t\xDD 11.00-1.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. A.K.M. Rafique Uddin \xDD\tMedicine\t\xDD\t407MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD\ Dr. BarkatUllah \t\xDD\tDental\t\t\xDD\t307MB\t\xDD\ 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. KamrulHasan \t\xDD\tDental\t\t\xDD\t307MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD  Dr. GolamMainuddin\t\xDD\tChildren\t\xDD\t505MB\t\xDD 9.00-11.00am\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr. M. A. Jaigirdar\t\xDD\tChildren\t\xDD\t505MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=============================================================================");
        printf("\n=============================================================================");
    printf("\n\xDD Dr.Habib Rahmatullah\t\xDD\tDermatology\t\xDD\t301MB\t\xDD 9.00-1.00pm\xDD");
    printf("\n=============================================================================");

    printf("\n=============================================================================");
    printf("\n\xDD Dr. H.M. Ferdushi \t\xDD\tDental\t\xDD\t502MB\t\xDD 10.00-1.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. M. Shajib Amin \t\xDD\tDental\t\xDD\t502MB\t\xDD 1.00-3.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=====================================================================================");
    printf("\n\xDD Dr. Md. Abul Ahsan \t\xDD\tOncology\t\xDD\t502MB\t\xDD 5.00-8.00pm\xDD");
    printf("\n=====================================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Dr. Lutfun Naher \t\xDD\tOncology\t\xDD\t502MB\t\xDD 7.00-10.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n=======================================================================================");
    printf("\n\xDD Professor Dr.Kashem Sarkar\t\xDD\tChild\t\xDD\t502MB\t\xDD 11.00-3.00pm\xDD");
    printf("\n=======================================================================================");
    printf("\n=============================================================================");
    printf("\n\xDD Professor Dr. Mohammad Hanif\t\xDD\tChild\t\xDD\t502MB\t\xDD 9.00-2.00pm\xDD");
    printf("\n=============================================================================");
    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
     getch();
    days();
}
int thursday(void)
{
 getch();
    days();
}
int friday(void)
{
 getch();
    days();
}
//
//
//
//
//
//
//Child Function

//done
int doc_1(void)

{
    loading();
    system("cls");
    title();

        int a=0;
    char pname[100];
    char pphn[15];
    c=0;

    fp=fopen("doc_1.txt","w");
    fprintf(fp,"\n\n\nDr. Rezoana Rima\n");
    fprintf(fp,"Qualification : MBBS, FCPS ( Pediatric )\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Pediatric Cardiac Surgeon\n");
    fprintf(fp,"Organization: United Hospital Limited , ABC General Hospital\n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: Plot # 15, Road # 71, Gulshan - 2, Dhaka - 1212, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8836000, 8836444\n");
    fclose(fp);
    fp=fopen("doc_1.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc1s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc1s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app1.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc1s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }


}
int doc_2(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_2.txt","w");
    fprintf(fp,"Dr. S.K.A. Razzaque\n");
    fprintf(fp,"Qualification : MBBS, FCPS\n");
    fprintf(fp,"Designation : Associate Professor & Head of Department of Pediatric Cardiology\n");
    fprintf(fp,"Expertise : Pediatric Cardiac Surgeon\n");
    fprintf(fp,"Organization: National Institute of Cardiovascular Diseases (NICVD) , ABC General Hospital\n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("doc_2.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc2s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc2s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app2.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc2s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
int doc_3(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_3.txt","w");
    fprintf(fp,"\nDr. Kazi Abul Hasan");
    fprintf(fp,"\nQualification : MBBS, MS\n");
    fprintf(fp,"Designation : Assistant Professor\n");
    fprintf(fp,"Expertise : Pediatric Cardiac Surgeon\n");
    fprintf(fp,"Organization: National Institute of Cardiovascular Diseases (NICVD) , ABC General Hospital\n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: 150, RokeyaSaraniPorbataMirpur - 10, Dhaka - 1216, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-9008181, 9006820, 8058782, 8053481\n");
    fclose(fp);
        fp=fopen("doc_3.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
fclose(fp);


    if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc3s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc3s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app3.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc3s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }
     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
int doc_4(void)

{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_4.txt","w");
    fprintf(fp,"Dr. Md. Al - Amin  Mridha\n");
    fprintf(fp,"Qualification : MBBS, MCPS, FCPS, MD(Child)\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Child - Pediatric\n");
    fprintf(fp,"Organization: Popular Diagnostic Center Ltd.- Shymoli Branch , ABC General Hospital \n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: Hous# (22/7)29, BirUttam  A.N.M  NuruzzamanSorak, (Babor road) Block# b,Mohammadpur, DHaka-1207, Bangladesh\n");
    fprintf(fp,"Phone: +880-2- 9111911");
    fclose(fp);
        fp=fopen("doc_4.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
   fclose(fp);


       if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc4s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc4s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app4.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc4s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

    printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }

}
int doc_5(void)

{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_5.txt","w");
    fprintf(fp,"Dr. Md. Aminul  Ehsan\n");
    fprintf(fp,"Qualification : MBBS, DCH\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Child - Pediatric\n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: Block - B, 22/12 Khilji Road, Mohammadpur, Dhaka - 1207, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-9101641, 8123865\n");
    fclose(fp);
        fp=fopen("doc_5.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
 fclose(fp);


     if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc5s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc5s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app5.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc5s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



    printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
int doc_6(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_6.txt","w");
    fprintf(fp,"Professor Dr. Afiqul Islam\n");
    fprintf(fp,"Qualification : MBBS, FCPS, MD\n");
    fprintf(fp,"Designation : Professor\n");
    fprintf(fp,"Expertise : Child - Pediatric\n");
    fprintf(fp,"Organization: Bangabandhu Sheikh Mujib Medical University ( BSMMU ), ABC General Hospital\n");
    fprintf(fp,"Chamber: ABC General Hospital \n");
    fprintf(fp,"Location: House # 13/A, Road # 35, Gulshan # 2, Dhaka-1212\n");
    fprintf(fp,"Phone: +880-2-8835981-4, 8858943, 8835966, +880 152463101");
    fclose(fp);
        fp=fopen("doc_6.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc6s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc6s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app6.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc6s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
int doc_7(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_7.txt","w");
    fprintf(fp,"Professor Dr. Md. Abid Hossain Mollah\n");
    fprintf(fp,"Qualification : MBBS, FCPS ( Pediatrics ), Dip Med Ed ( Uk )\n");
    fprintf(fp,"FACP ( USA ), FRCP ( Edin, Uk )\n");
    fprintf(fp,"Designation : Professor, Department of Pediatrics\n");
    fprintf(fp,"Expertise : Child - Pediatric\n");
    fprintf(fp,"Organization: Dhaka Medical College , ABC General Hospital\n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: 2nd Floor, Moghbazar, Dhaka - 1217. Bangladesh\n");
    fprintf(fp,"Phone: + 880-2-8322691");
     fclose(fp);
         fp=fopen("doc_7.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

   fclose(fp);


       if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc7s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc7s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app7.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc7s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }






     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
int doc_8(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_8.txt","w");
    fprintf(fp,"Professor Dr. Selim Shakur\n");
    fprintf(fp,"Qualification : MBBS, FRCPCH ( UK ) , FRCP ( London ) , FRCP ( Edin ) ,FRCP ( Glasgow ) , MRCP ( UK ) , DCH ( Glasgow ) , DCH ( Edin )\n");
    fprintf(fp,"Designation : Consultant & Head of Department of Pediatrics\n");
    fprintf(fp,"Expertise : Child - Pediatric\n");
    fprintf(fp,"Organization: United Hospital Limited, Gulshan, Dhaka, Bangladesh , ABC General Hospital\n");
    fprintf(fp,"Chamber: ABC General Hospital\n");
    fprintf(fp,"Location: Plot # 15, Road # 71, Gulshan - 2, Dhaka-1212, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8836000, 88364444");
    fclose(fp);

        fp=fopen("doc_8.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc8s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc8s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app8.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc8s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }

}
int doc_9(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
     fp=fopen("doc_9.txt","w");
    fprintf(fp,"Dr. Syed  Khairul  Amin\n");
    fprintf(fp,"MBBS (Dhaka), DCH (Glasgow), MRCP (UK),FRCP (Edin), FRCP (Glasgow)\n");
    fprintf(fp,"Professor of Paediatrics[Child Specialist]\n");
    fprintf(fp,"Ex. Academic Director Bangladesh institute of Child Health Dhaka Shishu Hospital , ABC General Hospital\n");
    fprintf(fp,"Chamber : ABC General Hospital \n");
    fprintf(fp,"chamber : House No. 1, Road No. 4, Dhanmondi,Dhaka-1205, Bangladesh.\n");
    fprintf(fp,"Phone : 8610793-8, 9670210-3, 8631177\n");
    fprintf(fp,"Mobile : 01916-957664 (For Appointment)\n");
    fprintf(fp,"Visiting Hours : 3:00 PM - 7:00 PM [Friday Closed]");
    fclose(fp);

        fp=fopen("doc_9.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc9s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc9s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app9.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc9s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }




     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
int doc_10(void)

{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_10.txt","w");
    fprintf(fp,"Professor Dr. Mohammed Istiaque Hossain\n");
    fprintf(fp,"Qualification : MBBS (DMC), DCH (Scotland), MRCP (UK), SBE (KSA), FRCP (Edin)\n");
    fprintf(fp,"Designation : Senior Consultant\n");
    fprintf(fp,"Expertise : Child - Pediatric\n");
    fprintf(fp,"Organization: Apollo Hospitals Dhaka , ABC General Hospital\n");
    fprintf(fp,"Location: Plot # 81, Block # E, Bashundhara R/A, Dhaka - 1229, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8401661, Hotline - 10678\n");
    fclose(fp);

        fp=fopen("doc_10.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc10s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc10s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app10.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc10s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


    printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        child();
    }
}
/*
*/
//
//
////
////
////
////
/////Dental function
int doc_21(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_21.txt","w");
    fprintf(fp,"Dr. Md. Abdullah Khan\n");
    fprintf(fp,"Qualification : BDS, PGT ( Japan )\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: Metropolitan Dental\n");
    fprintf(fp,"Chamber: Metropolitan Dental\n");
    fprintf(fp,"Location: Sel Green Center, 30, Green Road, Dhaka - 1205, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8625317\n");
     fclose(fp);

    fp=fopen("doc_21.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
     fclose(fp);


         if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc21s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc21s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app21.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc21s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

     printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }

}
int doc_22(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];


    fp=fopen("doc_22.txt","w");
    fprintf(fp,"Dr. M. A. Sikder\n");
    fprintf(fp,"Qualification : BDS, Ph.D ( Japan )\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Dentist");
    fprintf(fp,"Chamber: Smile Specialised Dental & Research Center\n");
    fprintf(fp,"Location: 12 Gaznabi Road, College Gate, Mohammadpur, Dhaka - 1207, Bangladesh\n");
    fprintf(fp,"phone: +880 1914553088\n");
    fclose(fp);

        fp=fopen("doc_22.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc22s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc22s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app22.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc22s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


    printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
}
int doc_23(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_23.txt","w");
    fprintf(fp,"Professor Dr. Md. Shamsul Alam\n");
    fprintf(fp,"Qualification : BDS, DCD(USSR), FADI(USA)\n");
    fprintf(fp,"Designation : Professor & Chairman\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: BSM Medical University(Old IPGMR)\n");
    fprintf(fp,"Chamber: Green Life Hospital Limited\n");
    fprintf(fp,"Location: 32 Green Road ( BirUttom K. M ShafiullahSarak ) , Dhanmondi, Dhaka - 1205\n");
    fprintf(fp,"Phone: +880-2-9612345-54, 9615412, 8628820-1\n");
    fclose(fp);

    fp=fopen("doc_23.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc23s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc23s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app23.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc23s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


   printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
    }
int doc_24(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

     fp=fopen("doc_24.txt","w");
    fprintf(fp,"Professor Dr. Khandaker Abdul Azim\n");
    fprintf(fp,"Qualification : BDS, Dip, OMS ( Australia )\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Chamber: IbnSina Dental Center\n");
    fprintf(fp,"Location: House # 47, Road # 9/A, Satmasjid Road, Dhanmondi, Dhaka - 1209, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-91296625-6, 9128835-7 \n");
    fclose(fp);


            fp=fopen("doc_24.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
   fclose(fp);


       if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc24s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc24s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app24.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc24s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


   printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
}
int doc_25(void)
{
    system("cls");
    title();

    c=0;


        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_25.txt","w");
    fprintf(fp,"Dr. Mohammed ShafiUllah\n");
    fprintf(fp,"Qualification : MBBS, MS, BDS, MCPS, MDRA(USA)\n");
    fprintf(fp,"Designation : Associate Professor & Head of Department\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: Sapora Dental College & Hospital , Uttara\n");
    fprintf(fp,"Chamber: Islami Bank Central Hospital\n");
    fprintf(fp,"Location: 30, AnjumanMafidul Islam Road, Kakrail , Dhaka-1000\n");
    fprintf(fp,"Phone: +880-2-9355801-2, 9360331-2\n");
    fclose(fp);

           fp=fopen("doc_25.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc25s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc25s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app25.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc25s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }
   printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
    }
int doc_26(void)
{
    system("cls");
    title();

    c=0;


        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_26.txt","w");
    fprintf(fp,"Dr. Nurul Amin \nQualification : BDS, PhD ( Japan )\n");
    fprintf(fp,"Designation : Associate Professor & Head, Department of Oral & Maxillofacial Surgery\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: Sapporo Dental College & Hospital\n");
    fprintf(fp,"Chamber: Smile Specialised Dental & Research Center\n");
    fprintf(fp,"Location: 75, Satmasjid Road, Dhanmondi R/A, Dhaka - 1209\n");
    fprintf(fp,"Phone: Cell: +880 1914553088\n");
    fclose(fp);


               fp=fopen("doc_26.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc26s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc26s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app26.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc26s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

       printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
}
int doc_27(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_27.txt","w");
    fprintf(fp,"Dr. Salahuddin ( Swapon )\n");
    fprintf(fp,"Qualification : B.D.S, FCPS\n");
    fprintf(fp,"Designation : Assistant Professor & Head of Department ( CIDCH )\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: Bangabandhu Sheikh Mujib Medical University ( BSMMU )\n");
    fprintf(fp,"Chamber: Sudeen Dental Care\n");
    fprintf(fp,"Location: 20, Green Road, RangsTaz tower, Dhanmondi, Dhaka - 1205\n");
    fprintf(fp,"Phone: +880 1711958143\n");
    fclose(fp);

            fp=fopen("doc_27.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc27s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc27s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app27.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc27s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


       printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
}
int doc_28(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_28.txt","w");
    fprintf(fp,"Dr. Debashis Dey\n");
    fprintf(fp,"qualification : BDS(DU) MPH, PGT(OMFS)\n");
    fprintf(fp,"Assistant Professor & Head\n");
    fprintf(fp,"Department Of Dentistry,ZIHT\n");
    fprintf(fp,"Ex Senior  Lecturer OMFS City\n");
    fprintf(fp,"chamber: APON Dental  Care Dhaka & Barisal\n");
    fprintf(fp,"mobile : 01920130000 ,  01865555260\n");
    fclose(fp);


               fp=fopen("doc_28.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc28s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc28s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app28.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc28s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

       printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }

}
int doc_29(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

     fp=fopen("doc_29.txt","w");

    fprintf(fp,"Dr. Mohammad ShafiUllah\n");
    fprintf(fp,"Qualification : BDS, MS ( Norway ), DDS, MCPS, MADRA ( USA )\n");
    fprintf(fp,"Designation : Consultant\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: Ad-Din Medical College & Hospital\n");
    fprintf(fp,"Chamber: Smile Specialised Dental & Research Center\n");
    fprintf(fp,"Location: 75, Satmasjid Road, Dhanmondi R/A, Dhaka - 1209\n");
    fprintf(fp,"Phone: Cell: +880 1914553088\n");
    fclose(fp);

               fp=fopen("doc_29.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc29s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc29s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app29.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc29s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

       printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
}

int doc_30(void)

{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];


    fp=fopen("doc_30.txt","w");

    fprintf(fp,"Dr. Syed T. Ahsan Ratan\n");
    fprintf(fp,"Qualification : BDS, FPFA ( USA ), PGT ( Japan )\n");
    fprintf(fp,"Designation : Chief Consultant\n");
    fprintf(fp,"Expertise : Dentist\n");
    fprintf(fp,"Organization: Ratan's Dental\n");
    fprintf(fp,"Chamber: Ratan's Dental (Panthapath)\n");
    fprintf(fp,"Location: 150, Green Road, Dhaka - 1205\n");
    fprintf(fp,"Phone: +880-2-9111090, 01711823382\n");
    fclose(fp);

      fp=fopen("doc_30.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);





        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc30s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc30s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app30.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc30s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

       printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dental();
    }
}
//
//
////
//////car
int doc_41()
{
    system("cls");
    title();
    FILE *fp1;
    int c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp1=fopen("doc_41.txt","w");

    fprintf(fp1,"\nProfessor Dr. Abdullah-Al-Safi Majumder ");
    fprintf(fp1,"\nMBBS, D. Card, MD(Card), FACC, FSGC, FRCP Research Fellow,NCVC, (Japan) WHO Fellow in Cardiology, USA");
    fprintf(fp1,"\nCardiology /Heart Specialist");
    fprintf(fp1,"\nProfessor of Cardiology");
    fprintf(fp1,"\nABC Hospital");
    fprintf(fp1,"\nPhone: +880-2-9669480, 9661491-3, Mobile – 01553341060-1, 01553341063");

    fclose(fp1);
    fflush(stdin);

    fp1=fopen("doc_41.txt","r");
       for(i=0;c!=EOF;++i)
    {
         fflush(stdin);
        c = getc(fp1);
        printf("%c", c);
        //puts(c);
        fflush(stdin);
    }
    fclose(fp1);
    if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc41s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc41s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app41.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nSerial is=%d",a+1);
fclose(fp);
    fp = fopen("doc41s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Serial is:%d",a);



    }
    }
       printf("\n\n\n\t\t\tPress 1 to BAck Page");
    fp1=fopen("doc_41.txt","w");
    fprintf(fp1,"nothing");
    fclose(fp1);
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        fflush(stdin);
        loading();
        cardiology();
    }
}
int doc_42()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_42.txt","w");
    fprintf(fp,"\nProfessor (Dr.) Mohammad Safiuddin ");
    fprintf(fp,"\nMB BS(Dhaka), MD(Cardiology), DTCD, FRCP(Edin)FACC(USA), FCCP(USA), FESC, FRCP(Glasgow,UK)");
    fprintf(fp,"\nProfessor of Interventional Cardiology");
    fprintf(fp,"\nProfessor of Cardiology");
    fprintf(fp,"\nABC Hospital");
    fclose(fp);

    fp=fopen("doc_42.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc42s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc42s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app42.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc42s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


    printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }
}
int doc_43()
{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_43.txt","w");

    fprintf(fp,"\nDr. H. I. Lutfor Rahman Khan");
    fprintf(fp,"\nMBBS, D-Card, MD (Card)");
    fprintf(fp,"\nCardiology /Heart Specialist");
    fprintf(fp,"\nProfessor & Head, Department of Cardiology");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: +880-2-8124990 (Master Line), 8129667, 8124380");
    fclose(fp);


               fp=fopen("doc_43.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);




        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc43s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc43s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app43.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc43s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }






    printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }
}
int doc_44()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_44.txt","w");
   fprintf(fp,"\nProfessor Dr. Md. Afjalur Rahman");
    fprintf(fp,"\nMBBS, MD (Cardiology), PHD (Cardiology)FRCP (Glasgow), FRCP (Edin), FACC (USA)Fellowship in Interventional Cardiology (USA, France)Clinical & Interventional Cardiologist");
  fprintf(fp,"\nCardiology /Heart Specialist");
  fprintf(fp,"\nProfessor, Department of Cardiology");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone : 8610793-8, 9670210-3, 8631177 (chamber)");
   fclose(fp);

              fp=fopen("doc_44.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);




        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc44s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc44s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app44.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc44s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }







  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
        }

}
int doc_45()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_45.txt","w");
  fprintf(fp,"\nProfessor Dr. AbduzZaher");
    fprintf(fp,"\nMBBS, FCPS ( Medicine ), FACC ( USA ) , FRCP");
 fprintf(fp,"\nCardiology /Heart Specialist");
  fprintf(fp,"\nConsultant, Department of Interventional Cardiology");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone: + 880-2-8610793-8, 9670210-3, 8624929");
   fclose(fp);



              fp=fopen("doc_45.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

            if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc45s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc45s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app45.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc46s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }
}
int doc_46()
{
system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_46.txt","w");
    fprintf(fp,"\nProfessor Dr. Abu Zafar");
    fprintf(fp,"\nMBBS, MRCP ( UK ), FRCP ( Glasgow )");
 fprintf(fp,"\nCardiology /Heart Specialist");
  fprintf(fp,"\nProfessor, Ex – Head, Dept. of Cardiology ");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone: +880-2-9128835-7, 9126625-6, Cell: +880 1717351631, +880 1913568759 (Chamber) .");
  fclose(fp);


             fp=fopen("doc_46.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc46s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc46s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app46.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc46s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }





  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }
}
int doc_47()
{


    system("cls");
    c=0;
    title();
        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_47.txt","w");

    fprintf(fp,"\nProfessor HasinaBanoo");
    fprintf(fp,"\nMBBS, FCPS (Medicine)");
   fprintf(fp,"\nCardiology /Heart Specialist");
  fprintf(fp,"\nEx. Professor of Cardiology SSMCH (Mitford) & BSMMULabaid Hospital, Gulshan");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone: +880-2-8835981-4, 8858943, 8835966");
  fclose(fp);

             fp=fopen("doc_47.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);




        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc47s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc47s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app47.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc47s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }




  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }
}
int doc_48()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_48.txt","w");
     fprintf(fp,"\nProfessor Dr. K.M.H.S. SirajulHaque");
   fprintf(fp,"\nCardiology /Heart Specialist");
  fprintf(fp,"\nProfessor");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone: +880-2-9118219");
  fclose(fp);


             fp=fopen("doc_48.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);



        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc48s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc48s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app48.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc48s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }

}
int doc_49()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_49.txt","w");
      fprintf(fp,"\nProfessor Dr. Munshi Md. Mujibur Rahman");
    fprintf(fp,"\nQualification : MBBS, FCPS, MCPS, FICS");
 fprintf(fp,"\nCardiology /Heart Specialist");
  fprintf(fp,"\nProfessor");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone: + 880-2-9616074");
  fclose(fp);

             fp=fopen("doc_49.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }

}
int doc_50()
{

    system("cls");

    title();
    int a=0;
    char pname[100];
    char pphn[15];
    c=0;

    fp=fopen("doc_50.txt","w");

    fprintf(fp,"\nProfessor Dr. Momenuzzaman");
    fprintf(fp,"\nQualification : MBBS, D-Card, MD-Card");
 fprintf(fp,"\nChief Consultant, Cardiology");
  fprintf(fp,"\nProfessor");
  fprintf(fp,"\nABC Hospital");
  fprintf(fp,"\nPhone: +880-2-8836000, 8836444");
  fclose(fp);

             fp=fopen("doc_50.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc50s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc50s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app50.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc50s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


  printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        cardiology();
    }
}




/////////oncology
int doc_61(void)

{
    system("cls");

    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_61.txt","w");

    fprintf(fp,"Prof. Dr. Sarwar Alam\n");

    fprintf(fp,"qualification : MBBS, DIH ( DU ), MPhil ( Oncology )n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Professor & Chairman, Oncology Department,Bangabandhu Sheikh Mujib Medical University (BSMMU)\n");
    fprintf(fp,"Chamber: Health & Hope Hospital Ltd.\n");
    fprintf(fp,"152/1-H, Green Road, Panthapath, Dhaka - 1205, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-9145786, 9137076, 01819494530 ( Chamber )\n");
    fclose(fp);

               fp=fopen("doc_61.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


    if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc61s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc61s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app61.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc48s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }
      printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }

}
int doc_62(void)
{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

     fp=fopen("doc_62.txt","w");
    fprintf(fp,"Professor Dr. Lt. Col. Md. Mofazzel  Hossain\n");
    fprintf(fp,"qualification : MBBS, FCPS ( Med. ), FACP ( USA ), FRCP ( Edin )\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Professor & Head, Department of Oncology,Bangladesh Medical College & Hospital - Dhanmondi, Dhaka\n");
    fprintf(fp,"Chamber: Labaid Specialized Hospital\n");
    fprintf(fp,"Location: House # 6, Road # 4, Dhanmondi, Dhaka - 1205\n");
    fprintf(fp,"Phone: + 880-2-9676356, 8610793-8\n");
    fclose(fp);


                   fp=fopen("doc_62.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc62s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc62s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app62.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc62s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }

}
int doc_63(void)

{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

     fp=fopen("doc_63.txt","w");
    fprintf(fp,"Professor  Dr. Parveen  Shahida  Akhter\n");
    fprintf(fp,"qualification : MBBS, FCPS\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Professor of National Institute of Cancer Research & Hospital\n");
    fprintf(fp,"Chamber: City Hospital Ltd.\n");
    fprintf(fp,"location : 1/8, Block-E, Lalmatia, Satmosjid Road, Mohammadpur, Dhaka - 1207, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8143312, 8143437, 8143166, 8143167, 9124436, Mobile - 01711622788\n");
    fclose(fp);

    fp=fopen("doc_63.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);




            if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc63s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc63s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app63.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc63s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }










         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }

}
int doc_64(void)

{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_64.txt","w");
    fprintf(fp,"Professor Dr. A.B.M.F. Karim\n");
    fprintf(fp,"MBBS, FRCR, PhD\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Professor & Chairman Oncology Club & Editorial Board of Cancer Control Journal\n");
    fprintf(fp,"Chamber: Japan Bangladesh Friednship Hospital\n");
    fprintf(fp,"55, Satmasjid Road ( Zigatola Bus Stand ), Dhanmondi, Dhaka – 1209, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-9672277, 9676161, 9664028, 9664029\n");
    fclose(fp);

    fp=fopen("doc_64.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc64s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc64s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app62.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc64s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }
         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }

}
int doc_65(void)

{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_65.txt","w");
    fprintf(fp,"Prof essor (Dr). Saumen Basu\n");
    fprintf(fp,"MBBS (Calcutta University), MD (Radiation Oncology),Diplomate National Board(DNB) (RT)\n");
    fprintf(fp,"Visiting Fellow Royal Brisbane Hospital & Princess Alexandra Hospital,Brisbane,Australia\n");
    fprintf(fp,"Visiting Fellow Tata Memorial Hospital,Mumbai,India\n");
    fprintf(fp,"Consultant Radiation & Clinical Oncologist\n");
    fprintf(fp,"Chamber: United hospital,Dhaka\n");
    fprintf(fp,"Plot 15, Road 71, Gulshan, Dhaka-1212 Bangladesh\n");
    fprintf(fp,"Tel: +88 02 8836444, +88 02 8836000\n");
    fprintf(fp,"Fax: +88 02 8836446");
    fprintf(fp,"Email: info@uhlbd.com");
    fclose(fp);


      fp=fopen("doc_65.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc65s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc65s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app65.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc65s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }
}
int doc_66(void)

{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_66.txt","w");

    fprintf(fp,"Prof. Dr. Syed Md. Akram  Hossain\n");
    fprintf(fp,"MBBS, MPH, FCPS , Fellow WHO ( Medical Onccology )\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Professor & Ex-Chairman, Oncology Department,Bangabandhu Sheikh Mujib Medical University (BSMMU)\n");
    fprintf(fp,"Chamber: Labaid Specialized Hospital\n");
    fprintf(fp,"Location: House # 6, Road # 4, Dhanmondi. City, Dhaka – 1205, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8610793-8, 9670210-3, 8631177\n");
     fclose(fp);

     fp=fopen("doc_66.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
         printf("\n\n\n\t\t\tPress 1 to BAck Page");


             if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc66s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc66s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app66.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc66s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }

}
int doc_67(void)
{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_67.txt","w");
    fprintf(fp,"Dr. Zafor Md. Masud\n");
    fprintf(fp,"MBBS, M.Phil, FCPS\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Associate Professor Bangladesh Medical College & Hospital\n");
    fprintf(fp,"Chamber: IbnSina Diagnostic & Imaging Center\n");
    fprintf(fp,"House # 48, Road # 9/A, Dhanmondi, SAtmasjid Road, Dhaka - 1209, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-9128835-7, 9126625-6, Cell: +880 1717351631, +880 1913568759 ( Chamber )\n");
    fprintf(fp,"\n");
    fclose(fp);

                   fp=fopen("doc_67.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc67s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc67s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app67.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc67s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }
}
int doc_68(void)

{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];



    fp=fopen("doc_68.txt","w");
    fprintf(fp,"Dr. Masuda  Begum\n");
    fprintf(fp,"MBBS, FCPS\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Associate professor, Department of Hematology Bangabandhu Sheikh Mujib Medical University (BSMMU), Shahbagh, Dhaka\n");
    fprintf(fp,"Chamber: Central Hospital Limited\n");
    fprintf(fp,"Location: House # 5, Road # 2, Dhaka - 1205, Bangladesh\n");
    fprintf(fp,"Phone: + 880-2-9660016-19, 8624514-18 ( Chamber )\n");
    fclose(fp);

    printf("\n");

                   fp=fopen("doc_68.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc68s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc68s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app68.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc68s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }
}
int doc_69(void)

{
    system("cls");
    title();

    c=0;


        int a=0;
    char pname[100];
    char pphn[15];



        fp=fopen("doc_69.txt","w");

    fprintf(fp,"Dr. M A Hashem\n");
    fprintf(fp,"MBBS, FCPS\n");
    fprintf(fp,"Cancer - Oncology Specialist");
    fprintf(fp,"Associate Professor Sir Salimullah Medical College & Hospital\n");
    fprintf(fp,"Chamber: Green View Clinic\n");
    fprintf(fp,"25/3, Green Road, Dhaka, Bangladesh\n");
    fprintf(fp,"Phone: +880 1711106136, +880-2-8610313\n");
    fclose(fp);

                   fp=fopen("doc_69.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc69s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc69s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app69.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc69s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


      printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }
}
//
//
//
////oncology  Doctor
int doc_70(void)

{
    system("cls");
    title();
    c=0;
    int a=0;
    char pname[100];
    char pphn[15];


    fp=fopen("doc_70.txt","w");
    fprintf(fp,"Dr. A K M Hamidur  Rahman\n");
    fprintf(fp,"MBBS, DMRT\n");
    fprintf(fp,"Cancer - Oncology Specialist\n");
    fprintf(fp,"Associate Professor");
    fprintf(fp,"Chamber: IbnSina Diagnostic & Imaging Center\n");
    fprintf(fp,"House # 48, Road # 9/A, Dhanmondi, SAtmasjid Road, Dhaka - 1209, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-9128835-7, 9126625-6, Cell: +880 1717351631( Chamber )\n");
    fclose(fp);

                   fp=fopen("doc_70.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc70s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc70s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app70.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc70s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        oncology();
    }

}

/*


*/
//close
/////////// dem
int doc_81(void)
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_81.txt","w");

fprintf(fp,"\n\nDr. A.S. Mofrehuddin Ahmed");
fprintf(fp,"\nMBBS (DHAKA), DDV");
fprintf(fp,"\nConsultant skin specialist");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 9666497,9663289, 8610420");
 fclose(fp);

    fp=fopen("doc_81.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc81s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc81s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app81.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc81s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }


}
int doc_82(void)
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_82.txt","w");

fprintf(fp,"\n\nDr. A.S.M. Zakariya");
fprintf(fp,"\nMBBS, MPH, MD skin / dermatology");
fprintf(fp,"\nTrained In Bangkok, Paris");
fprintf(fp,"\nAssistant Professor");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 9660015-19, 9121592, 01819238575");
fclose(fp);

    fp=fopen("doc_82.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc82s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc82s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app82.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc82s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }

}
int doc_83(void)
{
    system("cls");
    title();
     c=0;
    int a=0;
    char pname[100];
    char pphn[15];
     fp=fopen("doc_83.txt","w");
fprintf(fp,"\n\nDr. Abida Sultana");
fprintf(fp,"\nMBBS (Dhaka), DDV skin / dermatology");
fprintf(fp,"\nskin specialist");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 8951928, 8950244, 01718710344, 01712691732");
fclose(fp);


    fp=fopen("doc_83.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc83s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc83s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app83.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc83s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }



}
int doc_84(void)
{
    system("cls");
    title();
    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_84.txt","w");

fprintf(fp,"\n\nDr. Ahammad Ali");
fprintf(fp,"\nMBBS, DDV (DEU), DTM &H (THAI) skin / dermatology");
fprintf(fp,"\nSenior Consultant");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 8620353-6, 8624907-10");
       fclose(fp);

           fp=fopen("doc_84.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc84s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc84s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app84.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc84s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }

}
int doc_85(void)
{
    system("cls");
    title();
    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_85.txt","w");


fprintf(fp,"\n\nDr. Anisur Rahman");
fprintf(fp,"\nMBBS, DIH, DEM, MD, skin / dermatology");
fprintf(fp,"\nskin specialist of BIRDEM");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 01819217631, 8321646, 01199825626");
fclose(fp);

    fp=fopen("doc_85.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc85s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc85s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app85.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc85s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }

}
int doc_86(void)
{
    system("cls");
    title();
    c=0;


        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_86.txt","w");
fprintf(fp,"\n\nDr. AtiyaAnjum");
fprintf(fp,"\nMBBS (Dhaka), DV (BSMMU), FCPS (II) skin / dermatology");
fprintf(fp,"\nConsultant");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 8924311, 0152450281, 0152314100, 01713033682, 01715128281");
fclose(fp);


    fp=fopen("doc_86.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc86s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc86s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app86.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc86s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }


}
int doc_87(void)
{
    system("cls");
    title();
    int a=0;
    char pname[100];
    char pphn[15];
    c=0;
    fp=fopen("doc_87.txt","w");

fprintf(fp,"\n\nDr. Brg.Gen. J.B.M. Zafar Sadeque(Rtd)");
fprintf(fp,"\nMBBS.DDV,PG Fellow(China),CMD Dip(Germany)");
fprintf(fp,"\nEx-Advisor Specialist and Head of the Dept.");
fprintf(fp,"\nCMH,Dhaka");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: 8122470");
fclose(fp);

    fp=fopen("doc_87.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc87s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc87s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app87.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc87s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }


}
int doc_88(void)
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
     fp=fopen("doc_88.txt","w");


fprintf(fp,"\n\nDr. Chowdhury Mohammad Ali");
fprintf(fp,"\nMBBS (Dhaka). DDV (DU).");
fprintf(fp,"\nAssociate Professor");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 8143312, 8143913, 8143437, 8143166, 8143167, 9124436, 9340701. 01711409055");
fclose(fp);

    fp=fopen("doc_88.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc88s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc88s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app88.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc88s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }


}
int doc_89(void)
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_89.txt","w");

fprintf(fp,"\n\nDr. Col. Habib Rahmatullah");
fprintf(fp,"\nMBBS,DDV,DD(Thailand),FRSH(London),MAMS(Aus) skin / dermatology");
fprintf(fp,"\nConsultant & Head of the Dept. CMH");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: 8750011/4666,8750011/4667,01711-362136");
fclose(fp);

    fp=fopen("doc_89.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc89s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc89s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app89.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc89s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }


}
int doc_90(void)
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_90.txt","w");

fprintf(fp,"\n\nDr. Didarul Ahsan");
fprintf(fp,"\nMBBS, DDV (Austria), Fellow RSH (London) skin / dermatology");
fprintf(fp,"\nConsultant Dermatology, Skin specialist in Bangladesh");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone : 9117775, 8121172, 8119229, 9133563-4");
fclose(fp);

fp=fopen("doc_90.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc90s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc90s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app90.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc90s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        dermatology();
    }

}




/*

*/
////
////
////
int doc_102()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

     fp=fopen("doc_102.txt","w");

    fprintf(fp,"\nProfessor Dr. Mansur Habib");
    fprintf(fp,"\nQualification : MBBS, FCPS (Medicine) , MD (Neurology) MRCP, FRCP");
    fprintf(fp,"\nDesignation : Professor , Department of Neurology");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: + 880-2-8610793-8, 9670210-3, 8618617 (Chamber)");
    fclose(fp);
        fp=fopen("doc_102.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc102s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc102s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app102.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc102s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }
}
int doc_103()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];


         fp=fopen("doc_103.txt","w");

    fprintf(fp,"\n\nProfessor Dr. QuaziDeen Mohammad");
    fprintf(fp,"\nMBBS, FCPS, MD (Neurology)");
    fprintf(fp,"\nProfessor");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nPhone: +880-2-9339089, 9342744");
    fclose(fp);

            fp=fopen("doc_103.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc103s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc103s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app103.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc103s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_104()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
     fp=fopen("doc_104.txt","w");

    fprintf(fp,"\n\nProfessor Dr. Md. Abdul Hai");
    fprintf(fp,"\nQualification : MBBS, FCPS (Medicine),MD (Neuro),PhD (India),FRCP (Edin),Fellow (Interventional Neurology)oi");
    fprintf(fp,"\nDesignation : Professor");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: +880-2-9126625-6, 9128835-7, Cell: +880 1717351631 (Chamber)");
    fclose(fp);

            fp=fopen("doc_104.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc104s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc104s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app104.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc104s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_105()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
     fp=fopen("doc_105.txt","w");

    fprintf(fp,"\n\nProf. Dr. Md. Abdul Hayee");
    fprintf(fp,"\nQualification : MBBS (Dhaka), FCPS (Med), MD (Neurology), PhD (India),FRCP (Edin), Fellow (Interventional Neurology)");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: +880-2-8143312, 8143437, 8143166, 8143167, 9124436");
    fclose(fp);

            fp=fopen("doc_105.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc105s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc105s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app105.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc105s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }
}
int doc_106()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_106.txt","w");
   fprintf(fp,"\n\nProfessor Dr. M. A. Mannan");
    fprintf(fp,"\nQualification : MBBS, FRCP");
    fprintf(fp,"\nDesignation : Professor, Rtd. & Head of the Department of Neurology");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: +880-2-8114846");
    fclose(fp);

            fp=fopen("doc_106.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc106s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc106s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app106.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc106s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_107()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_107.txt","w");

   fprintf(fp,"\n\nProfessor Dr. Md. AmirulHaque");
    fprintf(fp,"\nQualification : MBBS, FCPS, FFRCP ( Glasgow ), FACP ( USA ), DCN ( London )");
    fprintf(fp,"\nDesignation : Professor & Head, Department of Neuromedicine");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: +880-2-9126625-6, 9128835-7, Cell: +880 1717351631");
    fclose(fp);

            fp=fopen("doc_107.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);



        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc107s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc107s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app107.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc107s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_108()
{
    system("cls");
    title();
    int a=0;
    char pname[100];
    char pphn[15];

    c=0;

    fp=fopen("doc_108.txt","w");

    fprintf(fp,"\n\nProfessor Dr. Md. Ashraf Ali");
    fprintf(fp,"\nQualification : Senior Consultant, Department of Neurology");
    fprintf(fp,"\nDesignation : MBBS, FCPS ( Medicine ), MD ( Neurology ), FRCSP ( Edin )");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: + 880-2-9676356, 8610793-8");
    fclose(fp);
        fp=fopen("doc_108.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);



            if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc108s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc108s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app108.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc108s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }




         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_109()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];

     fp=fopen("doc_109.txt","w");
   fprintf(fp,"\n\nProfessor Dr. (Major Retd.) Md. Mahbubur Rahman");
    fprintf(fp,"\nQualification : MBBS, FCPS (Medicine), MD (Neurology)");
    fprintf(fp,"\nDesignation : Professor & Head, Department of Neuromedicine");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: +880-2-9126625-6, 9128835-7, Cell: +880 1717351631 (Chamber)");
    fclose(fp);
            fp=fopen("doc_109.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc109s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc109s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app109.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc109s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_110()
{
    system("cls");
    title();
    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_110.txt","w");

 fprintf(fp,"\n\nProfessor Dr. SirajulHaque");
    fprintf(fp,"\nQualification : MBBS, FCPS (Medicine), FACP (USA), FRCP (Edin)");
    fprintf(fp,"\nDesignation : Chief Consultant");
    fprintf(fp,"\nExpertise : Neuromedicine");
    fprintf(fp,"\nABC Hospital");
    fprintf(fp,"\nPhone: + 880-2-9676356, 8610793-8");
    fclose(fp);
        fp=fopen("doc_110.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc110s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc110s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app110.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc110s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        neuromedicine();
    }

}
int doc_111()
{
    system("cls");
    title();
    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
   printf("\n\nProfessor Dr. Syed Wahidur Rahman");
    printf("\nQualification : MBBS, FCPS (Medicine)");
    printf("\nDesignation : Professor & Head, Neuromedicine Department");
    printf("\nExpertise : Neuromedicine");
    printf("\nABC Hospital");
    printf("\nPhone: +880-2-9669480, 9661491-3");


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc111s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc111s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app111.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc111s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


}
/*

*/
////
////
////
////
////Orthopedics
int doc_122()
{
    system("cls");
    title();

    c=0;

        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_122","w");
fprintf(fp,"\n\nDr. Amit Kapoor");
fprintf(fp,"\nMBBS, MS (Ortho.), DNB (Ortho.),");
fprintf(fp,"\nDesignation : Consultant");
fprintf(fp,"\nExpertise :Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880-2-8401661, Hotline - 10678");
fclose(fp);
        fp=fopen("doc_122.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc122s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc122s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app122.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc122s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_123()
{
    system("cls");
    title();
    int a=0;
    char pname[100];
    char pphn[15];
    c=0;
    fp=fopen("doc_123.txt","w");
fprintf(fp,"\n\nDr. Abu Jafar Chowdhury");
fprintf(fp,"\nQualification : MBBS, MS ( Ortho )");
fprintf(fp,"\nDesignation : Assistant Professor");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: + 880-2-9676356, 8610793-8");
fclose(fp);
        fp=fopen("doc_123.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc123s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc123s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app123.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc123s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }





         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }

}
int doc_124()
{
    system("cls");
    title();

    c=0;


        int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_124.txt","w");
fprintf(fp,"\n\nProfessor Dr. Kh. Abdul Awal");
fprintf(fp,"\nQualification : MBBS, MS, FICS");
fprintf(fp,"\nDesignation : Professor & Director");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fclose(fp);
        fp=fopen("doc_124.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);



        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc124s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc124s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app124.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc124s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_125()
{
    system("cls");
    title();
    c=0;


        int a=0;
    char pname[100];
    char pphn[15];



    fp=fopen("doc_125.txt","w");
fprintf(fp,"\n\nProfessor Dr. M. Hafizur Rahman");
fprintf(fp,"\nQualification : MBBS, MS");
fprintf(fp,"\nDesignation : Professor & Head, Department Of Orthopaedic");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880-2-8017151-52, 8031378-79");
fclose(fp);
        fp=fopen("doc_125.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);



        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc125s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc125s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app125.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc125s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_126()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];



    fp=fopen("doc_126.txt","w");
fprintf(fp,"\n\nProfessor M. K. I. Qayyum Chowdhury");
fprintf(fp,"\nQualification : MBBS, MS (Ortho), F.I.C.S, F.A.C.S (USA)");
fprintf(fp,"\nDesignation : Head, Orthopedic Department");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880-2-9660015, 8624515");
fclose(fp);
        fp=fopen("doc_126.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);

        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc126s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc126s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app126.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc126s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_127()
{
    system("cls");
    title();

    c=0;


        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_127.txt","w");
fprintf(fp,"\n\nProf. Dr. Md. Siraj-Ul-Islam");
fprintf(fp,"\nQualification : MBBS, MS (Ortho)");
fprintf(fp,"\nDesignation : Professor");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880-2-8124990 (Master Line), 8129667, 8124380");
fclose(fp);
        fp=fopen("doc_127.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc127s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc127s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app127.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc127s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }



         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_128()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_128.txt","w");
fprintf(fp,"\n\nProfessor Dr. QaziShahidulAlam");
fprintf(fp,"\nQualification : MBBS, D. Orth, MS ( Orth ) , FICS ( USA )");
fprintf(fp,"\nDesignation : Professor");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880-2-9670295, 8616074, 8613883");
fclose(fp);
        fp=fopen("doc_128.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);


        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc128s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc128s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app128.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc128s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_129()
{
    system("cls");
    title();

    c=0;
        int a=0;
    char pname[100];
    char pphn[15];

    fp=fopen("doc_129.txt","w");
fprintf(fp,"\n\nBrig Gen Professor Dr. A K M Masud");
fprintf(fp,"\nQualification : MBBS, MS");
fprintf(fp,"\nDesignation : Professor & Head, Department of Orthopaedics");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880-2-8613883, 9670295");
fclose(fp);
        fp=fopen("doc_129.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);




        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc129s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc129s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app129.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc129s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }

         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_130()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
    fp=fopen("doc_130.txt","w");
fprintf(fp,"\n\nProfessor Dr. A.K.M. AkterMurshed");
fprintf(fp,"\nQualification : MBBS, MS, FICS");
fprintf(fp,"\nDesignation : Professor");
fprintf(fp,"\nExpertise : Orthopaedic");
fprintf(fp,"\nABC Hospital");
fprintf(fp,"\nPhone: +880 2 8620353-6, 8624907-10");
fclose(fp);
        fp=fopen("doc_130.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);



        if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc130s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc130s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app130.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc130s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }


         printf("\n\n\n\t\t\tPress 1 to BAck Page");

    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        orthopedics();
    }
}
int doc_131()
{
    system("cls");
    title();

    c=0;
    int a=0;
    char pname[100];
    char pphn[15];
printf("\n\nDr. ShyamalDebnath");
printf("\nMBBS,.MS(Ortho)");
printf("\nDesignation : Associate Professor");
printf("\nExpertise : Orthopaedic");
printf("\nABC Hospital");
printf("\nPhone: + 880-2-8611213, 8628820");





    if(p==1)
    {
    printf("\n\n\t\t\tDO You want to take appointment");
    printf("\n\t\t\tPress 1 for Appointment:");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp=fopen("doc131s.bin","rb+");
        if(fp==NULL)
{
    fp=fopen("doc131s.bin","wb+");
    fwrite(&a,sizeof(a),1,fp);
    fclose(fp);
}
fread(&a, sizeof(a), 1, fp);
fclose(fp);
system("cls");
fflush(stdin);
printf("\n\n\t\t\tEnter You Name:");
gets(pname);
printf("\n\t\t\tEnter Your Phone Number:");
gets(pphn);
fp=fopen("app131.txt","a");
fprintf(fp,"\nPaitent name=%s",pname);
fprintf(fp,"\nPaitent Phone Number=%s",pphn);
fprintf(fp,"\nyour Serial is=%d",a+1);
fclose(fp);
    fp = fopen("doc131s.bin","wb+");
    ++a;
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
printf("Your serial is:%d",a);



    }
    }






}





int patient_menu(void)
{
    p=1;
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Patient Menu \xdb");
    printf("\n\t\t\t\=========================");

            printf("\n\n\t\t1.Time Schedule Of Doctor");
            printf("\n\t\t2.Doctor Details & Appointment");
            printf("\n\t\t3.Description of cost");
            printf("\n\t\t4.Medicine Information");
            printf("\n\t\t5.Contract Us");
            printf("\n\t\t6.Complain");
            printf("\n\t\t7.Service");
            printf("\n\n\t\t8.Log Out");
            printf("\n\n\n\t\tEnter your choice: ");
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
               cost();
                break;
            case 4:
                medicine_info();
                break;
            case 5:
               report();
                break;
            case 6:
                complain();
            case 7:
                service();
                break;
            case 8:
                     printf("\n\t\t\t");
   system("pause");
   front_page();
   break;
                 default:
        printf("\n\n\n\t\t\tno match found");
        printf("\n\t\t\tPress 1 for Log out");
        scanf("%d",&choice);
        if(choice==1);
        {
            printf("\n\n\t\t\tThanks");
            front_page();
        }

         }
}

int cost(void)
{
      loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Cost \xdb");
    printf("\n\t\t\t\=========================");
printf("\n\t\t\t1:Addmission fee : 10,000");
printf("\n\t\t\t2:Doctor fee : 1000");
printf("\n\t\t\t3: CT Scan : 10000");
printf("\n\t\t\t4: ENT Procedure : 7000");
printf("\n\t\t\t5: ENT Surgery : 54500");
printf("\n\t\t\t6: IVF Procedure :8500");
printf("\n\t\t\t7:Normal Delivery Package : 46,500");
printf("\n\t\t\t8.Blood test : 700");
printf("\n\t\t\t9:Urine test : 500");
printf("\n\t\t\t10:X-ray : 1000");
printf("\n\t\t\t11:MRI : 7000");
printf("\n\t\t\t12:Bed cost : 12000");
printf("\n\t\t\t13:ICU Cost : 40000");
printf("\n\t\t\t14:NICU cost : 30000");
printf("\n\t\t\t15: Ultrasonography :700");
printf("\n\t\t\t16: ECG :1200");
printf("\n\t\t\t17: Urine test :500");
printf("\n\t\t\t18:ORTHOPEDIC SERGERY:25000");
printf("\n\t\t\t19CARDIOLOGY SERGERY:30000");
printf("\n\t\t\t20:HURT SERGERY:52000");
printf("\n\t\t\t21:DNA TEST:2000");

   printf("\n\t\t\t");
   system("pause");
   patient_menu();


}
int medicine_info(void)
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Medicine Info \xdb");
    printf("\n\t\t\t\=========================");
    char me[100];
    fflush(stdin);
    printf("\n\n\t\t\tEnter MEdicine Name:");
    gets(me);
      if(strcmp(me, "Entacyd")==0)
    {
        loading();
        system("cls");
        title();
        printf("\n");

        printf("\n\t\tPower = Aluminium Hydroxide 250 mg + Magnesium Hydroxide 400 mg Tablet\n");
        printf("\n\t\tPrice=0.80tk (per piece)");
    }
    else if(strcmp(me,"Napa")==0)

    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\n\t\tPower = Paracetamol 500 mg\n");
        printf("\n\n\t\tPrice = 1.00tk (per piece)");
    }
    else if(strcmp(me,"Losectil")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Omeprazole 10mg, 20mg & 40mg/capsule \n");
        printf("\n\t\tprice = 5.00tk (per piece)");
    }
    else if(strcmp(me,"Sergel")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = E50meprazole INN 20mg/capsule\n");
        printf("\n\t\tPrice = 7.00tk (per piece)");
    }
    else if(strcmp(me,"Ace")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Caffeine 65 mg + Paracetamol 500 mg\n");
        printf("\n\t\tPrice = 2.00tk (per piece)");
    }
    else if(strcmp(me,"Flagyl")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Metronidazole 200mg & 400mg \n");
        printf("\nPrice = 3.00tk (per piece)");
    }
    else if(strcmp(me,"Fymoxil")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Amoxycillin 250mg & 500mg/tablet\n");
        printf("\n\t\tPrice = 4.00tk (per piece)");
    }
    else if(strcmp(me,"Thyrox")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Levothyroxine Sodium 100 mcg\n");
        printf("\n\t\tPrice = 2.00tk (per piece)");
    }
    else if(strcmp(me,"Sipocard")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tpower =  Spironolactone 100 mg Tablet\n");
        printf("\n\t\tPrice = 18.00tk (per piece)");

    }
    else if(strcmp(me,"Filmet")==0)
    {
        loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Metronidazole 400 mg Tablet\n");
        printf("\n\t\tPrice = 1.50tk (per piece)");
    }
    else if(strcmp(me,"Seclo")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Omeprazole 20mg & 40mg/capsule \n");
        printf("\n\t\tprice = 5.00tk (per piece)");

    }
    else if(strcmp(me,"Uromax D")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Tamsulosin Hydrochloride 400 mcg Capsule\n");
        printf("\n\t\tPrice = 20tk (per piece)");

    }
    else if(strcmp(me,"Omidon")==0)
    {
           loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Domperidone 10 mg Tablet\n");
        printf("\n\t\tPrice = 2.00tk (per piece)");

    }
     else if(strcmp(me,"Fenatrol")==0)
    {
                loading();
        system("cls");
        title();
        printf("\n");
        printf("\n\t\tPower = Fenofibrate,145mg\n");
        printf("\n\t\tPrice = 8.00tk (per piece)");

    }
     else if(strcmp(me,"Algin")==0)
    {
              loading();
        system("cls");
        title();
        printf("\n");

        printf("\n\t\tPower = Tiemonium Methylsulphate 50 mg Tablet\n");
        printf("\n\t\tPrice = 6.00tk (per piece)");

    }
     else if(strcmp(me,"Fimoxyl")==0)
    {
            loading();
        system("cls");
        title();
        printf("\n");

        printf("\n\t\tPower = Amoxycillin 125mg/5ml: suspension \n");
        printf("\n\t\tPrice = 48.00tk (per piece)");

    }
    else
    {
        printf("\n\t\t\tYou have entered the wrong number");
    }
   printf("\n\t\t\t");
   system("pause");
   patient_menu();

}
int report(void)
{

c=0;

    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb ConTruct Us \xdb");
    printf("\n\t\t\t\=========================");
fp=fopen("contract.txt","w");
    fprintf(fp,"\n\n\t\tAddress: A-91/3,Dhanmondi,AB road-2/3,Dhaka-1205,Bangladesh");
    fprintf(fp,"\n\n\t\tCare line 16060 (for appointment & emergency) ");
    fprintf(fp,"\n\n\t\t\tPhone no:");
    fprintf(fp,"\n\t\t\t*********");
    fprintf(fp,"\n\t\t\t+88 02 814245 (8 Numbers), +88 02 814157 (8 Numbers)");
    fprintf(fp,"\n\t\t\t+88 02 814440 (8 Numbers), +88 02 814233 (8 Numbers) ");
    fprintf(fp,"\n\n\t\t\tEMERGENCY LAND PHONE");
    fprintf(fp,"\n\t\t\t====================");
    fprintf(fp,"\n\t\t\t+88 02 8144465,  +88 02 8144476,  +88 02 8144487");
    fprintf(fp,"\n\t\t\tFAX : +88 02 9118922(General), +88 02 9114344(Commercial)");
    fprintf(fp,"\n\n\n\t\tNeedful Extension Numbers are:");
    fprintf(fp,"\n\t\t\tInformation Desk : 2003, 2004");
    fprintf(fp,"\n\t\t\tPatient Services : 2011");
    fprintf(fp,"\n\t\t\tNursing Services : 1091, 1097, 1087");
    fprintf(fp,"\n\n\t\t\t\t\xdb Offcial Details \xdb");
    fprintf(fp,"\n\n\n\t\t\tMD. Anik Islam");
    fprintf(fp,"\n\t\t\tFounder and Director of ABC Hospital");
    fprintf(fp,"\n\t\t\tTel: 880-2-8144400 (PABX) Extn: 1509");
    fprintf(fp,"\n\t\t\tE-mail: Anik@abchospital.com");
    fprintf(fp,"\n\n\n\t\t\tS. MD. Mahmudul Hasan");
    fprintf(fp,"\n\t\t\tCAO, ABC Hospital ltd.");
    fprintf(fp,"\n\t\t\tTel: 880-2-8144400 (PABX) Extn: 1516,");
    fprintf(fp,"\n\t\t\tE-mail: Mahmudul@abchospital.com");
    fprintf(fp,"\n\n\n\t\t\tBilling & Business Office ");
    fprintf(fp,"\n\n\t\t\tMD. Arman Hauqe Asik");
    fprintf(fp,"\n\t\t\tManager business office");
    fprintf(fp,"\n\t\t\tTel: 880-2-8144400 (PABX) Extn: 3136,");
    fprintf(fp,"\n\t\t\tE-mail: Asik@abchospital.com");
fclose(fp);
fp=fopen("contract.txt","r");
for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
fclose(fp);

printf("\n\t\t\t");
system("pause");
patient_menu();
}
int complain(void)
{
  char ne[100];
  char co[150];
  printf("\n\n\n\t\t\tDo You Have any complain??");
  printf("\n\t\t\tPress 1 for comment");
  printf("\n\t\t\tPress 2 for back");
  printf("\n\t\t\tPress your choice:");
  scanf("%d",&choice);
  if (choice==1)
  {
      loading();
      system("cls");
      title();

      printf("\n\n\t\t\t\=========================");
      printf("\n\t\t\t    \xdb Complain \xdb");
      printf("\n\t\t\t\=========================");
      printf("\n\t\t\tEnter Your Name:");
      fflush(stdin);
      gets(ne);
      printf("\n\t\t\tWrite Your Comment:");
      gets(co);
      fp=fopen("complan.txt","a");
      fprintf(fp,"\nName:%s",ne);
      fprintf(fp,"\nComment:%s",co);
      fclose(fp);

  }
  else
  {
      printf("\n\t\t\t");
      system("pause");
      patient_menu();
  }
       printf("\n\t\t\t");
   system("pause");
   patient_menu();
}
int service(void)
{
   loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Service \xdb");
    printf("\n\t\t\t\=========================");

    printf("\n\n\n");
printf("\n\t\t\tABC Hospital Air & Ground Ambulance Services");
printf("\n\t\t\tABC Hospital Air & Ground Ambulance Services provide the link in every corner of the country.");
printf("\n\t\t\tOur Service work hard to take the ambulances quickly as possible to any corner of country.");
printf("\n\t\t\tFacilities of ABC Hospital Air & Ground Ambulance Services: ");
printf("\n\t\t\t24 hours a day, 7 days a week.");
printf("\n\t\t\tGround Ambulance Service: A fleet of total 6 ambulances.");
printf("\n\t\t\tABC Air Ambulance Helicopter (a brand new Bell 407, USA).");
printf("\n\t\t\tThe only fully functional Helipad on the roof of ABC Hospital.");
printf("\n\t\t\tLife support system of ABC Hospital Air & Ground Ambulance Services includes:");
printf("\n\t\t\tA team of specially trained people - doctors, paramedics and nurses.");
printf("\n\t\t\tThe Air & Ground Ambulance medical team is equipped with range of drugs,surgical kits etc.");
printf("\n\t\t\tOur Ambulance Services goes with the necessary equipments so the treatment can start straight.");
printf("\n\t\t\tFor ABC Ambulance, Call: ");
printf("\n\t\t\t+8801713377777, +8801713377788, +88028144477, +88028159477");
printf("\n\t\t\tFor ABC Air Ambulance, Call:");
printf("\n\t\t\t+8801730011734, +88028859007");







printf("\n\t\t\t");
   system("pause");
   patient_menu();
}
int log_out(void)
{
    loading();
    system("cls");
    title();
    printf("\n\t\t\tDo You want to log out??");
    printf("\n\t\t\tPress 1 to log Out");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("\n\t\t\tYou are successfully log out");
        printf("\n\n\t\t\tThanks");
        printf("\n");
        getch();
        front_page();
    }
    else
    {
        admin_menu();
    }
}

int SetCursorPosition(int x, int y){ //Set console output cursor position (abscissa = 5-163 & ordinate = 5-52)

    Coordinate.X = x;
    Coordinate.Y = y;

    HANDLE StdOutputHandle;
    StdOutputHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(StdOutputHandle, Coordinate);

    return 0;
}

int doc_log()
{
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Doctor Sign In \xdb");
    printf("\n\t\t\t\=========================");
        int i, re=0, optioon=0;
        FILE *fp1,*fp2;
        fflush(stdin);
        char name1[30], passw[30];
        printf("\n\n\t\t\t\Doctor Id: ");
        fgets(name1, 30, stdin);
        printf("\n\t\t\t\PassWord: ");
        fgets(passw, 30, stdin);
        fp1 = fopen("doc_reg.bin","rb+");
        fread(&do2, sizeof(do2), 1, fp1);
        fclose(fp1);
        for(i=0;i<100;++i)
            {
            if ((0==strcmp(name1,do2[i].dname)) && (0==strcmp(passw,do2[i].dpass)))
                {
                printf("\nCorrect Name & Password");
                printf("\n");
                i=100;
                optioon=1;
                }
            }
            printf("\n\t\t\t");
            system("pause");
            if(optioon==1)
            {
            fflush(stdin);
            printf("\n\t\t\tEnter Your Code:");
            scanf("%d",&de);
            system("cls");
            doctormenu();
            }
            else{
            printf("\n\t\t\tWrong Password");
            printf("\n\n\t\t\tPlease Contract to the Admin....");
            printf("\n\t\t\t");
            system("pause");
            front_page();
            }

}




int doctormenu()
{
    loading();
    system("cls");
    title();

    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Doctor Menu \xdb");
    printf("\n\t\t\t\=========================");



    printf("\n\n\t\t\t1.Time Schedule");
    printf("\n\t\t\t2.Staff's under doctor");
    printf("\n\t\t\t3.Check Appointment");
    printf("\n\n\t\t\tPress 4 for Log Out");
    fflush(stdin);
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        time();
        break;
    case 2:
       docstaff();
        break;
    case 3:
        serial();
        break;
    case 4:
        system("cls");
        title();
        printf("\n\n\t\t\tYou  are Successfully log out");
        printf("\n\n\t\t\t");
        system("pause");
        front_page();
        break;
    default:
        printf("\n\t\t\tyou Entered the wrong number");
        system("pause");
    }

}

int time()
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Doctor Schedule \xdb");
    printf("\n\t\t\t\=========================");
    if((de==1)||(de==22)||(de==23)||(de==24)||(de==25))
    {
 //   system("cls");
   // printf("\n\t\t\tDr. Abdullah-Al-Safi");
    printf("\n\t\t\tDuty on:Saturday,Thursday(1.00pm-3.00pm)");
    printf("\n\t\t\tRoom no:502MB");
    }
     else if((de==21)||(de==2)||(de==26)||(de==28)||(de==27))
    {
  //  system("cls");

  //  printf("\n\t\t\tDr. Mohammad Safiuddin");
    printf("\n\t\t\tDuty on:Saturday,Tuesday(2.00pm-4.00pm)");
    printf("\n\t\t\tRoom no:602MB");
        }

 else if((de==3)||(de==29)||(de==30)||(de==106)||(de==107))
    {
 //   system("cls");
    //printf("\n\t\t\tDr. Rezoana Rima");
    printf("\n\t\t\tDuty on:Saturday,Wednesday(9.00am-3.00pm)");
    printf("\n\t\t\tRoom no:302MB");
}
 else if((de==4)||(de==34)||(de==45)||(de==48)||(de==37))
    {
  //  system("cls");
   // printf("\n\t\t\tDr. S.K.A. Razzaque");
    printf("\n\t\t\tDuty on:Saturday,Monday(1.00pm-3.00pm)");
    printf("\n\t\t\tRoom no:402MB");
}
else if((de==5)||(de==103)||(de==104)||(de==105)||(de==41))
{

 //   system("cls");
   // printf("\n\t\t\tDr. S.K.A. Razzaque");
    printf("\n\t\t\tDuty on:Saturday,Monday(1.00pm-3.00pm)");
    printf("\n\t\t\tRoom no:402MB");
}
else if((de==42)||(de==43)||(de==46)||(de==47)||(de==49))
{
   // system("cls");
  //  printf("\n\t\t\tDR. Abdullah khan");
    printf("\n\t\t\tDuty on:Sunday(5.00pm-8.00pm)");
    printf("\n\t\t\tRoom no:307MB");
}
else if((de==61)||(de==62)||(de==63)||(de==64)||(de==65))
{
    system("cls");
  //  printf("\n\t\t\tDr.M.A. Shikder");
    printf("\n\t\t\tDuty on:Monday(9.00pm-3.00pm)");
    printf("\n\t\t\tRoom no:502MB");
}
else if((de==7)||(de==66)||(de==67)||(de==24)||(de==25))
{
 //   system("cls");
 //   printf("\n\t\t\tDr. A.S. Mofrehuddin Ahmed");
    printf("\n\t\t\tDuty on:Sunday,Wednesday(1.00pm-5.00pm)");
    printf("\n\t\t\tRoom no:204MB");
}
else if((de==8)||(de==68)||(de==69)||(de==110)||(de==25))
{
 //   system("cls");
//    printf("\n\t\t\tDr. A.S.M. Zakariya");
    printf("\n\t\t\tDuty on:Sunday,Monday,Tuesday(9.00am-3.00pm)");
    printf("\n\t\t\tRoom no:302MB");
}
else if((de==9)||(de==70)||(de==81)||(de==108)||(de==109))
{
 //   system("cls");
  //  printf("\n\t\t\tProfessor Dr. Mansur Habib");
    printf("\n\t\t\tDuty on:Saturday,Wednesday(1.00pm-5.00pm)");
    printf("\n\t\t\tRoom no:201AB");
}
else if((de==10)||(de==82)||(de==83)||(de==24)||(de==25)||(de==107))
{
  //  system("cls");
    //printf("\n\t\t\tProfessor Dr. QuaziDeen Mohammad");
    printf("\n\t\t\tDuty on:Tuesday,Thursday(1.00pm-8.00pm)");
    printf("\n\t\t\tRoom no:502AB");
}
else if((de==6)||(de==22)||(de==23)||(de==84)||(de==85))
{
  //  system("cls");
  //  printf("\n\t\t\tProf. Dr. Sarwar Alam");
    printf("\n\t\t\tDuty on:Saturday,Sunday(9.00am-3.00pm)");
    printf("\n\t\t\tRoom no:404AB");
}
else if((de==129)||(de==22)||(de==23)||(de==87)||(de==86))
{
  //  system("cls");
  //  printf("\n\t\t\tProfessor Dr. Lt. Col. Md. Mofazzel  Hossain");
    printf("\n\t\t\tDuty on:Monday(12.00am-5.00pm)");
    printf("\n\t\t\tRoom no:304AB");
}
else if((de==130)||(de==128)||(de==23)||(de==88)||(de==89))
{
   // system("cls");
    //printf("\n\t\t\tDr. Amit Kapoor");
    printf("\n\t\t\tDuty on:Thursday(9.00am-8.00pm)");
    printf("\n\t\t\tRoom no:402AB");
}
else if((de==127)||(de==126)||(de==101)||(de==102)||(de==90))
{
   // system("cls");
 //   printf("\n\t\t\tDr. Abu Jafar Chowdhury");
    printf("\n\t\t\tDuty on:Monday(5.00pm-9.00pm)");
    printf("\n\t\t\tRoom no:601AB");
}
else if((de==1)||(de==122)||(de==123)||(de==124)||(de==125))
{
  //  system("cls");
  //  printf("\n\t\t\tProfessor Dr. Kh. Abdul Awal");
    printf("\n\t\t\tDuty on:Tuesday(2.00pm-9.00pm)");
    printf("\n\t\t\tRoom no:501MB");
}
else
   printf("\n\n\t\t\tinvalid code");
  printf("\n\t\t\t");
  system("pause");
  doctormenu();
}
int serial()
{
    c=0;
    loading();
    system("cls");
    title();
        printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Appointment List \xdb");
    printf("\n\t\t\t\=========================");
if(de==1)
    {
        fp=fopen("app1.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



   else  if(de==2)
    {
        fp=fopen("app2.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else  if(de==3)
    {
        fp=fopen("app3.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



    else if(de==4)
    {
        fp=fopen("app4.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==5)
    {
        fp=fopen("app5.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==6)
    {
        fp=fopen("app6.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==7)
    {
        fp=fopen("app7.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




 else     if(de==8)
    {
        fp=fopen("app8.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



  else    if(de==9)
    {
        fp=fopen("app9.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==10)
    {
        fp=fopen("app10.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==21)
    {
        fp=fopen("app21.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





  else    if(de==22)
    {
        fp=fopen("app22.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==23)
    {
        fp=fopen("app23.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==24)
    {
        fp=fopen("app24.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




 else     if(de==25)
    {
        fp=fopen("app25.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==26)
    {
        fp=fopen("app26.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==27)
    {
        fp=fopen("app27.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==28)
    {
        fp=fopen("app28.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==29)
    {
        fp=fopen("app29.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==30)
    {
        fp=fopen("app30.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==41)
    {
        fp=fopen("app41.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==42)
    {
        fp=fopen("app42.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==43)
    {
        fp=fopen("app43.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }






   else   if(de==44)
    {
        fp=fopen("app44.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==45)
    {
        fp=fopen("app45.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==46)
    {
        fp=fopen("app46.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==47)
    {
        fp=fopen("app47.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





    else  if(de==48)
    {
        fp=fopen("app48.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





  else    if(de==49)
    {
        fp=fopen("app49.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==50)
    {
        fp=fopen("app50.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==61)
    {
        fp=fopen("app61.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





    else  if(de==62)
    {
        fp=fopen("app62.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==63)
    {
        fp=fopen("app63.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==64)
    {
        fp=fopen("app64.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==65)
    {
        fp=fopen("app65.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==66)
    {
        fp=fopen("app66.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==67)
    {
        fp=fopen("app67.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==68)
    {
        fp=fopen("app68.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==69)
    {
        fp=fopen("app69.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




  else    if(de==70)
    {
        fp=fopen("app70.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==81)
    {
        fp=fopen("app81.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==82)
    {
        fp=fopen("app82.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==83)
    {
        fp=fopen("app83.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==84)
    {
        fp=fopen("app84.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





  else    if(de==85)
    {
        fp=fopen("app85.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==86)
    {
        fp=fopen("app86.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==87)
    {
        fp=fopen("app87.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }






   else   if(de==88)
    {
        fp=fopen("app88.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==89)
    {
        fp=fopen("app89.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else if(de==90)
    {
        fp=fopen("app90.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else if(de==102)
    {
        fp=fopen("app102.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else if(de==103)
    {
        fp=fopen("app103.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



    else if(de==104)
    {
        fp=fopen("app104.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



   else if(de==105)
    {
        fp=fopen("app105.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else if(de==106)
    {
        fp=fopen("app106.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==107)
    {
        fp=fopen("app107.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



    else  if(de==108)
    {
        fp=fopen("app108.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==109)
    {
        fp=fopen("app109.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==110)
    {
        fp=fopen("app110.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==111)
    {
        fp=fopen("app111.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }



 else if(de==122)
    {
        fp=fopen("app122.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==123)
    {
        fp=fopen("app123.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==124)
    {
        fp=fopen("app124.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





     else if(de==125)
    {
        fp=fopen("app125.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




   else   if(de==126)
    {
        fp=fopen("app126.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }






   else   if(de==127)
    {
        fp=fopen("app127.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }




    else  if(de==128)
    {
        fp=fopen("app128.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





   else   if(de==129)
    {
        fp=fopen("app129.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }





    else  if(de==130)
    {
        fp=fopen("app130.txt","r");
        for(i=0;c!=EOF;++i)
        {
            c=getc(fp);
            printf("%C",c);
        }
        fclose(fp);
    }
else
    printf("\n\t\t\tInvalid Code");
printf("\n\t\t\t");
system("pause");
doctormenu();



}
int checkdoctorreg()
{
    loading();
    system("cls");
    title();
    fp1 = fopen("doc_reg.bin","rb+");
    fread(&do2, sizeof(do2), 1, fp1);
    fclose(fp1);
    for(i=0;i<=dc+1;++i)
    {
        printf("\n\t\t\tUSID:");
        puts(do2[i].dname);
        printf("\n\t\t\tPassword:");
        puts(do2[i].dpass);
        printf("\n\t\t\tcode:");
        puts(do2[i].code);
    }
}
int checkPateientreg()
{
    loading();
    system("cls");
    title();
    fp1 = fopen("poppy.bin","rb+");
    fread(&cust, sizeof(cust), 1, fp1);
    fclose(fp1);
    for(i=0;i<pc;++i)
    {
        printf("\n\t\t\tUSID:");
        fflush(stdin);
        puts(cust[i].name);
        printf("\n\t\t\tPassword:");
        puts(cust[i].pass);
    }
}
int docstaff()
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Staff \xdb");
    printf("\n\t\t\t\=========================");
  if((de==1)||(de==22)||(de==23)||(de==24)||(de==25))
{
   // system("cls");
    printf("\n\t\t\tDr. Abdullah-Al-Safi");
    printf("\n\t\t\tStaff: Tarek Ahmed ");
}
else if((de==122)||(de==123)||(de==124)||(de==125))
{
  //  system("cls");
    printf("\n\t\t\tDr. Mohammad Safiuddin");
    printf("\n\t\t\tStaff: Sahadat Hossain");
}
else if((de==127)||(de==126)||(de==101)||(de==102)||(de==90))
{
//system("cls");
    printf("\n\t\t\tDr. Rezoana Rima");
    printf("\n\t\t\tStaff: Ekram Hasan ");
}
else if((de==130)||(de==128)||(de==23)||(de==88)||(de==89))
{
  //  system("cls");
    printf("\n\t\t\tDr. S.K.A. Razzaque");
    printf("\n\t\t\tStaff: Mahin Hasan ");
}
else if((de==129)||(de==22)||(de==23)||(de==87)||(de==86))
{
  //  system("cls");
    printf("\n\t\t\tDR. Abdullah khan");
   printf("\n\t\t\tStaff: Sujon Ahmed");
}
else if((de==6)||(de==22)||(de==23)||(de==84)||(de==85))
{
   // system("cls");
    printf("\n\t\t\tDr.M.A. Shikder");
   printf("\n\t\t\tStaff: Saif Uddin");
}
else if((de==10)||(de==82)||(de==83)||(de==24)||(de==25)||(de==107))
{
   // system("cls");
    printf("\n\t\t\tDr. A.S. Mofrehuddin Ahmed");
    printf("\n\t\t\tStaff: Afroja khatun ");
}
else if((de==9)||(de==70)||(de==81)||(de==108)||(de==109))
{
  //  system("cls");
    printf("\n\t\t\tDr. A.S.M. Zakariya");
    printf("\n\t\t\tStaff: Suchitra Ahmed");
}
else if((de==8)||(de==68)||(de==69)||(de==110)||(de==2))
{
   // system("cls");
    printf("\n\t\t\tProfessor Dr. Mansur Habib");
   printf("\n\t\t\tStaff: Choitey Ahmed");
}
else if((de==7)||(de==66)||(de==67)||(de==24)||(de==25))
{
   // system("cls");
    printf("\n\t\t\tProfessor Dr. QuaziDeen Mohammad");
    printf("\n\t\t\tStaff: Mithila Mou");
}
else if((de==61)||(de==62)||(de==63)||(de==64)||(de==65))
{
    //system("cls");
    printf("\n\t\t\tProf. Dr. Sarwar Alam");
    printf("\n\t\t\tStaff: Emon Hasan");
}
else if((de==42)||(de==43)||(de==46)||(de==47)||(de==49))
{
   // system("cls");
    printf("\n\t\t\tProfessor Dr. Lt. Col. Md. Mofazzel  Hossain");
    printf("\n\t\t\tStaff: Mahbub Hossain");
}
else if((de==5)||(de==103)||(de==104)||(de==105)||(de==41))
{
   // system("cls");
    printf("\n\t\t\tDr. Amit Kapoor");
   printf("\n\t\t\tStaff: Akash Ahmed");
}
 else if((de==4)||(de==34)||(de==45)||(de==48)||(de==37))
{
   // system("cls");
    printf("\n\t\t\tDr. Abu Jafar Chowdhury");
    printf("\n\t\t\tStaff: Jahir Ahmedv");
}
 else if((de==3)||(de==29)||(de==30)||(de==106)||(de==107))
{
    //system("cls");
    printf("\n\t\t\tProfessor Dr. Kh. Abdul Awal");
    printf("\n\t\t\tStaff: Raihan Hasan");
}
else
    printf("\n\t\t\tInvalid Code");
printf("\n\t\t\t");
system("pause");
doctormenu();
}
