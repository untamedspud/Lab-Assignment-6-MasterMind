#include <stdio.h>

// Prototypes
char * getColorString( char a );
void printKeyCode( char a, char b, char c, char d );
void getKeyCode( char *a, char *b, char *c, char *d );


/*
 * Function:    getKeyCode
 * Description: Prompts the user for the key code and reads it in to the four
 *              formal arguments.
 * Inputs:      None.
 * Outputs:     Four formal arguments representing the four positions on the
 *              game board.
 * Returns:     Nothing.
 */
void getKeyCode( char *a, char *b, char *c, char *d )
{ 
	puts( "Enter a four character key code:" );
	scanf( "%c%c%c%c", a, b, c, d );	// note: no & before the characters.  Why?
	scanf( "%*c" );				// discard the newline character

	return;
}



/*
 * Function:    printKeyCode
 * Description: Displays to the screen the full names of the colors passed in as 
 *              formal arguments.
 * Inputs:      Four characters representing colors Red, Black, Green, and Yellow.
 * Outputs:     None.
 * Returns:     Nothing.
 */
void printKeyCode( char a, char b, char c, char d )
{
	puts( "The key code is: " );

	printf( "%s %s %s %s\n", getColorString( a ), getColorString( b ),
                               getColorString( c ), getColorString( d ) );

	return;
}



/*
 * Function:    getColorString
 * Description: Converts a single key code into it's English equivalent. 
 * Inputs:      The color code to be converted to English for display to the user.
 * Outputs:     None.
 * Returns:     A string representing the English version of the code passed in 'a'.
 */
char * getColorString( char a )
{
	switch ( a ) {
		case 'r': case 'R': return "Red";
		case 'b': case 'B': return "Black";
		case 'g': case 'G': return "Green";
		case 'y': case 'Y': return "Yellow";
		default:  return "ERROR-UNKNOWN";
	}
}

