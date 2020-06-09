#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10000
#define SHOW 1
#define SAVE 2
#define QUIT 3


void Show(const char *date);
void Save(const char *date);

int get_cmd(){
 int cmd;

 printf("\n\n--------\n");
 printf("  MENU\n");
 printf("--------\n");
 printf("1. Show \n");
 printf("2. Save \n");
 printf("3. Quit \n");
 printf("=========> ");
 scanf("%d", &cmd);

 return cmd;
}

int main(){
 int cmd = 0;
 char date[SIZE];

 while(cmd != QUIT){
   cmd = get_cmd();

   if(cmd == 1 || cmd == 2){
     printf("\nDate(ex.200101): ");
     scanf("%s", date);
     strcat(date, ".txt");
   }

   // show or make file.
   //////////////////////
   if(cmd == SHOW){
     Show(date);
   }

   else if(cmd == SAVE){
     Save(date);	
   }

   else if(cmd == QUIT)
     printf("Bye!!\n\n");

   else
     printf("Error: Input number (1 ~ 3)");
 }

 return 0;
}


void Show(const char *date){
  char buff[100];

  FILE *fp;
  fp = fopen(date, "r");
  if(!fp){
	  printf("The file is not exist. Please create file first.");
	  return;
  }

  do{
	fgets(buff, sizeof(buff), fp);
	printf("%s", buff);
  }while(!feof(fp));
  printf("-------------------\n\n");

  fclose(fp);

  return;
}


void Save(const char *date){
  FILE *fp;
  char buf[SIZE], buff[SIZE];

  //When you don't have enough memory
  fp = fopen("Not_yet.txt", "r");

  while(fgets(buf, SIZE, fp) != NULL)
	  printf("%s", buf);
  
  //When you have enough memory
  //fp = fopen(date, "a");	// to create or append the schedule
  //fgets(buff, SIZE, fp);	//get the schedule at one line.

  
  /*
  //if you have enough memory and skills, I recommand to add this method.
  //Add filename(date.txt) to your web (http://raspberrypi.local)
  //to notice you which dates' schedules are recorded
  //Use index.html file under the /var/www/html/ directory
  */

  fclose(fp);

  return;
}
