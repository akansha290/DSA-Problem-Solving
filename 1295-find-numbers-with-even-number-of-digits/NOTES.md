​There are many great solutions already posted similar to this. The idea is simple - use log base 10 to get number of digits and check for even/odd. Just a small catch here - log base 10 of a number gives the number of digits - 1.
Example -
(int)log10(9) = 0
So if number of digits is even, log10(n) will be odd. Hence, we just need to do bitwise AND of log10(n) and 1 for odd check.
