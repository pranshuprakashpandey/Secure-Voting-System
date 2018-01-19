// The number of columns comprising a state in AES. This is a constant in AES. Value=4
#define Nb 4
// The number of rounds in AES Cipher. It is simply initiated to zero. The actual value is recieved in the program.
int Nr=128;
// The number of 32 bit words in the key. It is simply initiated to zero. The actual value is recieved in the program.
int Nk=0;
// in - it is the array that holds the plain text to be encrypted.
// out - it is the array that holds the output CipherText after encryption.
// state - the array that holds the intermediate results during encryption.
unsigned char in[16], out[16], state[4][4];
// The array that stores the round keys.
unsigned char RoundKey[240];
// The Key input to the AES Program
unsigned char Key[16]={0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf};
char temp[17];
int x=0,y=0;

// Voting Variables

int candy = 1;
// validate that input is an integer
int get_int(void);
// validate that range limits are valid
//Vote Counting
void Counting(char* fileName, int partyNo);
int MIN[3] = {1,1,1};
int MAX[3] = {6,6,4};
int total[4] = {0};
const char *candidates[17];
unsigned char count2[17];
int flag;
flag=1;

