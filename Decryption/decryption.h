void decrypt()
{
    int i,j,round=0;
    int x,y;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            state[j][i] = in[i*4 + j];
        }
    }
    printf("\n\n");
    printf("Initial State : \n");
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            printf("%x",state[y][x]);
            printf(" ");
        }
        printf("\n\n");
    }
    AddRoundKey(Nr);
    printf("State After adding First Round Key:\n");
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            printf("%x",state[y][x]);
            printf(" ");
        }
        printf("\n\n");
    }
    for(round=Nr-1;round>0;round--)
    {
        printf("\n\n\n");
        printf("Round %d",round);
        printf("\n\n");
        InvShiftRows();
        printf("Inverse Shift Rows\n");
        for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }
        InvSubBytes();
        printf("Inverse SubBytes\n");
            for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }
        AddRoundKey(round);
        printf("Add Round Key\n");
            for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }
        InvMixColumns();
        printf("Inverse Mix Columns\n");
            for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }
    }
    printf("\n\n\n\n\n");
    printf("Last Round");
    printf("\n\n");

    InvShiftRows();
    printf("Last Inverse Shift Rows\n");
        for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }
    InvSubBytes();
    printf("Last Inverse Sub Bytes\n");
        for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }
    AddRoundKey(0);
    printf("Last Add Round Key\n");
        for(x=0;x<4;x++)
            {
                for(y=0;y<4;y++)
                    {
                        printf("%x",state[y][x]);
                        printf(" ");
                    }
                    printf("\n\n");
            }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            out[i*4+j]=state[j][i];
        }
    }
}
