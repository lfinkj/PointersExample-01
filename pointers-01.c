#include <stdio.h>

int main()
{

	int seven = 7;
	int *pSeven = &seven;
	
	printf("\nint seven by declaration ( int seven = 7; )   == %i", seven );
	printf("\nint seven address by address of ( &seven )    == %u", &seven );
	printf("\nint seven by pointer dereference ( *pSeven )  == %i\n", *pSeven );


	return 0;
}
