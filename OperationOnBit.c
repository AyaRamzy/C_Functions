
int SetBit(int num,int bit)
{
    num |= (1<<bit);
    return num;

}


int ToggleBit(int num,int bit)
{
    num ^=(1<<bit);
    return num;
}
int ReadBit(int num,int bit)
{
    int Rbit;
    Rbit = (num>>bit)&1;
    return Rbit;
}
int ClearBit(int num,int bit)
{
    num &= (~(1<<bit));
    return num;
}
