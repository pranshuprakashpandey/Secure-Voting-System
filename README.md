# Secure-Voting-System
A voting system created for the small scale votings conducted within colleges and classrooms with sure encryption for protection of data.


“Secure Voting System (SVS)”, is an endeavor to create a tool that eases the
system of voting at all levels.

We made a User Interface that is going to display the candidates and give the voter
an interface to select his choice of person. A person can vote for as much as three
times during this process, for several different posts. The aim is to make voting
secure and maintain the integrity of the system by allowing only unique
individuals to vote. To do this, we have created a number ids to identify different
user. When a user votes for a person, the results are saved in a text file with only
the index of the said person being voted as the stored number.

After every round the results are stored in a text file, encrypted, obviously. When
the voting is over all results can be given to administrator for decryption.
These results are saved, henceforth encrypted by an encryption algorithm whose
key is provided only to the administrators. The encryption algorithm used here is
AES(Advanced Encryption Standard) 128 bits. The decrypted file is processed and
the results are displayed by the number of votes each person receives. For the
process of decryption the admin is required to enter the key which only the
administrator knows. The decrypted results gives the total number of votes each
candidate receives.

The project aims to customize the modern voting criteria by making it efficient
and accessible to all. The easier and secure the voting system the better it is. That’s
why this project is kept as minimal as possible. The further developments in the
project would by far be taking it onto the network.

AES Algorithm Design
The project, SVS, contains a voting framework and AES algorithm for
encryption. Given below is the basic algorithm design:
Voting –
 Initialize an element m and a counter i with i = 0
 For each element x of the input sequence:
 If i = 0, then assign m = x and i = 1
 else if m = x, then assign i = i + 1
 else assign i = i − 1
 Return m
Encryption –
1. KeyExpansions—round keys are derived from the cipher key
using Rijndael&#39;s key schedule. AES requires a separate 128-bit
round key block for each round plus one more.
2. InitialRound
1. AddRoundKey—each byte of the state is combined with a
block of the round key using bitwise xor.

3. Rounds
1. SubBytes—a non-linear substitution step where each byte is
replaced with another according to a lookup table.
2. ShiftRows—a transposition step where the last three rows of
the state are shifted cyclically a certain number of steps.
3. MixColumns—a mixing operation which operates on the
columns of the state, combining the four bytes in each
column.
4. AddRoundKey
4. Final Round (no MixColumns)
1. SubBytes

2. ShiftRows
3. AddRoundKey.
