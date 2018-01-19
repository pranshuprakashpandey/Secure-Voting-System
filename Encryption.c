#include<stdio.h>
#include"variables.h"
#include"functions.h"
#include"encryption.h"
#include<string.h>
#include<stdbool.h>
#define MAX_CANDIDATES 8
#define TOTAL_CANDIDATES 16

bool bad_limits(int post_no, int post, int MIN, int MAX);
int get_int(void)
{
int input;
char ch;
while (scanf("%d", &input) != 1)
{
printf("\n");
while ((ch = getchar()) != '\n')
putchar(ch);  // dispose of bad input
printf(" is not an integer.\n\aPlease enter an ");
printf(" integer value, such as 1, 2, 3\nVOTE: ");
}
return input;
}
bool bad_limits(int post_no, int post, int begin, int end)
{
bool not_good = false;
if( post < begin || post > end )
{
printf("\nRe-Enter the proper voting number for Post%d\a\nVOTE: ", post_no);
not_good = true;
}
return not_good;
}
void Counting(char* fileName, int partyNo)
{
FILE *fp;
int x, freq, i, n;
int count[MAX_CANDIDATES+1] = { 0 }; //assign all elements to zero value
//printf("\n************** Counting from %s ******************\n", fileName);
if((fp = fopen(fileName, "r")) == NULL)
{
fprintf(stdin,"Can’t open \”%s\” file.\n", fileName);
return;
}
for(i=0; !feof(fp); i++)
{
if(fscanf(fp, "%d", &n) == 1)
count[n]++;
}
for(x=1; x<= MAX[partyNo-1]; x++)
{
//printf("Votes for %s is %d\n", candidates[candy++], count[x]);
total[x]+=count[x];
}
for(freq=1; freq<= MAX[partyNo-1]; freq++)
{
//printf("%d ",count[freq]);
count2[flag]=count[freq]+48;
flag++;
}

if (fclose(fp) != 0)
fprintf(stderr,"Error closing file \"%s\" \n", fileName);
}
void main()
{
     int id;
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
        printf("Secure Voting System");

        //Space after Heading
        for(sp=(cols-30)/2; sp<=cols-23; sp++)
        printf(" ");
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


        printf("\n\n\n\n\nPlease Enter your Unique ID:");
        scanf("%d",&id);
        printf("\n\n");
        if(id>1000&&id<2000)
        {
            printf("Welcome %d\n\n",id);
            printf("Rules:You can vote for one person of each Designation, it is compulsory to cast your Vote for each Designation \n\n");
            /*----------Voting Area---------------*/

    int post1, post2, post3, x, counter=0;
    FILE *fp1, *fp2, *fp3;
    char ch;
    char fileName1[15] = "vote_post1.txt";
    char fileName2[15] = "vote_post2.txt";
    char fileName3[15] = "vote_post3.txt";
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


    printf("\nEnter the voting number for Joint Secretary\n");
    printf("\n1. %s\t2. %s\n3. %s\t\t4. %s\n5. %s\t6. %s\n\nVOTE: ", candidates[1], candidates[2],candidates[3],candidates[4],candidates[5],candidates[6]);
    post1 = get_int();
    while(bad_limits(1, post1, MIN[0], MAX[0])){
        post1 = get_int();
        continue;
    }
    if ((fp1 = fopen(fileName1, "a+")) == NULL){
        fprintf(stdin,"Can’t open \"vote_post1.txt\" file.\n");
        return 1;
    }
    else
        fprintf(fp1, "%d\n", post1);


    printf("\nEnter the voting number for Treasurer\n");
    printf("\n1. %s\t\t2. %s\n3. %s\t\t4. %s\n5. %s\t6. %s\n\nVOTE: ", candidates[7], candidates[8],candidates[9],candidates[10],candidates[11],candidates[12]);
    post2 = get_int();
    while(bad_limits(2, post2, MIN[1], MAX[1])){
        post2 = get_int();
        continue;
    }
    if ((fp2 = fopen(fileName2, "a+")) == NULL){
        fprintf(stdin,"Can’t open \"vote_post2.txt\" file.\n");
        return 1;
    }
    else
    fprintf(fp2, "%d\n", post2);
    printf("\nEnter the voting number for Magazine Editor\n");
    printf("\n1. %s\t2. %s\n3. %s\t4. %s\n\nVOTE: ", candidates[13], candidates[14], candidates[15], candidates[16]);
    post3 = get_int();
    while(bad_limits(3, post3, MIN[2], MAX[2])){
        post3 = get_int();
        continue;
    }
    if ((fp3 = fopen(fileName3, "a+")) == NULL){
        fprintf(stdin,"Can’t open \"vote_post3.txt\" file.\n");
        return 1;
    }
    else
        fprintf(fp3, "%d\n", post3);
    if (fclose(fp1) != 0)
        fprintf(stderr,"Error closing file \"vote_post1.txt\" \n");
    if (fclose(fp2) != 0)
        fprintf(stderr,"Error closing file \"vote_post2.txt\" \n");
    if (fclose(fp3) != 0)
        fprintf(stderr,"Error closing file \"vote_post3.txt\" \n");
    //Uncomment the Counting code below & comment out above code to see the election results.
    Counting(fileName1,1);
    Counting(fileName2,2);
    Counting(fileName3,3);
    int i;
    printf("\n");



   /* for(i=1;i<17;i++){
        printf("%c ",count2[i]);
    }
    while(Nr!=128 && Nr!=192 && Nr!=256)
    {
        printf("Enter the length of Key(128, 192 or 256 only): ");
        scanf("%d",&Nr);
    }*/
    Nk = Nr / 32;
    Nr = Nk + 6;

    /*printf("Enter the Key in hexadecimal: ");
    for(i=0;i<Nk*4;i++)
    {
        scanf("%x",&Key[i]);
    }*/
for(i=0;i<16;i++)
    {
        in[i]=count2[i+1];
    }
    in[i]='\0';
/*for(i=0;i<16;i++)
    {
        printf("%c",in[i]);
    }*/
   KeyExpansion();
    Encrypt();
    //printf("\nText after encryption:\n");
    FILE *fr;
    fr=fopen("result.txt","a");

    for(i=0;i<Nk*4;i++)
    {
        //printf("%02x ",out[i]);
        fprintf(fr,"%02x ",out[i]);
    }
        //printf("\n\n");
        printf("Thank You for Casting your Vote\n\n");

                                }
                                else{
                                    printf("Invalid Id, You are not allowed to Vote.");
                                }
}
