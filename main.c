#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#include<string.h>

typedef struct patient {
    char patient_name[20];
    struct patient *nxt;

};


typedef struct doctor {

 char name [20];
 bool availlble ;
 char pati[3][30];
 struct patient *list_of_patinet;
 int patien_nbr;
 char speciality [30];
 int spec_code;
 };

typedef struct department {
    char spec_name[20];
    struct doctor dr ;
    int dep_spec_code;
};
struct department *guid[3];

struct patient p1,p2,p3;


//void show_dep();
void costumer(void);
void add_new();

bool check_admin (void){
 char user[6];
 char password[6];
 char pass[]="admin";
 bool login =false;
 while(!login){
      printf("\t\t\t\t=======================================\n");
     printf("\t\t\t\tuser_name:\n");
     scanf("%s",user);
 //fgets(user,6,stdin);
     printf("\t\t\t\t=======================================\n");
     printf("\t\t\t\tPASSWORD:\n");
    printf("\t\t\t\t=======================================\n");
    scanf("%s",password);
 //fgets(password,6,stdin);
  //printf("%s",ad
  printf("%s \n",user);
  printf("%s \n",password);
 if(strcmp(user,pass)==0 && strcmp(password,pass)==0){
  login=false;
  printf("loading");
  for(int i=0;i<4;i++)
  {
   printf(".");
   sleep(1);
  }
    printf("\n\t\t\t\t successful log in !\n");

  break;
  }else{
   printf("\t\t\t\twrong id or password please try again \n");}
 }
}

bool check_doc (void){
 char user[6];
 char password[6];
 char pass[]="DOC";
 bool login =false;
 while(!login){
      printf("=======================================\n");
     printf("user_name:\n");
     scanf("%s",user);
 //fgets(user,6,stdin);
     printf("=======================================\n");
     printf("PASSWORD:\n");
    printf("=======================================\n");
    scanf("%s",password);
 //fgets(password,6,stdin);
  //printf("%s",ad
  printf("%s \n",user);
  printf("%s \n",password);
 if(strcmp(user,pass)==0 && strcmp(password,pass)==0){
  login=false;
  printf("loading");
  for(int i=0;i<4;i++)
  {
   printf(".");
   sleep(1);
  }
    printf("\n successful log in !\n");
    printf("\n WELCOME DOC !\n");
    //drr_main(struct department dep1,struct department dep2);
  break;
  }else{
   printf("wrong id or password please try again \n");}
  }
}



void privelage(void){
        int privilage;
 printf("\t\t\t\t=============================================\n");
 printf("\t\t\t\twelcome to the hospital management program\n");
 printf("\t\t\t\t=============================================\n");
 printf("\t\t\t\twho are you\n\n ");
 printf("\t\t\t\t [1]:admin \n\n  ");
 printf("\t\t\t\t [2]:doctor\n\n  ");
 printf("\t\t\t\t [3]:client\n\n ");
 scanf("%i",&privilage);
 switch(privilage){
  case(1):check_admin();
  break;
  case(2):check_doc();
  break;
  case(3):costumer();
  break;
 }
    };

void show_dep( struct department** guid[],int a){
    struct department *s;
    char answr;
    s=guid[a];
    printf("\t\t\t\t=======================================\n");
    printf("\t\t\t\twelcome to the %s \n",s->spec_name);
    printf("\t\t\t\t=======================================\n");
    printf("\t\t\t\tthe doctor of this department is dr %s\n",s->dr.name);
    printf("\t\t\t\t=======================================\n");
    printf("\t\t\t\tthe list of the patients are : \n");
    for(int i=0;i<3;i++){
        printf("\t\t\t\t[%i]: %s \n",i+1,s->dr.pati[i]);
    };
    printf("\t\t\t\t=======================================\n");
    printf("\t\t\t\t do want to register your name ? Y/N ?\n");
    scanf("%i",&answr);
    while((strcmp(answr,"y")!=0 || strcmp(answr,"Y")!=0 )){
            scanf("%i",&answr);
        if(strcmp(answr,"n")==0 || strcmp(answr,"N")==0 ){
            break;
           }}






}
    struct department *guid[3];

    int main (){
    struct department dep1,dep2;
    guid[1]=&dep1;
    guid[2]=&dep2;
    //#############/using LLC###############

    //###########/*/department1*/#########*/
    strcpy(dep1.dr.name,"ahmed bensalem");
    strcpy(dep1.spec_name,"heart department ");
    strcpy(dep1.dr.pati[0],"ahmed zine eddine ");
    strcpy(dep1.dr.pati[1],"mohammed abdelhak");
    strcpy(dep1.dr.pati[2],"islam oussama ");
    //###########/*/department2*/#########
    dep1.dep_spec_code=1;
    strcpy(dep2.dr.name,"moohammed benalia ");
    strcpy(dep2.spec_name,"children and new born department ");
    dep2.dep_spec_code=2;
    strcpy(dep2.dr.pati[0],"ahmed zine eddine ");
    strcpy(dep2.dr.pati[1],"mohammed abdelhak");
    strcpy(dep2.dr.pati[2],"islam oussama ");
    //######################################################//
    //dep1.dr.availlble
    //printf("%s",dep1.dr.pati);
    privelage();








    }



void costumer(void){
    int decision;
     printf("\t\t\t\t=============================================\n\n");
    printf("\t\t\t\tWELCOME SIR ! ITS OUR PLEASURE TO SERVE YOU \n\n");
    printf("\t\t\t\twhich department you want to choose ??? \n\n");
    printf("\t\t\t\t[1]:heart \n\n");
    printf("\t\t\t\t[2]:children and new born \n\n");
    printf("\t\t\t\t[3]:nose and ears \n\n");
    printf("\t\t\t\t[4]:Lungs \n\n");
    printf("\t\t\t\t[5]:surgery \n\n");
    printf("\t\t\t\t[6]:eyes \n\n");
    printf("\t\t\t\t[7]:neurons \n\n");
    printf("\t\t\t\t=============================================\n");
    scanf("%i",&decision);
            if(decision==1){
                show_dep(guid,1);

            }else{
                show_dep(guid,2);
            }
}
void add_new( struct department** guid[],int a){
    char namee[20];
    struct department *s;
    char answr;
    s=guid[a];
    printf(" please site your name ");
    scanf("%s",&namee);
    //while(strcmp())





}
