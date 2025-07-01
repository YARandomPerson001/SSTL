
unsigned long long TextToValue( char * Text, unsigned int Length )
{
    register long long Value = 0;

    for ( volatile unsigned int i = 0; i < Length; i++ )
    {
        if ( i > 0 ) Value *= 10;

        switch ( Text[ i ] )
        {
            case '1': Value += 1; break;
            case '2': Value += 2; break;
            case '3': Value += 3; break;
            case '4': Value += 4; break;
            case '5': Value += 5; break;
            case '6': Value += 6; break;
            case '7': Value += 7; break;
            case '8': Value += 8; break;
            case '9': Value += 9; break;
        }
    }

    return Value;
}
