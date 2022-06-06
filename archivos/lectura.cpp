#include <stdio.h>

int main ()
{
   char str [80];
   int f;
   FILE * fp;

   fp = fopen("file2.txt","r");
   if (fp == NULL) {
      printf("no such file.");
      return 0;
   }else{
      //while(!feof(fp) ){
         fscanf(fp, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(fp, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(fp, "%d\n", &f);
         printf ("I have read: %d\n",f );
         //////
         fscanf(fp, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(fp, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(fp, "%d\n", &f);
         printf ("I have read: %d\n",f );
         //////
         fscanf(fp, "%s\n", str);
         printf ("I have read: %s\n", str );
         fscanf(fp, "%s\n", str);
         printf ("I have read: %s\n", str );
         fscanf(fp, "%s\n", str);
         printf ("I have read: %s\n", str );
      //}
   }
   fclose (fp);
   return 0;
}
