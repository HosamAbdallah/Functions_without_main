


int Reverse_binary(int num)
{
    int rev=0,i;
    for(i = 0; i<7; i++)
    {
        if( ((num>>i)&1)==1)//  ((num & (1 << i)))
        {
            rev=rev|(1<<(7-i));
        }
        else
        {
			//else is exit because of Misra Rules
        }
    }
    return rev;
}