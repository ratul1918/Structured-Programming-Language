// Function to input new student information.
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
   char name[30];
   char id[20];
   struct date dob;
   char blood[5];
   float total_marks;
};

void display_menu1();
void display_menu2();
void input_info(struct student std[],int n,int num);
void search_info(struct student std[],int n,char search_name[],char id_search[]);
void sort1(struct student std[],int n);
void sort2(struct student std[],int n);
void marks_display(struct student std[],int n);
void display_info(struct student std[],int n);
void sortbymarks(struct student std[], int n);
void delete_info(struct student std[],int *n,char delete_name[], char delete_id[]);
void save_to_file(struct student std[], int n);
void retrieve_from_file(struct student std[]);


int main(){

   struct student std[100];
   int total_std=0;

   printf("\t\t\t\t\t   ==============================================================\n\t\t\t\t\t   *\t\t\t\t\t\t\t\t*\n");
   printf("\t\t\t\t\t   *\tWelcome to the Student Information Management System\t*\n\t\t\t\t\t   *\t\t\t\t\t\t\t\t*\n");
   printf("\t\t\t\t\t   ==============================================================\n");




   while(1){

   int option;

   display_menu1();

   printf("\t\t<*> Enter your choice (1-9): ");
   scanf("%d",&option);
   printf("\n");

   switch(option){

     case 1:
         {
     int num;

     printf("\t\tKindly enter the number of student records you'd like to register in the system.\n\t\t--> ");
     scanf("%d",&num);

     input_info(std,total_std,num);
     total_std+=num;

     break;
     }
     case 2:
         {
     char search_name[25],id_search[11];

     printf("\t\t<*> Enter student name to search: ");
     getchar();
     gets(search_name);

     printf("\t\t<*> Enter ID to search: ");
     gets(id_search);

     search_info(std,total_std,search_name,id_search);

     break;
         }
     case 3:
         {
     display_menu2();

     int choice;
     printf("\t\t<*> Enter your choice(1 or 2): ");
     scanf("%d",&choice);

        switch(choice){

         case 1:
         sort1(std,total_std);
         display_info(std,total_std);

         break;

         case 2:
         sort2(std,total_std);
         display_info(std,total_std);

         break;
                      }
         break;
        }

    case 4:

    marks_display(std,total_std);

    break;

    case 5:
        sortbymarks(std,total_std);

        break;

    case 6:
        {
        char delete_name[25],delete_id[11];
        int x;
        printf("\t\t<*> Enter student name to delete information: ");
        getchar();
        gets(delete_name);

        printf("\t\t<*> Enter ID to delete information: ");
        gets(delete_id);
        printf("\n\t\tAre you sure you want to delete this student's information?\n\t\t1. Yes\n\t\t2. No\n\n\t\t<*> Enter your choice(1 or 2): ");
        scanf("%d",&x);
        if(x==1){
        delete_info(std,&total_std,delete_name,delete_id);
        }
        else if(x==2){
            printf("\n\t\tOK! This student's information won't be deleted.\n\n");
        }

        break;
        }
    case 7:
        display_info(std,total_std);

        break;
    case 8:
        save_to_file(std,total_std);

        break;
    case 9:
        retrieve_from_file(std);

        break;
    case 10:
        printf("\n\t\t\t\t\t\t\t>>>>Exiting the system. Goodbye!<<<<\n");
        return 0;

    default :
        printf("\t\tPlease choose a option from 1 to 9.\n");
        break;
   }
}
return 0;

}

void display_menu1(){

   printf("\n\t\t\t\t\t\t     ******************************************\n");
   printf("\t\t\t\t\t\t     *\t\t   Task Menu-1\t\t      *\n");
   printf("\t\t\t\t\t\t     *\t\t\t\t\t      *\n");
   printf("\t\t\t\t\t\t     *\t  1. Add Student Information\t      *\n");
   printf("\t\t\t\t\t\t     *\t  2. Search Student Information\t      *\n");
   printf("\t\t\t\t\t\t     *\t  3. Sort and Display Students\t      *\n");
   printf("\t\t\t\t\t\t     *\t  4. Display Student Marks\t      *\n");
   printf("\t\t\t\t\t\t     *\t  5. Rank Students based on Marks     *\n");
   printf("\t\t\t\t\t\t     *\t  6. Delete Student Information\t      *\n");
   printf("\t\t\t\t\t\t     *\t  7. Display Student Information      *\n");
   printf("\t\t\t\t\t\t     *\t  8. Save Students Information\t      *\n\t\t\t\t\t\t     *\t  9. Retrieve Students Information    *\n");
   printf("\t\t\t\t\t\t     *\t  10.Exit\t\t\t      *\n");
   printf("\t\t\t\t\t\t     *\t\t\t\t\t      *\n");
   printf("\t\t\t\t\t\t     ******************************************\n\n\n\n");

}

void display_menu2(){

  printf("\t\t\t\t\t\t\t   ******************************\n");
  printf("\t\t\t\t\t\t\t   *\t     Task Menu-2        *\n\t\t\t\t\t\t\t   *\t\t\t        *\n");
  printf("\t\t\t\t\t\t\t   * 1.Sort the students by     *\n\t\t\t\t\t\t\t   *   name\t\t        *\n");
  printf("\t\t\t\t\t\t\t   * 2.Sort the students by ID  *\n\t\t\t\t\t\t\t   *\t\t\t\t*\n\t\t\t\t\t\t\t   ******************************\n\n\n");

 }

void input_info(struct student std[],int n,int num){

for(int i=n;i<n+num;i++){
  printf("\n\t\tEnter the information of student no. %d\n\n",i+1);
  printf("\t\t[*] Enter Student Name: ");
  getchar();
  gets(std[i].name);
  printf("\t\t[*] Enter Student ID: ");
  scanf("%s",std[i].id);
  printf("\t\t[*] Enter Date of Birth (DD/MM/YYYY): ");
  scanf("%d/%d/%d",&std[i].dob.day,&std[i].dob.month,&std[i].dob.year);
  printf("\t\t[*] Enter Blood Group: ");
  scanf("%s",std[i].blood);
  printf("\t\t[*] Enter Total Marks: ");
  scanf("%f",&std[i].total_marks);
}
}

void search_info(struct student std[],int n,char search_name[],char id_search[]){
  int flag=0;
  printf("\n");
  for(int i=0;i<n;i++){

 if((strcmp(std[i].name,search_name)==0) && (strcmp(std[i].id,id_search)==0)){

    printf("\t\t[*] Student name: %s\n",std[i].name);
    printf("\t\t[*] ID: %s\n",std[i].id);
    printf("\t\t[*] Date of Birth: %02d/%02d/%d\n",std[i].dob.day,std[i].dob.month,std[i].dob.year);
    printf("\t\t[*] Blood Group: %s\n",std[i].blood);
    printf("\t\t[*] Total Marks: %.2f\n",std[i].total_marks);
    flag=1;
    break;
    }
}
 if(flag==0){
    printf("\t\tNot found! The student's information is unavailable. Please provide valid information.\n\n");
    }

}
//sort by name
void sort1(struct student std[],int n){
struct student temp;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(strcmp(std[j].name,std[j+1].name)>0){
           temp=std[j];
           std[j]=std[j+1];
           std[j+1]=temp;
        }
    }
}
}
//sort by id
void sort2(struct student std[],int n){
struct student temp;
long int len1,len2;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
       len1=strlen(std[j].id);
       len2=strlen(std[j+1].id);
        if(len1>len2){
            temp=std[j];
            std[j]=std[j+1];
            std[j+1]=temp;
        }
        else{
        if(strcmp(std[j].id,std[j+1].id)>0){
            temp=std[j];
            std[j]=std[j+1];
            std[j+1]=temp;
        }
      }
    }
  }
}
//sort by marks
void marks_display(struct student std[],int n){
float sum=0.0;
for(int i=0;i<n;i++){
   printf("\t\tTotal mark of %s is: %.2f\n",std[i].name,std[i].total_marks);
   sum+=std[i].total_marks;
}

float max=std[0].total_marks;
float min=std[0].total_marks;
for(int i=1;i<n;i++){

    if(max<std[i].total_marks){
        max=std[i].total_marks;
    }
    else if(min>std[i].total_marks){
        min=std[i].total_marks;
    }

}
printf("\n\t\tAverage Mark: %.2f\n",(sum/n));
printf("\t\tMaximum Marks: %.2f\n\t\tMinimum Marks: %.2f\n",max,min);
}

void display_info(struct student std[],int n){

 for(int i=0;i<n;i++){
    printf("\n\t\tInformation of Student no. %d\n\n",i+1);
    printf("\t\t[*] Student name: %s\n",std[i].name);
    printf("\t\t[*] ID: %s\n",std[i].id);
    printf("\t\t[*] Date of Birth: %02d/%02d/%d\n",std[i].dob.day,std[i].dob.month,std[i].dob.year);
    printf("\t\t[*] Blood Group: %s\n",std[i].blood);
    printf("\t\t[*] Total Marks: %.2f\n",std[i].total_marks);

 }
}

void sortbymarks(struct student std[], int n) {
    struct student temp;
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (std[j].total_marks<std[j+1].total_marks)
                {
                temp=std[j];
                std[j]=std[j + 1];
                std[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("\t\t<*> Rank %d:\n\n",i+1);
        printf("\t\t[*] Student name: %s\n",std[i].name);
        printf("\t\t[*] ID: %s\n\n",std[i].id);
    }
    printf("\n");
}

void delete_info(struct student std[],int *n,char delete_name[], char delete_id[]){

 int flag=0,i;
 for (i=0;i<*n;i++){
   if(strcmp(std[i].name,delete_name)==0 && strcmp(std[i].id,delete_id)==0){
    for(int j=i;j<(*n-1);j++){
        std[j]=std[j+1];
    }
    (*n)--;
    flag=1;
     printf("\n\t\tThis student's information has been deleted!\n\n");
     break;
   }
 }
  if(flag==0){
    printf("\t\tNot found! This student's information is unavailable. Please provide valid information.\n\n",delete_name);
  }
}

void save_to_file(struct student std[], int n) {
    FILE *fp;
    fp=fopen("students.txt","w");
    if (fp==NULL) {
        printf("Error opening file!\n");
        exit(0);
    }


for (int i = 0;i<n;i++) {
        fprintf(fp,"\t\tInformation of student no. %d\n\n",i+1);
        fprintf(fp,"\t\t[*] Student Name: %s\n", std[i].name);
        fprintf(fp,"\t\t[*] ID: %s\n", std[i].id);
        fprintf(fp,"\t\t[*] Date of Birth: %02d/%02d/%d\n", std[i].dob.day, std[i].dob.month, std[i].dob.year);
        fprintf(fp,"\t\t[*] Blood Group: %s\n", std[i].blood);
        fprintf(fp,"\t\t[*] Total Marks: %.2f\n\n", std[i].total_marks);

    }
    fclose(fp);
    printf("\t\tData has been saved to file successfully.\n\n");
}

void retrieve_from_file(struct student std[]) {
    FILE *fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("\t\tError opening file!\n");
        exit(0);
    }

     int n=0, num,flag=0;
    while (!feof(fp)) {
         if(fscanf(fp, "\t\tInformation of student no. %d\n\n",&num)!=1 ||
        fscanf(fp, "\t\t[*] Student Name: %[^\n]\n", std[n].name)!=1 ||
        fscanf(fp, "\t\t[*] ID: %s\n", std[n].id)!=1 ||
        fscanf(fp, "\t\t[*] Date of Birth: %d/%d/%d\n",&std[n].dob.day, &std[n].dob.month, &std[n].dob.year)!=3 ||
        fscanf(fp, "\t\t[*] Blood Group: %s\n", std[n].blood)!=1 ||
        fscanf(fp, "\t\t[*] Total Marks: %f\n\n", &std[n].total_marks)!=1 ) {

              printf("\t\tError! Invalid student information found in the file.\n\n");
              flag=1;
              break;
            }

        n++;
    }

    fclose(fp);
    if(flag==0){
    printf("\t\tData has been retrieved from file successfully.\n\n");
    }
}




