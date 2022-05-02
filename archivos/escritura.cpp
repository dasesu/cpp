#include <stdio.h>

main(){  
   FILE *fp;  
   fp = fopen("file.txt", "w");
   fprintf(fp, "Hello file by fprintf...\n");
   int x{7};
   fprintf(fp, "the x value is %d\n", x);
   fprintf(fp, "Hello file by fprintf...\n");
   fclose(fp);
}  
