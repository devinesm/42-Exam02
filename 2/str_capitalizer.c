/*
• File: str_capitalizer.c | Allowed: write

Subject
Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (if it's a letter), puts the
rest in lowercase, and displays the result on the standard output, followed
by a \n.
A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.
If there are no arguments, the program must display \n.

Example:
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT Moar comPLEX" " But... This iS not THAT COMPLE
e
__second Test A Little Bit Moar Complex$
But... This Is Not That Complex$

*/