
/** open Lec.41 **/

/** this Func used to do more cases that do sevral services n,x but it's cycolomatic comlexity is very huge **/
void fun(int n,int x)
{
	switch()
	{
		case 1:
		//some code
		break;
		case 2:
		//some code
		break;
		...
		...
		...
		...
		case 200:
		//some code
		break;
	}
}



/** this way to reduce the cycolomatic comlexity for a Function using more case in it's switch();  **/

void f1(void);
void f2(void);
void f3(void);
void f4(void);
void f5(void);
void f6(void);
void f7(void);
void f8(void);

void (*arrFun[200])(void)={
	f1,f2,f3,f4,f5,f6,f7,f8
	};

void func(int n,int x)
{
	/** this 2 instructions are a Syntics in C to calling for the pointer to Func **/
	arrFun[n](x);
	(*arrFun[n])(x);
}


