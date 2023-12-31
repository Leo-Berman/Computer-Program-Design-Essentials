#include "mygrep.h"
void checkfile(char * a,char * b,int linenum){
  
  // allocates memory for pointers to
  // pointers of char arrays
  //
  char **buff=new char*[linenum*2+1];
  
  // allocates memory for each indivdual string
  //
  for(int i = 0;i<(linenum*2+1);i++){
    buff[i]=new char[MAX_LINE_LENGTH];
  }
  
  // initializes first few lines
  //
  for(int i =0;i<linenum;i++){
    buff[i][0]=(char)NULL;
  }
  
  // opens the file and error checks
  //
  FILE * fp = fopen(b,"r");
  
  if(filecheck(fp)!=true) {
    printf("Error opening file %s, program terminating\n\n",b);
    exit (1);
  }
  
  // initializes first values
  //
  for(int i = 0;i<linenum;i++) {
    fgets(buff[linenum+i],MAX_LINE_LENGTH-1,fp);
  }

  // reads through and scans all the lines in
  //
  while(fgets(buff[linenum*2],MAX_LINE_LENGTH-1,fp)!=NULL) {


    // compares the string to the compare word
    //
    if(strcasestr(buff[linenum],a)!=NULL){
      printstate(linenum,buff,b);	
      }
    
    // shifts the lines
    //
    for(int i = 0; i<linenum*2;i++) {
            
      // copies the string
      //
      strcpy(buff[i],buff[i+1]);
    }

  }
  
  // sets the last recently shifted line to
  // a no line line
  //
  buff[linenum*2][0]=(char)NULL;

  // scans the last 3 lines
  //
  for(int i = linenum; i<linenum*2+1; i++) {

    // checks the line against the compare word
    //
    if(strcasestr(buff[linenum],a)!=NULL){
      printstate(linenum,buff,b);	
    }
  
  // shifts the lines
  //
    for(int i = 0; i<linenum*2;i++) {
      
      // copies the string
      //
      strcpy(buff[i],buff[i+1]);
      
          // sets the final line to no line
      //
      buff[linenum*2][0]=(char)NULL; 
    }
  }
  
  // frees up memory
  //
  for(int i = 0;i++;i<(linenum*2+1)){
    delete [] buff[i];
  }
  
  delete [] buff;
  
  // closes the file
  //
  fclose(fp);
}

void printstate(int linenum,char **buff,char* filename) {
  printf("\nFILENAME: %s\n\n",filename);  
  // prints the lines
  //
  for(int j = 0;j<(linenum);j++) {
    printf("%s",buff[j]);	  
  }
  for(int i =0;i<strlen(buff[linenum])-1;i++) {
    printf("\033[0;31m");
    printf("%c",toupper(buff[linenum][i]));
    printf("\033[0m");
  }
  printf("\n");
  for(int j = linenum+1;j<linenum*2+1;j++) {
    printf("%s",buff[j]);
  }
  printf("\033[0;34m");
  printf("\n--------------------------------------------------------------------------------\n");
  printf("\033[0m");
  
}

char* clearwork(char* work){
  delete [] work;
  char* work2 = new char[MAX_LINE_LENGTH];
  return work2;
}
