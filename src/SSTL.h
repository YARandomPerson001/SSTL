#ifndef SSTL
#define SSTL

#include <stdbool.h>

#define ulong unsigned long long

enum SSTL_TextStyle { Reset, Bold, Faint, Italic, Underline };
enum SSTL_TextColor { Black, Red, Green, Yellow, Blue, Magenta, Cyan, White };

ulong SSTL_Clear( );

ulong SSTL_Position( ulong X, ulong Y );

ulong SSTL_ForegroundColor( bool Intensity, enum SSTL_TextColor );
ulong SSTL_BackgroundColor( bool Intensity, enum SSTL_TextColor );

#endif