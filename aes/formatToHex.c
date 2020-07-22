#include <stdio.h>
#include <stdlib.h>
#include "formatToHex.h"


// return the number of character there is in the plaintext .txt file
long int fileSize(long int sizeOfFile)
{
    /*  File size is returned through sizeOfFile  */
    /* This fct° is used directly in extractTxt2StringArray() */

    FILE *fileToCount = NULL;

    fileToCount = fopen("plainTxt2Encrypt.txt", "rb");
    if (fileToCount != NULL)
    {
        fseek(fileToCount, 0, SEEK_END); /* aller à la fin du fichier */
        sizeOfFile = ftell(fileToCount); /* lire l'offset de la position courante par rapport au début du fichier // File size is returned through sizeOfFile */
        fclose(fileToCount);
        //*--DEBUG1--*/printf("\n Size Of File -1 =  %ld \n", sizeOfFile);
        return  sizeOfFile;
    }
    else
        printf("Impossible d\'ouvrir le fichier plainTxt2Encrypt.txt");
    return 1;
}
// return the number of character there is in the key.txt file
long int keySize(long int sizeOfKey)
{
    /*  File size is returned through sizeOfFile  */
    /* This fct° is used directly in extractTxt2StringArray() */

    FILE *fileToCount = NULL;

    fileToCount = fopen("key.txt", "rb");
    if (fileToCount != NULL)
    {
        fseek(fileToCount, 0, SEEK_END); /* aller à la fin du fichier */
        sizeOfKey = ftell(fileToCount); /* lire l'offset de la position courante par rapport au début du fichier // File size is returned through sizeOfFile */
        fclose(fileToCount);
        //*--DEBUG1--*/printf("\n Size Of File -1 =  %ld \n", sizeOfFile);
        return  sizeOfKey;
    }
    else
        printf("Impossible d\'ouvrir le fichier key.txt");
    return 1;
}



// read the plaintext .txt file then fill the array of char with the content of the txt file
void extractTxt2StringArray(long int sizeOfFile, unsigned char *plainText)
{
    sizeOfFile = fileSize(sizeOfFile);

    FILE* fichierTxt = NULL;
    fichierTxt = fopen("plainTxt2Encrypt.txt", "r");
    if (fichierTxt != NULL)
    {
        fgets(plainText, sizeOfFile+1, fichierTxt);
        fclose(fichierTxt);
    }
    else
        printf("Impossible d\'ouvrir le fichier plainTxt2Encrypt.txt");
}

// read the key.txt file then fill the array of char with the content of the txt file
void extractKey2StringArray(long int sizeOfFile, unsigned char *plainText)
{
    sizeOfFile = fileSize(sizeOfFile);

    FILE* fichierTxt = NULL;
    fichierTxt = fopen("key.txt", "r");
    if (fichierTxt != NULL)
    {
        fgets(plainText, sizeOfFile+1, fichierTxt);
        fclose(fichierTxt);
    }
    else
        printf("Impossible d\'ouvrir le fichier key.txt");
}



// convert ascii char[] to hex-string (char[])
void ascii2Hex(unsigned char *input, unsigned char *output)
{
    int loop;
    int i;

    i=0;
    loop=0;

    while(input[loop] != '\0')
    {
        sprintf((char*)(output+i),"%02X", input[loop]);
        /*  %02X
            %[flags][width][.precision][length]
            0 : Left-pads the number with zeroes (0) instead of spaces, where padding is specified (see width sub-specifier).
            2 : Minimum number of characters to be printed. If the value to be printed is shorter than this number,
                the result is padded with blank spaces. The value is not truncated even if the result is larger.

        */
        loop+=1;
        i+=2;
    }
    //insert NULL at the end of the output string
    output[i++] = '\0';
}
