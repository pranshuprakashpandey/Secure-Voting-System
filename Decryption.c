#include<stdio.h>
#include"variables.h"
#include"functions.h"
#include"decryption.h"

void main()
{
    const char *candidates[17];
    candidates[1]= "Alveera Jabin";
    candidates[2] = "Sheejashree Shetty";
    candidates[3] = "Nayana B.C.";
    candidates[4] = "Sagar";
    candidates[5] = "Ashni Giridhar";
    candidates[6] = "Debanjali";
    candidates[7] = "Tanvi kini";
    candidates[8] = "Puja Jaiswal";
    candidates[9] = "Rohit Sharma";
    candidates[10] = "Pranshu Prakash Pandey";
    candidates[11] = "Shubham Shrivastav";
    candidates[12] = "Snehal Raj";
    candidates[13] = "Kartik Sharma";
    candidates[14] = "Prateek Lakhe";
    candidates[15] = "Satyam Nagpal";
    candidates[16] = "Sandeep Babbar";
     int id;
     int a,b,d;
    int cols=100,rows=5,r,c,sp=1;

        //Space before first line
    for(sp=1; sp<=20; sp++)
            printf(" ");

    //Printing First Line
     for(r=1; r<=cols; r++)
        printf("*");

        printf("\n");

 //Loop for No. of Rows
 for(c=1; c<=rows-2; c++)
 {
     //Space Before Each Line
     for(sp=1; sp<=20; sp++)
            printf(" ");

    //First Star of Each Line
    printf("*");

    if(c==2)
    {
        //Space before Heading
        for(sp=1; sp<=(cols-30)/2; sp++)
        {
        printf(" ");
        }
        printf("Administrator Panel-AES Decryption");

        //Space after Heading

        printf("\t\t\t");
        printf("       ");
        //Last Star of Heading Row/Line
        printf("*\n");
    }
    else
    {
        //Space after starting star of Each Row/Line
        for(sp=1; sp<=cols-2; sp++)
            printf(" ");

        //Last Star of Each Row/Line
        printf("*\n");
    }

 }

         //Soace before Last Line
         for(sp=1; sp<=20; sp++)
                    printf(" ");

        //Printing Last Line
         for(r=1; r<=cols; r++)
            printf("*");


            /*---------------------End of Heading-------------------*/


    int i;
    /*while(Nr!=128 && Nr!=192 && Nr!=256)
    {
        printf("Enter the length of Key(128, 192 or 256 only): ");
        scanf("%d",&Nr);
    }*/

    Nk = Nr / 32;
    Nr = Nk + 6;

    unsigned char temp[32] = {0x00  ,0x01  ,0x02  ,0x03  ,0x04  ,0x05  ,0x06  ,0x07  ,0x08  ,0x09  ,0x0a  ,0x0b  ,0x0c  ,0x0d  ,0x0e  ,0x0f};
    unsigned char temp2[16]= {0x69  ,0xc4  ,0xe0  ,0xd8  ,0x6a  ,0x7b  ,0x04  ,0x30  ,0xd8  ,0xcd  ,0xb7  ,0x80  ,0x70  ,0xb4  ,0xc5  ,0x5a};

    for(i=0;i<Nk*4;i++)
    {
        Key[i]=temp[i];
        in[i]=temp2[i];
    }
    printf("\n\n");
    printf("Enter the Key in hexadecimal: ");
    for(i=0;i<Nk*4;i++)
    {
        scanf("%x",&Key[i]);
    }
    printf("Enter the CipherText in hexadecimal: ");
    for(i=0;i<Nb*4;i++)
    {
        scanf("%x",&in[i]);
    }

    KeyExpansion();
    decrypt();

    printf("\nText after decryption:\n");
    for(i=0;i<Nb*4;i++)
    {
        printf("%c ",out[i]);
    }
    printf("\n");
    printf("----------Counting Votes-----------\n\n");
    printf("Counting Votes for Joint Secretary\n\n");
    for(a=1;a<=6;a++)
    {
    printf("Votes for %s is %c\n",candidates[a],out[a-1]);
    }
    printf("\nCounting Votes for Treasurer\n\n");
    for(b=7;b<=12;b++)
    {
    printf("Votes for %s is %c\n",candidates[b],out[b-1]);
    }
    printf("\nCounting Votes for Magazine Editor\n\n");
    for(d=13;d<=16;d++)
    {
    printf("Votes for %s is %c\n",candidates[d],out[d-1]);
    }
    printf("\n\n");
}
