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
unsigned char Key[32];
int x=0,y=0;
char temp[17];
