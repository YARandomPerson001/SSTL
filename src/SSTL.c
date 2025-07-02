
#include <stdio.h>

#include "./SSTL.h"

extern char * ValueToString( ulong Value );

ulong SSTL_Clear( ) { return ( ulong ) printf("\033[2J"); }

ulong SSTL_Position( ulong X, ulong Y ) { return printf( "\033[%s;%sH", ( char * ) ValueToString( X ), ( char * ) ValueToString( Y ) ); }

ulong SSTL_TextStyle( enum SSTL_TextStyle Style )
{
    switch ( Style )
    {
        case Reset:     return printf("\033[0m"); break;
        case Bold:      return printf("\033[1m"); break;
        case Faint:     return printf("\033[2m"); break;
        case Italic:    return printf("\033[3m"); break;
        case Underline: return printf("\033[4m"); break;
    }

    return 0;
}

ulong SSTL_ForegroundColor( bool Intensity, enum SSTL_TextColor Color)
{
    if ( Intensity == true )
        switch ( Color )
        {
            case Black:     return printf("\033[30m"); break;
            case Red:       return printf("\033[31m"); break;
            case Green:     return printf("\033[32m"); break;
            case Yellow:    return printf("\033[33m"); break;
            case Blue:      return printf("\033[34m"); break;
            case Magenta:   return printf("\033[35m"); break;
            case Cyan:      return printf("\033[36m"); break;
            case White:     return printf("\033[37m"); break;
        }
    else
        switch ( Color )
        {
            case Black:     return printf("\033[90m"); break;
            case Red:       return printf("\033[91m"); break;
            case Green:     return printf("\033[92m"); break;
            case Yellow:    return printf("\033[93m"); break;
            case Blue:      return printf("\033[94m"); break;
            case Magenta:   return printf("\033[95m"); break;
            case Cyan:      return printf("\033[96m"); break;
            case White:     return printf("\033[97m"); break;
        }
    

    return 0;
}

ulong SSTL_BackgroundColor( bool Intensity, enum SSTL_TextColor Color)
{
    if ( Intensity == true )
        switch ( Color )
        {
            case Black:     return printf("\033[40m"); break;
            case Red:       return printf("\033[41m"); break;
            case Green:     return printf("\033[42m"); break;
            case Yellow:    return printf("\033[43m"); break;
            case Blue:      return printf("\033[44m"); break;
            case Magenta:   return printf("\033[45m"); break;
            case Cyan:      return printf("\033[46m"); break;
            case White:     return printf("\033[47m"); break;
        }
    else
        switch ( Color )
        {
            case Black:     return printf("\033[100m"); break;
            case Red:       return printf("\033[101m"); break;
            case Green:     return printf("\033[102m"); break;
            case Yellow:    return printf("\033[103m"); break;
            case Blue:      return printf("\033[104m"); break;
            case Magenta:   return printf("\033[105m"); break;
            case Cyan:      return printf("\033[106m"); break;
            case White:     return printf("\033[107m"); break;
        }
    

    return 0;
}
