//
//dailyprogrammer challenge #1.
//Take 3 fields and parrot them back, storing the 3 fields into a
//.log file.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
  FILE * log;
  if((log=fopen("info.log","w")) == NULL){
    
  }
  else{
    char input[160] = "";
    while(strncmp(input,"quit",4)){
      printf("Enter name, age, and username separated by spaces(quit exits)\n");
      fgets(input, sizeof input, stdin);
      if(strncmp(input,"quit",4)){
        char * age = strchr(input, ' ')+1;
        char * user = strrchr(input, ' ')+1;
        input[age-input-1]='\0';
        input[user-input-1]='\0';
        printf("Name: %s Age: %s Username: %s", input, age, user);
        fwrite(input, 1, 160, log);
      }
      else{/*EMPTY*/}
    }
    fclose(log);
  }
  return 0;
}
