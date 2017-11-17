#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

#define cseseat 5
#define eeeseat 7
#define mceseat 6
#define ceeseat 5

void introduction();
void password();
void storinginfo();
void seeinfo();
void load();
void sortedprimarydata();
void cseranklist();
void eeeranklist();
void mceranklist();
void ceeranklist();
char getcher();
void passwordchange();
void totalranking();
void seerank();
void deptallocation();
void showcseranklist();
void showeeeranklist();
void showmceranklist();
void showceeranklist();
void primarydata(double finalscore);
int General_info();


int length;
int p_year,d;
int cseallocation=0,eeeallocation=0,mceallocation=0,ceeallocation=0;
int counting=0;


double SSC_O_grade_sum(int bangla_english_medium_choice);
double HSC_A_grade_sum(int bangla_english_medium_choice);
double exam(int bangla_english_medium_choice);

double SSC_grade,HSC_grade,A_level_grade,O_level_grade;
double finalscore;

struct date
{
    int day;
    int month;
    int year;
} birth;

struct general_information
{
    char name[20];
    char father_name[20];
    char mother_name[20];
    struct date birth;
    char present_address[15];
    char mobile_no[11];
    char email[20];
    int passingyear_h;
    int ssc_roll;
    int hsc_roll;
    char dept_choice1[5];
    char dept_choice2[5];
    char dept_choice3[5];
    char dept_choice4[5];
    char dept;

} General_info_student;


struct SSC_HSC_grade
{
    double SSC_bangla;
    double SSC_english;
    double SSC_math;
    double SSC_religion;
    double SSC_Social_Science;
    double SSC_physics;
    double SSC_chemistry;
    double SSC_compulsory;
    double SSC_optional;

    double HSC_bangla;
    double HSC_english;
    double HSC_physics;
    double HSC_chemistry;
    char HSC_compulsory_name[15];
    double HSC_compulsory;
    char HSC_optional_name[15];
    double HSC_optional;

} SSC_HSC_grade;

struct A_O_level_grade
{
    double A_english;
    double A_math;
    double A_physics;
    double A_chemistry;

    double O_english;
    double O_physics;
    double O_chemistry;
    double O_math;
    double O_another_best_sub;
} A_O_grade;

union grade
{
    struct SSC_HSC_grade SSC_HSC_grade;
    struct A_O_level_grade A_O_grade;
} two_medium_grade;

struct  namemarks
{
    int roll_ssc;
    int roll_hsc;
    double marks;
    char dept1[5];
    char dept2[5];
    char dept3[5];
    char dept4[5];
    char dept[5];
} copy_info[50],department,totalrank[30],ranking,temp;

struct pasword
{
    char admins[15];
    char students[15];
} pssword;




void load2()
{

    int row,col,r,c,q;
    printf("\t\tSorted Student list is loading...Please wait...");
    for(r=1; r<=15; r++)
    {
        for(q=0; q<=10000000; q++);
        printf("%c",178);
    }
    system("cls");





}

void load3()
{
    int row,col,r,c,q;
    printf("\n\n\n\t\t\t\t*********************\n");
    printf("\t\t\t\t*  Student Section  *\n");
    printf("\t\t\t\t*********************\n\n");
    printf("\t\t\t\tLog in Successful");
    printf("\n\t\tAdmission Form is Loading...Please wait...");
    for(r=1; r<=15; r++)
    {
        for(q=0; q<=10000000; q++);
        printf("%c",178);
    }
    printf("\n\n\n");

}


int main()
{
    char process_continue;
    introduction();
    do
    {
        fflush(stdin);
        password();
        fflush(stdin);
        process_continue=getcher();
        fflush(stdin);
        if(process_continue=='Y' || process_continue=='y') system("cls");

        if(process_continue != 'Y' && process_continue != 'y'&& process_continue != 'n'&& process_continue != 'N' )
        {
            system("cls");
            printf("\t\t\tError Input. Try again \t");
            process_continue=getcher();
        }
    }
    while(process_continue!= 'N'  &&  process_continue!= 'n');


    return 0;
}




void introduction()
{
    printf("\n\n\n\t\t\t***************************************\n");
    printf("\t\t\t*    Welcome to  IUT E-Admission      *\n");
    printf("\t\t\t***************************************\n\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\t\tIslamic University of Technology or IUT\n\n \t\t\t\t  is an\n\nEducational and Research institution in Bangladesh run and funded by OIC.It  is\n\nregarded as one of the prestigious institutions for  engineering and  technical\n\neducation in Bangladesh.The main objective of IUT is to contribute in developing\nthe human resources of the member states of the OIC.");
    printf("\n\n--------------------------------------------------------------------------------\n\n");
    printf("Press Any Key to Continue\t");
    char ch=getch();
    system("cls");

}

int General_info()
{
    printf("\n");
    printf("\t\tPlease Enter Your Basic General Information \n\n\n");
    printf("\tEnter Your Name\t\t\t\t:");
    gets(General_info_student.name);
    printf("\n");
    printf("\tEnter Your Father's Name\t\t:");
    gets(General_info_student.father_name);
    printf("\n");
    printf("\tEnter Your Mother's Name\t\t:");
    gets(General_info_student.mother_name);
    printf("\n");
    do
    {
        printf("\tEnter Your Date Of Birth(DD MM YYYY)\t:");
        scanf("%d %d %d",&General_info_student.birth.day,&General_info_student.birth.month,&General_info_student.birth.year);
        if((General_info_student.birth.day>31 || General_info_student.birth.day<1)||(General_info_student.birth.month>12 || General_info_student.birth.month<1)
                ||(General_info_student.birth.year>2000 || General_info_student.birth.year<1971))
        {
            system("cls");
            printf("\n\n\t\t\tSorry Invalid Date. Please Try Again\n\n");

        }

    }
    while((General_info_student.birth.day>31 || General_info_student.birth.day<1) ||(General_info_student.birth.month>12 || General_info_student.birth.month<1)
            ||(General_info_student.birth.year>2000 || General_info_student.birth.year<1971));

    printf("\n");
    fflush(stdin);
    printf("\tEnter Your Present Address\t\t:");
    gets(General_info_student.present_address);
    printf("\n");
    do
    {

        printf("\tEnter Your Mobile No\t\t\t:");
        gets(General_info_student.mobile_no);
        length=strlen(General_info_student.mobile_no);
        if(General_info_student.mobile_no[0]!='0' ||General_info_student.mobile_no[1]!='1' || length!=11)
        {
            system("cls");
            printf("\n\t\t\tInvalid Mobile Number.Please Try Again\n\n\n");

        }
    }
    while(General_info_student.mobile_no[0]!='0' ||General_info_student.mobile_no[1]!='1' || length!=11);

    printf("\n");
    printf("\tEnter Your E-mail\t\t\t:");
    gets(General_info_student.email);
    printf("\n");
    printf("\tEnter Your HSC/A-Level Passing year\t:");
    scanf("%d",&General_info_student.passingyear_h);
    printf("\n");
    printf("\tEnter Your SSC/O-Level Roll Number\t:");
    scanf("%d",&General_info_student.ssc_roll);
    printf("\n");
    printf("\tEnter Your HSC/A-Level Roll Number\t:");
    scanf("%d",&General_info_student.hsc_roll);
    system("cls");
    printf("\n");
    printf("\tEnter Your Department Choice\t\t");
    printf("\n\n\t\t\t\t1.");
    scanf("%s",General_info_student.dept_choice1);
    printf("\n\t\t\t\t2.");
    scanf("%s",General_info_student.dept_choice2);
    printf("\n\t\t\t\t3.");
    scanf("%s",General_info_student.dept_choice3);
    printf("\n\t\t\t\t4.");
    scanf("%s",General_info_student.dept_choice4);
    printf("\n");



    system("cls");
    load3();


    return General_info_student.passingyear_h;



}





void password()
{
    int i,option;

    char test_compulsory[15];
    char test_optional[15];

    int bangla_english_medium_choice;
    char ch;
    double ssc_o_gpa,hsc_a_gpa,finalscore;
    int identity;
    char str1[15],str2[15];

    printf("\t\t\t\t********************\n");
    printf("\t\t\t\t*  Log in Section  *\n");
    printf("\t\t\t\t********************\n\n\n");


    printf("\n\n\n\t\t\tPress:");
    printf("\n");
    printf("\n\t\t\t1.To Log in as Admin\n\n\t\t\t2.To Log in as Student\n\n\t\t\t3.To Terminate the Process\n\n");
    printf("\n");
    printf("\t\t\tEnter Your Choice:");
    scanf("%d",&identity);
    if(identity != 1 && identity != 2 && identity !=3)
    {
        system("cls");
        printf("\t\t\tSorry!!Wrong Choice.Please try again\n");

        password();
    }

    FILE *fp;
    fp=fopen("password.txt","r");
    fscanf(fp,"%s %s",pssword.admins,pssword.students);

    fclose(fp);

    int j=0;

    if(identity==1)
    {
        printf("\t\t\tPlease Enter Your Password:");
        fflush(stdin);
        do
        {
            if((ch=getch()) == 13)
            {
                str2[j]='\0';
                break;
            }
            {
                str2[j]=ch;
                j++;
                printf("*");
                fflush(stdin);
            }
        }
        while(1);



        int i=strcmp(pssword.admins,str2);
        if(i==0)
        {
            system("cls");
            printf("\n\n\n\t\t\t\t************************\n");
            printf("\t\t\t\t*     Admin Section    *\n");
            printf("\t\t\t\t************************\n\n");

            printf("\n\n\t\t\tLog in successful");
            printf("\n\n");
p:
            printf("\t\t\tPress \n\t\t\t 1.To Go Back to Main Menu \n\n\t\t\t 2.To See The Rank\n\n\t\t\t 3.To Change Password\n\n\t\t\t 4.To See Information Of Students");
            printf("\n\n\t\t\tEnter Your Option: ");
            scanf("%d",&option);
            system("cls");
            switch(option)
            {
            case 1:
                password();
                break;

            case 2:
                sortedprimarydata();
                deptallocation();
                seerank();
                break;
            case 3:
                passwordchange();

                break;
            case 4:
                seeinfo();
                break;

            default:
                printf("\t\t\tWrong Input.Try Again\n");
                goto p;
                break;


            }
        }
        else if(i!=0)
        {
            system("cls");
            printf("\n\t\t\t       Sorry!Wrong Password.\n\t\t\t\t Try Again!!\n\n\n");

            password();
        }
    }


    else if(identity==2)
    {
        int k=0;
        char ck;
        printf("\t\t\tPlease Enter Your Password:");
        fflush(stdin);
        do
        {
            if((ck=getch()) == 13)
            {
                str1[k]='\0';
                break;
            }
            {
                str1[k]=ck;
                k++;
                printf("*");
                fflush(stdin);
            }
        }
        while(1);
        printf("\t\t\t");


        fflush(stdin);
        int i=strcmp(pssword.students,str1);
        if(i==0)
        {

            printf("Log in successful");
            printf("\n");
            system("cls");
            load3();

            p_year=General_info();

q:
            printf("\n\t\t\tPress\n\t\t\t1.for Bengali Medium\n\t\t\t2.for English Medium \n");
            printf("\n\t\t\tEnter You Choice: ");
            scanf("%d",&bangla_english_medium_choice);


            printf("\n\n");

            system("cls");

            switch(bangla_english_medium_choice)
            {
            case 1:


                ssc_o_gpa=SSC_O_grade_sum(bangla_english_medium_choice);

                system("cls");

                hsc_a_gpa=HSC_A_grade_sum(bangla_english_medium_choice);
                system("cls");
                for(i=0; i<11; i++)
                {

                    test_compulsory[i]=tolower(two_medium_grade.SSC_HSC_grade.HSC_compulsory_name[i]);
                    test_optional[i]=tolower(two_medium_grade.SSC_HSC_grade.HSC_optional_name[i]);
                }
                test_compulsory[i]='\0';
                test_optional[i]='\0';
                int x=strcmp(test_compulsory,"mathematics");
                int y=strcmp(test_optional,"mathematics");


                if(ssc_o_gpa==5.000000 &&(p_year==2013 || p_year==2014) &&
                        (hsc_a_gpa==5.000000 ||
                         ((hsc_a_gpa>=4.833333 &&hsc_a_gpa<=5.000000) && two_medium_grade.SSC_HSC_grade.HSC_bangla==4)) && (x==0 || y==0))
                {

                    printf("\n\n\n\n\n\t\t\tCongratulations !!! \n\t\tYou are eligible for the Admission Test.\n\t\tPlease wait for the Online Admission Test \n ");
                    printf("\n");
                    load();
                    printf("\n\n");
                    system("cls");
                    printf("\n\n\n\t\t\t************************\n");
                    printf("\t\t\t*  Examintion Section  *\n");
                    printf("\t\t\t************************\n\n");
                    printf("\t\t\tAnswer the Following MCQ Questions\n");
                    printf("\t\t\tEach Question Contains 10 Marks\n\n");

                    finalscore=exam(bangla_english_medium_choice);

                    primarydata(finalscore);





                }
                else printf("\t\t\t\tSorry !!! \n\t\tYou are not eligible for the Admission Test.");

                break;
            case 2:
                ssc_o_gpa=SSC_O_grade_sum(bangla_english_medium_choice);
                system("cls");

                hsc_a_gpa=HSC_A_grade_sum(bangla_english_medium_choice);
                system("cls");
                if(hsc_a_gpa==5.000000 &&(p_year==2013 || p_year==2014) &&
                        (ssc_o_gpa==5.000000 || (ssc_o_gpa>=4.800000 &&
                                                 two_medium_grade.A_O_grade.O_another_best_sub==4)))

                {

                    printf("\n\n\n\n\n\t\t\tCongratulations !!! \n\t\tYou are eligible for the Admission Test.\n\t\tPlease wait for the Online Admission Test \n ");
                    printf("\n");
                    load();
                    printf("\n\n");
                    system("cls");
                    printf("\n");
                    printf("\n\n\n\t\t\t************************\n");
                    printf("\t\t\t*  Examintion Section  *\n");
                    printf("\t\t\t************************\n\n");
                    printf("\t\t\tAnswer the Following MCQ Questions\n \t\t\t  Each Question Contains 10 Marks\n\n");
                    double finalscore=exam(bangla_english_medium_choice);

                    primarydata (finalscore);


                }

                else printf("\t\t\t\tSorry !!!\n\t\tYou are not eligible for the Admission Test.\n");
                break;
            default:
                system("cls");
                printf("\t\t\tSorry!!!Wrong Input");
                goto q;
            }





        }
        else if(i!=0)
        {
            system("cls");

            printf("\n\t\t\t         Sorry!Wrong Password\n\t\t\t\t Try Again\n\n\n\n");

            password();
        }
    }
    else if(identity==3) exit(0);

}






void passwordchange()
{
    printf("\t\t\t***************************\n");
    printf("\t\t\t* Password Change Section *\n");
    printf("\t\t\t***************************\n");

    struct passwords
    {
        char admin[10];
        char student[10];
    } lock;

    int menu;

    FILE *qp;


r:
    printf("\n\n\t\t\tPress\n\t\t\t1.To Go Back to Main Menu\n\t\t\t2.To Change Admin Password\n\t\t\t3.To Change Students Password\n\t\t\t4.To Change Both Password");
    printf("\n\t\t\tEnter Your Choice:");
    scanf("%d",&menu);

    switch(menu)
    {
    case 1:
        system("cls");
        password();
        break;

    case 2:
        qp=fopen("password.txt","w");
        printf("\n\n\t\t\tEnter New Admin Password:");
        scanf("%s",lock.admin);
        fprintf(qp,"%s\n%s",lock.admin,pssword.students);
        fclose(qp);

        break;
    case 3:
        qp=fopen("password.txt","w");
        printf("\n\n\t\t\tEnter New Student Password:");
        scanf("%s",lock.student);
        fprintf(qp,"%s\n%s",pssword.admins,lock.student);
        fclose(qp);
        break;
    case 4:
        qp=fopen("password.txt","w");
        printf("\n\n\t\t\tEnter New Admin Password:");
        scanf("%s",lock.admin);
        printf("\n\n\t\t\tEnter New Student Password:");
        scanf("%s",lock.student);
        fprintf(qp,"%s\n%s",lock.admin,lock.student);
        fclose(qp);
        break;
    default:
        system("cls");
        printf("\t\t\tError Input!!!Try Again");
        goto r;
        break;


    }


}









double SSC_O_grade_sum(int bangla_english_medium_choice)
{

    if(bangla_english_medium_choice==1)
    {
        printf("\t\t\tFill the Form of SSC grade: \n\n");
        printf("Enter the Point Of Bengali\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_bangla);
        printf("\n");
        printf("Enter the Point Of English\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_english);
        printf("\n");
        printf("Enter the Point Of Mathmatics\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_math);
        printf("\n");
        printf("Enter the Point Of Social Science\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_Social_Science);
        printf("\n");
        printf("Enter the Point Of Religion\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_religion);
        printf("\n");
        printf("Enter the Point Of Physics\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_physics);
        printf("\n");
        printf("Enter the Point Of Chemistry\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_chemistry);
        printf("\n");
        printf("Enter the Point Of Compulsory\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_compulsory);
        printf("\n");
        printf("Enter the Point Of Optional\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.SSC_optional);
        printf("\n");

        SSC_grade=two_medium_grade.SSC_HSC_grade.SSC_bangla+ two_medium_grade.SSC_HSC_grade.SSC_chemistry+ two_medium_grade.SSC_HSC_grade.SSC_compulsory+ two_medium_grade.SSC_HSC_grade.SSC_english+ two_medium_grade.SSC_HSC_grade.SSC_math+ two_medium_grade.SSC_HSC_grade.SSC_optional+ two_medium_grade.SSC_HSC_grade.SSC_physics+ two_medium_grade.SSC_HSC_grade.SSC_religion+ two_medium_grade.SSC_HSC_grade.SSC_Social_Science;
        return (SSC_grade/9.0);
    }
    else if(bangla_english_medium_choice==2)
    {

        printf("\t\t\tFill the Form of O level grade : \n\n");
        printf("Enter the Point of English\t\t:");
        scanf("%lf",& two_medium_grade.A_O_grade.O_english);
        printf("\n");
        printf("Enter the Point of Physics\t\t:");
        scanf("%lf",& two_medium_grade.A_O_grade.O_physics);
        printf("\n");
        printf("Enter the Point of Chemistry\t\t:");
        scanf("%lf",& two_medium_grade.A_O_grade.O_chemistry);
        printf("\n");
        printf("Enter the Point of Mathematics\t\t:");
        scanf("%lf",& two_medium_grade.A_O_grade.O_math);
        printf("\n");
        printf("Enter the Point of Another Best Subject\t:");
        scanf("%lf",& two_medium_grade.A_O_grade.O_another_best_sub);
        printf("\n");

        O_level_grade= two_medium_grade.A_O_grade.O_english+two_medium_grade.A_O_grade.O_physics +two_medium_grade.A_O_grade.O_chemistry+two_medium_grade.A_O_grade.O_math+two_medium_grade.A_O_grade.O_another_best_sub;

        return (O_level_grade/5.0);
    }
}










double HSC_A_grade_sum(int bangla_english_medium_choice)
{

    if(bangla_english_medium_choice==1)
    {
        printf("\t\t\tFill the Form of HSC grade : \n\n");
        printf("Enter the Point of Bengali\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.HSC_bangla);
        printf("\n");
        printf("Enter the Point of English\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.HSC_english);
        printf("\n");
        printf("Enter the Point of Physics\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.HSC_physics);
        printf("\n");
        printf("Enter the Point of Chemistry\t\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.HSC_chemistry);
        printf("\n");
        printf("Enter the name of Compulsory Subject\t:");
        scanf("%s",two_medium_grade.SSC_HSC_grade.HSC_compulsory_name);
        printf("\n");
        printf("Enter the Point of Compulsory Subject\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.HSC_compulsory);
        printf("\n");
        printf("Enter the name of Optional Subject\t:");
        scanf("%s",two_medium_grade.SSC_HSC_grade.HSC_optional_name);
        printf("\n");
        printf("Enter the Point of Optional Subject\t:");
        scanf("%lf",&two_medium_grade.SSC_HSC_grade.HSC_optional);
        printf("\n");
        HSC_grade=two_medium_grade.SSC_HSC_grade.HSC_bangla+
                  two_medium_grade.SSC_HSC_grade.HSC_english+
                  two_medium_grade.SSC_HSC_grade.HSC_physics +
                  two_medium_grade.SSC_HSC_grade.HSC_chemistry+
                  two_medium_grade.SSC_HSC_grade.HSC_compulsory+
                  two_medium_grade.SSC_HSC_grade.HSC_optional;

        return (HSC_grade/6.0);
    }
    else if(bangla_english_medium_choice==2)
    {
        printf("\t\t\tFill the Form of A level grade: \n\n");
        printf("Enter the Point Of English\t\t:");
        scanf("%lf",&two_medium_grade.A_O_grade.A_english);
        printf("\n");
        printf("Enter the Point Of Mathmatics\t\t:");
        scanf("%lf",&two_medium_grade.A_O_grade.A_math);
        printf("\n");
        printf("Enter the Point Of Physics\t\t:");
        scanf("%lf",&two_medium_grade.A_O_grade.A_physics);
        printf("\n");
        printf("Enter the Point Of Chemistry\t\t:");
        scanf("%lf",&two_medium_grade.A_O_grade.A_chemistry);
        printf("\n");

        A_level_grade= two_medium_grade.A_O_grade.A_chemistry+
                       two_medium_grade.A_O_grade.A_english+
                       two_medium_grade.A_O_grade.A_math+ two_medium_grade.A_O_grade.A_physics;
        return (A_level_grade/4.0);
    }

}












void load()
{
    int row,col,r,c,q;
    printf("loading...Please wait...");
    for(r=1; r<=15; r++)
    {
        for(q=0; q<=10000000; q++);
        printf("%c",178);

    }

}






double exam(int bangla_english_medium_choice)
{

    int i,j,random_question[20],k,flag,random;
    double exam_score=0,final_score;
    char students_answer;
    struct exam
    {
        int question_serial_no;
        char question[100];
        char option_no_1[3];
        char option_1_ans[20];
        char option_no_2[3];
        char option_2_ans[20];
        char option_no_3[3];
        char option_3_ans[20];
        char option_no_4[3];
        char option_4_ans[20];
        char answer;

    } question_details[20];

    srand(time(NULL));

    FILE *fp=fopen("Question.txt","r");

    for(j=0; j<10; j++)
    {

        do
        {
            random= rand()%20+1;
            random_question[j]=random;
            flag=0;

            for(k=0; k<=j-1; k++)
            {
                if(random_question[k]==random_question[j]) flag=1;
            }

        }
        while(flag==1);

        for(i=0; i<20; i++)
        {


            fscanf(fp,"%d %[^\n] %s %[^\n] %s %[^\n] %s %[^\n] %s %[^\n] %c",
                   &question_details[i].question_serial_no, question_details[i].question,
                   question_details[i].option_no_1, question_details[i].option_1_ans,
                   question_details[i].option_no_2, question_details[i].option_2_ans,
                   question_details[i].option_no_3, question_details[i].option_3_ans,
                   question_details[i].option_no_4, question_details[i].option_4_ans, &question_details[i].answer);
            if(random==question_details[i].question_serial_no)
            {
                printf("%d %s\n %s %s\n %s %s\n %s %s\n %s %s\n",
                       j+1,question_details[i].question, question_details[i].option_no_1,
                       question_details[i].option_1_ans, question_details[i].option_no_2,
                       question_details[i].option_2_ans, question_details[i].option_no_3,
                       question_details[i].option_3_ans, question_details[i].option_no_4,
                       question_details[i].option_4_ans );

                printf("Your Answer:\t");
                fflush(stdin);
                scanf("%c",&students_answer);
                fflush(stdin);
                printf("\n\n");

                if(students_answer == question_details[i].answer) exam_score=exam_score+10;

            }

        }
    }
    if(bangla_english_medium_choice==1)
    {
        double final_score=exam_score+(SSC_grade/9.0)*8+(HSC_grade/6.0)*12;
        printf("Your Final Score: %lf",final_score);
        finalscore=final_score;
        storinginfo();
        return final_score;
    }

    else if(bangla_english_medium_choice==2)
    {
        double final_score=exam_score+(A_level_grade/4.0)*12+(O_level_grade/5.0)*8;
        printf("Your Final Score: %lf",final_score);

        finalscore=final_score;
        storinginfo();

        return final_score;
    }

    fclose(fp);
}








char getcher()
{
    printf("\n\n\n\t\tPress\n\t\t'Y' or 'y' for Continuing the Process\n\t\t'N' or 'n' for Stopping the Process: ");
    char ch;
    ch=getche();
    return ch;
}



void primarydata(double finalscore)
{
    FILE *ps=fopen("primarydata.txt","a");


    fprintf(ps,"%d %d %lf %s %s %s %s\n",General_info_student.ssc_roll,General_info_student.hsc_roll,finalscore,General_info_student.dept_choice1
            ,General_info_student.dept_choice2,General_info_student.dept_choice3,General_info_student.dept_choice4);
    fclose(ps);




}
void seerank()
{
    int choice;
r:
    printf("\n\t\t\tPress\n\t\t\t1.To See CSE Ranklist\n\t\t\t2.To See EEE Ranklist\n\t\t\t3.To See MCE Ranklist\n\t\t\t4.To See CEE Ranklist\n\t\t\t5.To See Total Ranklist\n\t\t\t6.To Go Back To Main Menu\n\n");
    printf("\t\t\tEnter Your Choice\t");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        system("cls");
        printf("\n\n");
        showcseranklist();
        break;
    case 2:
        system("cls");
        printf("\n\n");
        showeeeranklist();
        break;
    case 3:
        system("cls");
        printf("\n\n");
        showmceranklist();
        break;
    case 4:
        system("cls");
        printf("\n\n");
        showceeranklist();
        break;
    case 5:
        system("cls");
        printf("\n\n");
        totalranking();
        break;
    case 6:
        system("cls");
        password();
        break;
    default:
        system("cls");
        printf("\n\t\t\tError Input.Please,Try Again");
        goto r;
        break;
    }
}





void sortedprimarydata()
{
    FILE *zr, *pr;



    int m,n,l=0,count=0;
    zr=fopen("primarydata.txt","r");
    pr=fopen("sortedprimarydata.txt","w");


    while(fscanf(zr,"%d %d %lf %s %s %s %s",
                 &copy_info[l].roll_ssc,
                 &copy_info[l].roll_hsc,&copy_info[l].marks,copy_info[l].dept1,
                 copy_info[l].dept2,copy_info[l].dept3,copy_info[l].dept4) != EOF)
    {


        count++;
        if(l>0)
        {
            for(m=0; m<count-1; m++)
                for(n=m+1; n<count; n++)
                    if(copy_info[m].marks<copy_info[n].marks)
                    {
                        temp=copy_info[m];
                        copy_info[m]=copy_info[n];
                        copy_info[n]=temp;
                    }


        }
        l++;




    }
    for(l=0; l<count; l++)
    {
        fprintf(pr,"%d %d %.2lf %s %s %s %s\n",copy_info[l].roll_ssc,copy_info[l].roll_hsc,copy_info[l].marks,copy_info[l].dept1,
                copy_info[l].dept2,copy_info[l].dept3,copy_info[l].dept4);

    }
    printf("\n\n\n");
    fclose(pr);
    fclose(zr);
}
void storinginfo()
{

    FILE *store;
    store=fopen("infostorage.txt","a");
    fprintf(store,"%s\n%s\n%s\n%d %d %d\n%s\n%d\n%s\n%d\n%d\n%d\n%lf\n%s\n%s\n%s\n%s\n\n\n\n",General_info_student.name,
            General_info_student.father_name,General_info_student.mother_name,General_info_student.birth.day,
            General_info_student.birth.month,General_info_student.birth.year,General_info_student.present_address,
            General_info_student.mobile_no,General_info_student.email
            ,General_info_student.passingyear_h,General_info_student.ssc_roll,General_info_student.hsc_roll,finalscore
            ,General_info_student.dept_choice1,General_info_student.dept_choice2,General_info_student.dept_choice3,General_info_student.dept_choice4
           );
    fclose(store);

}
void seeinfo()
{

    int sscroll,hscroll;
    FILE *store;
    int glaf=0;
    printf("\t\t\t***************************\n");
    printf("\t\t\t*  Information of Student *\n");
    printf("\t\t\t***************************\n");



    store=fopen("infostorage.txt","r");
    printf("\n\tEnter The S.S.C roll Number of the Student\t:");
    scanf("%d",&sscroll);
    printf("\n\tEnter The H.S.C roll Number of the Student\t:");
    scanf("%d",&hscroll);

    while(fscanf(store," %[^\n] %[^\n] %[^\n] %d %d %d %[^\n] %d %s %d %d %d %lf %s %s %s %s",General_info_student.name,
                 General_info_student.father_name,General_info_student.mother_name,&General_info_student.birth.day,
                 &General_info_student.birth.month,&General_info_student.birth.year,General_info_student.present_address,
                 &General_info_student.mobile_no,General_info_student.email
                 ,&General_info_student.passingyear_h,&General_info_student.ssc_roll,&General_info_student.hsc_roll,&finalscore
                 ,General_info_student.dept_choice1,General_info_student.dept_choice2,General_info_student.dept_choice3,General_info_student.dept_choice4) !=EOF)
    {


        if(General_info_student.ssc_roll==sscroll && General_info_student.hsc_roll==hscroll)
        {
            fprintf(stdout,"\n\n\tName\t\t:%s\n\n\tFathers Name\t:%s\n\n\tMothers Name\t:%s\n\n\tDate Of Birth\t:%d %d %d\n\n\tAddress\t\t:%s\n\n\tMobile No\t:%d\n\n\tE-mail\t\t:%s\n\n\tS.S.C Roll\t:%d\n\n\tH.S.C Roll\t:%d\n\n\tPassing Year\t:%d\n\n\tTotal Marks\t:%lf\n\n\tDept Choice 1\t:%s\n\n\tDept Choice 2\t:%s\n\n\tDept Choice 3\t:%s\n\n\tDept Choice 4\t:%s\n\n\n",General_info_student.name,
                    General_info_student.father_name,General_info_student.mother_name,General_info_student.birth.day,
                    General_info_student.birth.month,General_info_student.birth.year,General_info_student.present_address,
                    General_info_student.mobile_no,General_info_student.email
                    ,General_info_student.passingyear_h,General_info_student.ssc_roll,General_info_student.hsc_roll,finalscore,
                    General_info_student.dept_choice1,General_info_student.dept_choice2,General_info_student.dept_choice3,General_info_student.dept_choice4);
            glaf=1;
        }

    }

    if(glaf==0) printf("\n\n\t\t\tSorry!!! Error SSC or HSC Roll Number\n\t\t\t Please!! Try Again");

    fclose(store);

}


void deptallocation()
{
    FILE *fp=fopen("sortedprimarydata.txt","r");
    int i;

    while(fscanf(fp,"%d %d %lf %s %s %s %s",&department.roll_ssc,&department.roll_hsc,&department.marks,&department.dept1,&department.dept2
                 ,&department.dept3,&department.dept4)!=EOF)
    {
        for(i=0; i<3; i++)
        {
            department.dept1[i]=tolower(department.dept1[i]);
            department.dept2[i]=tolower(department.dept2[i]);
            department.dept3[i]=tolower(department.dept3[i]);
            department.dept4[i]=tolower(department.dept4[i]);

        }
        department.dept1[i]='\0';
        department.dept2[i]='\0';
        department.dept3[i]='\0';
        department.dept4[i]='\0';

        if((strcmp(department.dept1,"cse")==0))
        {
            if(cseallocation<cseseat) cseranklist();
            else if(strcmp(department.dept2,"eee")==0)
            {
                if(eeeallocation<eeeseat) eeeranklist();
                else if(strcmp(department.dept3,"mce")==0)
                {
                    if(mceallocation<mceseat) mceranklist();
                    else if(strcmp(department.dept4,"cee")==0)
                    {
                        if(ceeallocation<ceeseat) ceeranklist();
                    }
                }
                else if(strcmp(department.dept3,"cee")==0)
                {
                    if(ceeallocation<ceeseat) ceeranklist();
                    else if(strcmp(department.dept4,"mce")==0)
                    {
                        if(mceallocation<mceseat) mceranklist();
                    }

                }
            }
            else if(strcmp(department.dept2,"mce")==0)
            {
                if(mceallocation<mceseat) mceranklist();
                else if(strcmp(department.dept3,"eee")==0)
                {
                    if(eeeallocation<eeeseat) eeeranklist();
                    else if(strcmp(department.dept4,"cee")==0)
                    {
                        if(ceeallocation<ceeseat) ceeranklist();
                    }
                }
                else if(strcmp(department.dept3,"cee")==0)
                {
                    if(ceeallocation<ceeseat) ceeranklist();
                    else if(strcmp(department.dept4,"eee")==0)
                    {
                        if(eeeallocation<eeeseat) eeeranklist();
                    }
                }
            }
            else if(strcmp(department.dept2,"cee")==0)
            {
                if(ceeallocation<ceeseat) ceeranklist();
                else if(strcmp(department.dept3,"mce")==0)
                {
                    if(mceallocation<mceseat) mceranklist();
                    else if(strcmp(department.dept4,"eee")==0)
                    {
                        if(eeeallocation<eeeseat) eeeranklist();
                    }
                }
                else if(strcmp(department.dept3,"eee")==0)
                {
                    if(eeeallocation<eeeseat) eeeranklist();
                    else if(strcmp(department.dept4,"mce")==0)
                    {
                        if(mceallocation<mceseat) mceranklist();
                    }
                }


            }

        }
        else if(strcmp(department.dept1,"eee")==0)
        {

            if(eeeallocation<eeeseat) eeeranklist();
            else if(strcmp(department.dept2,"cse")==0)
            {
                if(cseallocation<cseseat) cseranklist();
                else if(strcmp(department.dept3,"mce")==0)
                {
                    if(mceallocation<mceseat) mceranklist();
                    else if(strcmp(department.dept4,"cee")==0)
                    {
                        if(ceeallocation<ceeseat) ceeranklist();
                    }
                }
                else if(strcmp(department.dept3,"cee")==0)
                {
                    if(ceeallocation<ceeseat) ceeranklist();
                    else if(strcmp(department.dept4,"mce")==0)
                    {
                        if(mceallocation<mceseat) mceranklist();
                    }

                }
            }
            else if(strcmp(department.dept2,"mce")==0)
            {
                if(mceallocation<mceseat) mceranklist();
                else if(strcmp(department.dept3,"cse")==0)
                {
                    if(cseallocation<cseseat) cseranklist();
                    else if(strcmp(department.dept4,"cee")==0)
                    {
                        if(ceeallocation<ceeseat) ceeranklist();
                    }
                }
                else if(strcmp(department.dept3,"cee")==0)
                {
                    if(ceeallocation<ceeseat) ceeranklist();
                    else if(strcmp(department.dept4,"cse")==0)
                    {
                        if(cseallocation<cseseat) cseranklist();
                    }
                }
            }
            else if(strcmp(department.dept2,"cee")==0)
            {
                if(ceeallocation<ceeseat) ceeranklist();
                else if(strcmp(department.dept3,"mce")==0)
                {
                    if(mceallocation<mceseat) mceranklist();
                    else if(strcmp(department.dept4,"cse")==0)
                    {
                        if(cseallocation<cseseat) cseranklist();
                    }
                }
                else if(strcmp(department.dept3,"cse")==0)
                {
                    if(cseallocation<cseseat) cseranklist();
                    else if(strcmp(department.dept4,"mce")==0)
                    {
                        if(mceallocation<mceseat) mceranklist();
                    }
                }


            }


        }
        else if(strcmp(department.dept1,"mce")==0)
        {
            if(mceallocation<mceseat) mceranklist();
            else if(strcmp(department.dept2,"cse")==0)
            {
                if(cseallocation<cseseat) cseranklist();
                else if(strcmp(department.dept3,"eee")==0)
                {
                    if(eeeallocation<eeeseat) eeeranklist();
                    else if(strcmp(department.dept4,"cee")==0)
                    {
                        if(ceeallocation<ceeseat) ceeranklist();
                    }
                }
                else if(strcmp(department.dept3,"cee")==0)
                {
                    if(ceeallocation<ceeseat) ceeranklist();
                    else if(strcmp(department.dept4,"eee")==0)
                    {
                        if(eeeallocation<eeeseat) eeeranklist();
                    }

                }
            }
            else if(strcmp(department.dept2,"eee")==0)
            {
                if(eeeallocation<eeeseat) eeeranklist();
                else if(strcmp(department.dept3,"cse")==0)
                {
                    if(cseallocation<cseseat) cseranklist();
                    else if(strcmp(department.dept4,"cee")==0)
                    {
                        if(ceeallocation<ceeseat) ceeranklist();
                    }
                }
                else if(strcmp(department.dept3,"cee")==0)
                {
                    if(ceeallocation<ceeseat) ceeranklist();
                    else if(strcmp(department.dept4,"cse")==0)
                    {
                        if(cseallocation<cseseat) cseranklist();
                    }
                }
            }
            else if(strcmp(department.dept2,"cee")==0)
            {
                if(ceeallocation<ceeseat) ceeranklist();
                else if(strcmp(department.dept3,"cse")==0)
                {
                    if(cseallocation<cseseat) cseranklist();
                    else if(strcmp(department.dept4,"eee")==0)
                    {
                        if(eeeallocation<eeeseat) eeeranklist();
                    }
                }
                else if(strcmp(department.dept3,"eee")==0)
                {
                    if(eeeallocation<eeeseat) eeeranklist();
                    else if(strcmp(department.dept4,"cse")==0)
                    {
                        if(cseallocation<cseseat) cseranklist();
                    }
                }


            }


        }
        else if(strcmp(department.dept1,"cee")==0)
        {
            if(ceeallocation<ceeseat) ceeranklist();
            else if(strcmp(department.dept2,"cse")==0)
            {
                if(cseallocation<cseseat) cseranklist();
                else if(strcmp(department.dept3,"eee")==0)
                {
                    if(eeeallocation<eeeseat) eeeranklist();
                    else if(strcmp(department.dept4,"mce")==0)
                    {
                        if(mceallocation<mceseat) mceranklist();
                    }
                }
                else if(strcmp(department.dept3,"mce")==0)
                {
                    if(mceallocation<mceseat) mceranklist();
                    else if(strcmp(department.dept4,"eee")==0)
                    {
                        if(eeeallocation<eeeseat) eeeranklist();
                    }

                }
            }
            else if(strcmp(department.dept2,"mce")==0)
            {
                if(mceallocation<mceseat) mceranklist();
                else if(strcmp(department.dept3,"cse")==0)
                {
                    if(cseallocation<cseseat) cseranklist();
                    else if(strcmp(department.dept4,"eee")==0)
                    {
                        if(eeeallocation<eeeseat) eeeranklist();
                    }
                }
                else if(strcmp(department.dept3,"eee")==0)
                {
                    if(eeeallocation<eeeseat) eeeranklist();
                    else if(strcmp(department.dept4,"cse")==0)
                    {
                        if(cseallocation<cseseat) cseranklist();
                    }
                }
            }
            else if(strcmp(department.dept2,"eee")==0)
            {
                if(eeeallocation<eeeseat) eeeranklist();
                else if(strcmp(department.dept3,"mce")==0)
                {
                    if(mceallocation<mceseat) mceranklist();
                    else if(strcmp(department.dept4,"cse")==0)
                    {
                        if(cseallocation<cseseat) cseranklist();
                    }
                }
                else if(strcmp(department.dept3,"cse")==0)
                {
                    if(cseallocation<cseseat) cseranklist();
                    else if(strcmp(department.dept4,"mce")==0)
                    {
                        if(mceallocation<mceseat) mceranklist();
                    }
                }


            }


        }



    }

    fclose(fp);
}



void cseranklist()
{

    FILE *dept=fopen("cseranklist.txt","a");
    fprintf(dept,"%d %d %lf %s\n",department.roll_ssc,department.roll_hsc,department.marks,"CSE" );
    cseallocation++;
    fclose(dept);

}
void eeeranklist()
{

    FILE *dept=fopen("eeeranklist.txt","a");
    fprintf(dept,"%d %d %lf %s\n",department.roll_ssc,department.roll_hsc,department.marks,"EEE" );
    eeeallocation++;
    fclose(dept);

}

void mceranklist()
{

    FILE *dept=fopen("mceranklist.txt","a");
    fprintf(dept,"%d %d %lf %s\n",department.roll_ssc,department.roll_hsc,department.marks,"MCE" );
    mceallocation++;
    fclose(dept);

}


void ceeranklist()
{

    FILE *dept=fopen("ceeranklist.txt","a");
    fprintf(dept,"%d %d %lf %s\n",department.roll_ssc,department.roll_hsc,department.marks,"CEE" );
    ceeallocation++;
    fclose(dept);

}






void totalranking()
{

    int i;
    int l=0;
    printf("\t\t\t\t*****************\n");
    printf("\t\t\t\t* Total Ranking *\n");
    printf("\t\t\t\t*****************\n\n\n");
    printf("===============================================================================\n");
    printf(" Rank\tSSC Roll\tHSC Roll\tMarks\tDept1\t Dept2\t Dept3\t Dept4\n");
    printf("===============================================================================\n");
    FILE *rank=fopen("sortedprimarydata.txt","r");
    while(fscanf(rank,"%d %d %lf %s %s %s %s",&ranking.roll_ssc,&ranking.roll_hsc,&ranking.marks,&ranking.dept1,&ranking.dept2,&ranking.dept3,&ranking.dept4)!=EOF)
    {
        l++;

        for(i=0; i<3; i++)
        {
            ranking.dept1[i]=toupper(ranking.dept1[i]);
            ranking.dept2[i]=toupper(ranking.dept2[i]);
            ranking.dept3[i]=toupper(ranking.dept3[i]);
            ranking.dept4[i]=toupper(ranking.dept4[i]);
        }

        printf("\n\n  %d\t%d\t\t%d\t\t%.2lf\t%s\t %s\t %s\t %s\n\n",l,ranking.roll_ssc,ranking.roll_hsc,ranking.marks
               ,ranking.dept1,ranking.dept2,ranking.dept3,ranking.dept4);


    }




}
void showcseranklist()
{

    printf("\t\t\t\t*****************\n");
    printf("\t\t\t\t*  CSE Ranking  *\n");
    printf("\t\t\t\t*****************\n\n\n");
    FILE *show=fopen("cseranklist.txt","r");
    printf("==================================================================\n");
    printf("SSC Roll\tHSC Roll\tMarks\t\t    Department\n");
    printf("==================================================================\n");
    while(fscanf(show,"%d %d %lf %s",&ranking.roll_ssc,&ranking.roll_hsc,&ranking.marks,ranking.dept)!=EOF)
    {
        printf("\n\n%d\t\t%d\t\t%lf\t\t%s\n",ranking.roll_ssc,ranking.roll_hsc,ranking.marks,ranking.dept);
    }
    fclose(show);

}
void showeeeranklist()
{
    printf("\t\t\t\t*****************\n");
    printf("\t\t\t\t*  EEE Ranking  *\n");
    printf("\t\t\t\t*****************\n\n\n");
    FILE *show=fopen("eeeranklist.txt","r");
    printf("==================================================================\n");
    printf("SSC Roll\tHSC Roll\tMarks\t\t    Department\n");
    printf("==================================================================\n");
    while(fscanf(show,"%d %d %lf %s",&ranking.roll_ssc,&ranking.roll_hsc,&ranking.marks,ranking.dept)!=EOF)
    {

        printf("\n\n%d\t\t%d\t\t%lf\t\t%s\n",ranking.roll_ssc,ranking.roll_hsc,ranking.marks,ranking.dept);
    }

    fclose(show);
}

void showmceranklist()
{
    printf("\t\t\t\t*****************\n");
    printf("\t\t\t\t*  MCE Ranking  *\n");
    printf("\t\t\t\t*****************\n\n\n");
    FILE *show=fopen("mceranklist.txt","r");
    printf("=================================================================\n");
    printf("SSC Roll\tHSC Roll\tMarks\t\t    Department\n");
    printf("=================================================================\n");
    while(fscanf(show,"%d %d %lf %s",&ranking.roll_ssc,&ranking.roll_hsc,&ranking.marks,ranking.dept)!=EOF)
    {

        printf("\n\n%d\t\t%d\t\t%lf\t\t%s\n",ranking.roll_ssc,ranking.roll_hsc,ranking.marks,ranking.dept);
    }

    fclose(show);
}
void showceeranklist()
{
    printf("\t\t\t\t*****************\n");
    printf("\t\t\t\t*  CEE Ranking  *\n");
    printf("\t\t\t\t*****************\n\n\n");
    FILE *show=fopen("ceeranklist.txt","r");
    printf("================================================================\n");
    printf("SSC Roll\tHSC Roll\tMarks\t\t    Department\n");
    printf("================================================================\n");
    while(fscanf(show,"%d %d %lf %s",&ranking.roll_ssc,&ranking.roll_hsc,&ranking.marks,ranking.dept)!=EOF)
    {

        printf("\n\n%d\t\t%d\t\t%lf\t\t%s\n",ranking.roll_ssc,ranking.roll_hsc,ranking.marks,ranking.dept);
    }

    fclose(show);
}
