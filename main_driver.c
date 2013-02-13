#include <stdio.h>
#include <stdlib.h>

// Prototypes
char * getColorString( char a );
void printKeyCode( char a, char b, char c, char d );
void getKeyCode( char *a, char *b, char *c, char *d );


// Driver to test the reading of the color key codes
int main()
{
	char p1, p2, p3, p4;

	getKeyCode( &p1, &p2, &p3, &p4 );
	printf( "Echo print: %c %c %c %c\n", p1, p2, p3, p4 );

	printKeyCode( p1, p2, p3, p4 );

	return EXIT_SUCCESS;
}

