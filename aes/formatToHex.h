#ifndef FORMATTOHEX_H_
#define FORMATTOHEX_H_


/*  Rijmen - Daemen algorythm will use hexadecimal input.                                       */
/*  We will need to convert Ascii from txt file into Hex data --> ascii2Hex()                   */
/*  But First we need to put the txt data into an array of char --> extractTxt2StringArray()    */
/*  And to do that, the number of character of the txt file is needed --> fileSize()            */
/*  ==========================================================================================  */

long int fileSize(long int sizeOfFile);
long int keySize(long int sizeOfKey);

void extractTxt2StringArray(long int sizeOfFile, unsigned char *plainText);
void extractKey2StringArray(long int sizeOfFile, unsigned char *plainText);

void ascii2Hex(unsigned char *input, unsigned char *output);


#endif // FORMATTOHEX_H_
