#include <dirent.h>
#include <stdio.h>

char *remove_ext(char* mystr) {
    char *retstr;
    char *lastdot;
    if (mystr == NULL)
         return NULL;
    if ((retstr = malloc (strlen (mystr) + 1)) == NULL)
        return NULL;
    strcpy (retstr, mystr);
    lastdot = strrchr (retstr, '.');
    if (lastdot != NULL)
        *lastdot = '\0';
    return retstr;
}

int main(void)
{
  DIR           *d;
  struct dirent *dir;
  char *file_name, user[100], pass[100], path[100], menu;
  int ret;

  login :
  printf("\n\t\tAdmin Mode\n");
  printf("\t\t..........................\n");
  printf("\t\tUsername : ");
  gets(user);
  printf("\t\tPassword : ");
  gets(pass);
  //concate
  strcat(user, pass);

  if(strcmp(user, "admin123")==0){
    listmember :
    system("cls");
    printf("\n\t\tMember List\n");
    printf("\t\t..........................\n");
    d = opendir("db/pass");
    if (d) {
        while ((dir = readdir(d)) != NULL)
        {
          //printf("%s\n", dir->d_name);
          if ( !strcmp(dir->d_name, ".") || !strcmp(dir->d_name, "..") ){
                // do nothing (straight logic)
            } else {
                file_name = dir->d_name; // use it
                printf("\t\tUser: \"%s\"\n",remove_ext(file_name));
            }
        }
        closedir(d);
        printf("\t\t..........................\n");
    }
    printf("\t\tTyping Username require to remove : ");
    gets(user);
    strcpy(path,"db/pass/");
    strcat(path, user);
    strcat(path, ".db");
    ret = remove(path);
    if(ret == 0) {
      printf("\t\tDeleted User&Pass successfully\n");
    }
    else {
      printf("\t\tError: unable to delete the file\n");
    }

    strcpy(path,"db/info/");
    strcat(path, user);
    strcat(path, ".db");
    ret = remove(path);
    if(ret == 0) {
      printf("\t\tDeleted Info successfully\n");
    }
    else {
      printf("\t\tError: unable to delete the file\n");
    }

    strcpy(path,"db/app/");
    strcat(path, user);
    strcat(path, "_app1.db");
    ret = remove(path);
    if(ret == 0) {
      printf("\t\tDeleted Info APP1 successfully\n");
    }
    else {
      printf("\t\tLog App1 No data...\n");
    }

    strcpy(path,"db/app/");
    strcat(path, user);
    strcat(path, "_app2.db");
    ret = remove(path);
    if(ret == 0) {
      printf("\t\tDeleted Info APP2 successfully\n");
    }
    else {
      printf("\t\tLog App2 No data...\n");
    }

    strcpy(path,"db/app/");
    strcat(path, user);
    strcat(path, "_app3.db");
    ret = remove(path);
    if(ret == 0) {
      printf("\t\tDeleted Info APP3 successfully\n");
    }
    else {
      printf("\t\tLog App3 No data...\n");
    }

    printf("\t\t..........................\n");
    printf("\t\tShow Member List Enter : 1\n");
    printf("\t\tExit Enter : 0\n");
    menu = getch();
    if(menu == '1'){
        fflush(stdin);
        goto listmember;
    }else{
        exit(0);
    }

  }else{
        printf("\n\t\t\tCan't login try again \n");
        printf("\n\t\t***************************************\n\n");
        fflush(stdin);
        goto login;
  }

  return(0);
}


