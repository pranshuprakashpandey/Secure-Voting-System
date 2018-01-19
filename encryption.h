void Encrypt()
{
    printf("\n");
    int i,j,round=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            state[j][i] = in[i*4 + j];
            //printf("%x ",state[j][i]);
        }
    }



    AddRoundKey(0);



    for(round=1;round<Nr;round++)
    {


        SubBytes();


        ShiftRows();



        MixColumns();


        AddRoundKey(round);


    }


    SubBytes();

    ShiftRows();

    AddRoundKey(Nr);

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            out[i*4+j]=state[j][i];
        }
    }

}
