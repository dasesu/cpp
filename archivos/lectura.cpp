#include <stdio.h>

int main ()
{
   char str [80];
   int f;
   FILE * pFile;

   pFile = fopen("file2.txt","r");
   if (pFile == NULL) {
      printf("no such file.");
      return 0;
   }else{
      //while(!feof(pFile) ){
         fscanf(pFile, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(pFile, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(pFile, "%d\n", &f);
         printf ("I have read: %d\n",f );
         //////
         fscanf(pFile, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(pFile, "%d ", &f);
         printf ("I have read: %d\n",f );

         fscanf(pFile, "%d\n", &f);
         printf ("I have read: %d\n",f );
         //////
         fscanf(pFile, "%s\n", str);
         printf ("I have read: %s\n", str );
         fscanf(pFile, "%s\n", str);
         printf ("I have read: %s\n", str );
         fscanf(pFile, "%s\n", str);
         printf ("I have read: %s\n", str );
      //}
   }
   fclose (pFile);
   return 0;
}
