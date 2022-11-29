

/** Q.7 sheet_3 */

void array_swap2(int* a,int size_1,int* b,int size_2)
{
    if(size_1>size_2)
    {
        size_1=size_2;
    }
    for(int i=0; i<size_1; i++)
    {
        //swap using X-OR
        a[i]=a[i]^b[i];
        b[i]=a[i]^b[i];
        a[i]=a[i]^b[i];
    }
}

int main()
{
	int arr1[]= {1,2,3,4};
    int arr2[]= {10,20,30,40,50};

	/** ha2sem size l array kolo 3la size first elemnt=4 3shan ageb 3dad L elements **/
    int size1=sizeof(arr1)/sizeof(*(arr1));
    int size2=sizeof(arr2)/sizeof(*(arr2));

    printf("print arrays before swapping\n");
    printf("\n");
    array_print(arr1,size1);
    array_print(arr2,size2);
    printf("\n");

    printf("print arrays after swapping\n");
    printf("\n");
    array_swap2(arr1,size1,arr2,size2);
    array_print(arr1,size1);
    array_print(arr2,size2);
	return 0;
}