


/**Notes in MISRA Rules **/


int main()
{
	int z=6;
    if(z=5) /** [logic error]....  haytba3 true la2no hy3ml assign l z=5 w enta aslan 3amlha int z=6*/
        printf("true");
    else
        printf("false");
    return 0;
}

int main()
{
	int z=6;
    if(5=x) /** [compiler error] msh hay3de la2no hy3ml assign l z fe raqam w da maynf3sh */
        printf("true");
    else
        printf("false");
    return 0;
}






