/*
• File: rstr_capitalizer.c | Allowed: write

Subject

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.
A word is a section of string delimited by spaces/tabs or the start/end of
the string.
If there are no parameters, display \n.

Examples:
$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT Moar comPLEX" " But... This iS not THAT COMPLEX
e
seconD tesT A littlE biT moaR compleX$
but... thiS iS noT thaT compleX$

*/