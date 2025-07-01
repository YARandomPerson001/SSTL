#ifndef SSTL
#define SSTL

#include <stdbool.h>

#define ushort unsigned short

enum SSTL_TextStyle { Reset, Bold, Faint, Italic, Underline };
enum SSTL_TextColor { Black, Red, Green, Yellow, Blue, Magenta, Cyan, White };

ushort SSTL_Clear( );

ushort SSTL_Position( ushort X, ushort Y );

ushort SSTL_ForegroundColor( bool Intensity, enum SSTL_TextColor );
ushort SSTL_BackgroundColor( bool Intensity, enum SSTL_TextColor );

#endif