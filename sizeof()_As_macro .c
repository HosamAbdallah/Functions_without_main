
https://www.youth4work.com/Talent/C-Coding/Forum/114370-How-to-write-your-own-sizeof-operator/Answer/301141


/** C program to implement sizof() to macro like function **/




/** 3amlt pointer w bat7rak 3aleha increment w decrement 3shan ageb 7agm ay size 3ande */
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type) 

int main()
{
    double x;
    printf("%ld", my_sizeof(x));
	return 0;
}