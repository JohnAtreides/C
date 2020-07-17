#include <stdio.h>
#include <string.h>

//#define plainTxtFileName "plainTxt2Encrypt.txt"

long int plainTxtFileSize(const char *plainTxt2Encrypt, long int sizeOfFile)
{
    /*  File size is returned through sizeOfFile  */

    FILE *fileToCount = NULL;

    fileToCount = fopen("plainTxt2Encrypt.txt", "rb");
    if (fileToCount != NULL)
    {
        fseek(fileToCount, 0, SEEK_END); /* aller à la fin du fichier */
        sizeOfFile = ftell(fileToCount); /* lire l'offset de la position courante par rapport au début du fichier // File size is returned through sizeOfFile */
        fclose(fileToCount);
        printf("\n Size Of File -1 =  %ld \n", sizeOfFile);
        return  sizeOfFile+1;
    }
    else
        printf("Impossible d\'ouvrir le fichier plainTxt2Encrypt.txt");
        return 1;
}



void extractTxt2StringArray(unsigned char *plainText)
{
    long int sizeOfFile =0;
    sizeOfFile = plainTxtFileSize("plainTxt2Encrypt.txt", sizeOfFile);

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




/*

//function to convert ascii char[] to hex-string (char[])
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

        *//*
        loop+=1;
        i+=2;
    }
    //insert NULL at the end of the output string
    output[i++] = '\0';
}
*/

int main()
{
    unsigned char plainTxt2Encrypt[] = {};
    extractTxt2StringArray(plainTxt2Encrypt);

    printf("\n Array : %s \n", plainTxt2Encrypt);


/*
    unsigned char ascii_str[] = "Hello world!";
    extractTxt2StringArray(ascii_str);
    //declare output string with double size of input string
    //because each character of input string will be converted
    //in 2 bytes
    int len = strlen(ascii_str);
    unsigned char hex_str[(len*2)+1];

    //converting ascii string to hex string
    ascii2Hex(ascii_str, hex_str);

    printf("ascii_str: %s\n", ascii_str);
    printf("hex_str: %s\n", hex_str);

  */  return 0;
}
