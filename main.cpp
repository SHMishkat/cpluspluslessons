#include <iostream>

using namespace std;

int main() {
   cout << "Sarowar H. Mishkat\n";
   cout << "Dhaka\n";
   cout << "CSE\n";
}

/*

\'	single quote	byte 0x27 in ASCII encoding
\"	double quote	byte 0x22 in ASCII encoding
\?	question mark	byte 0x3f in ASCII encoding
\\	backslash	byte 0x5c in ASCII encoding
\a	audible bell	byte 0x07 in ASCII encoding
\b	backspace	byte 0x08 in ASCII encoding
\f	form feed - new page	byte 0x0c in ASCII encoding
\n	line feed - new line	byte 0x0a in ASCII encoding
\r	carriage return	byte 0x0d in ASCII encoding
\t	horizontal tab	byte 0x09 in ASCII encoding
\v	vertical tab	byte 0x0b in ASCII encoding
\nnn	arbitrary octal value	byte nnn
\xnn	arbitrary hexadecimal value	byte nn
\unnnn (since C++11)	universal character name
(arbitrary Unicode value);
may result in several characters	code point U+nnnn
\Unnnnnnnn (since C++11)	universal character name
(arbitrary Unicode value);
may result in several characters	code point U+nnnnnnnn 

*/