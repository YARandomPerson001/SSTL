
#include <stdlib.h>

#define ulong unsigned long long

char * ValueToString( ulong Value )
{
    register ulong Length = 0;
    register ulong Dummy = Value;

    // Get the digit length.
    for( register ulong i = Value; i != 0; Length++ )
        i /= 10;

    // Convert the number into a string.
    char * String = ( char * ) calloc( Length, sizeof( char * ) );

    for( register ulong i = Length; i > 0; i-- )
    {
        switch ( Dummy % 10 )
        {
            case 0: String[i - 1] = '0'; break;
            case 1: String[i - 1] = '1'; break;
            case 2: String[i - 1] = '2'; break;
            case 3: String[i - 1] = '3'; break;
            case 4: String[i - 1] = '4'; break;
            case 5: String[i - 1] = '5'; break;
            case 6: String[i - 1] = '6'; break;
            case 7: String[i - 1] = '7'; break;
            case 8: String[i - 1] = '8'; break;
            case 9: String[i - 1] = '9'; break;
        }

        Dummy /= 10;
    }

    return String;
}
