#include <stdafx.h>

double Round(double val, int dp)
{
    int modifier = 1;
    for (int i = 0; i < dp; ++i)
		modifier *= 10;

	if(val < 0.0)
		return floor(val * modifier - 0.5) / modifier;
	return floor(val * modifier + 0.5) / modifier;
}

BOOL IsInteger(double val)
{
    double temp = Round(val,0);

	int ii = (int)temp;

    if (temp != val)
        return FALSE;
    else if( abs( temp - ii ) > 0 )
		return FALSE;
	else
        return TRUE;
}