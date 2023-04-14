#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("Minimum value of Signed CHAR is %d\n",SCHAR_MIN);
    printf("Maximum value of Signed CHAR is %d\n",SCHAR_MAX);
    printf("Maximum value of Unsigned CHAR is %u\n",UCHAR_MAX);

    printf("Minimum value of CHAR is %d\n",CHAR_MIN);
    printf("Maximum value of CHAR is %d\n",CHAR_MAX);
    
    printf("Minimum value of Signed SHORT is %d\n",SHRT_MIN);
    printf("Maximum value of Signed SHORT is %d\n",SHRT_MAX);
    printf("Maximum value of Unsigned SHORT is %u\n",USHRT_MAX);

    printf("Minimum value of Signed INT is %d\n",INT_MIN);
    printf("Maximum value of Signed INT is %d\n",INT_MAX);
    printf("Maximum value of Unsigned INT is %u\n",UINT_MAX);

    printf("Minimum value of Signed LONG is %ld\n",LONG_MIN);
    printf("Maximum value of Signed LONG is %ld\n",LONG_MAX);
    printf("Maximum value of Unsigned LONG is %lu\n",ULONG_MAX);

    printf("Minimum value of FLOAT is %.10e\n",FLT_MIN);
    printf("Maximum value of FLOAT is %.10e\n",FLT_MAX);

    printf("Minimum value of DOUBLE is %.10e\n",DBL_MIN);
    printf("Maximum value of DOUBLE is %.10e\n",DBL_MAX);

    printf("The minimum value of LONG Double is = %.10Le\n",LDBL_MIN);
    printf("The minimum value of LONG Double is = %.10Le\n",LDBL_MAX);

    return 0;
}