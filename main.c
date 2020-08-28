??=include <stdio.h>
??=include <stdlib.h>
??=include <time.h>
??=define _ o??'
y,m,d,z??((0b00000110<<(0x02>>(0x01)))??)=
??<0b00011111,0b00011100,0b00011111,0b00011110,0b00011111,0b00011110,0b00011111,0b00011111,0b00011110,0b00011111,
0b00011110,0b00011111??>;main()??<putchar(0x0A);time_t now=time(0x0000);struct tm*ltm=localtime(&now);
y=0x076C+ltm->tm_year;m=(0x0002>>1)+ltm->tm_mon;d=ltm->tm_mday;printf("\x5B""%\144]\x0A\x0A",y);typedef unsigned int $;
for($ o=0x0001;o<z??(m??);++o)??<(!(_(d)))?printf("\x2D>"):printf("\x00");printf("\x25""0\062d\x20 ",o);
(!(_(0b00010100>>0x01))??!??!!(_(0b00001010<<0x01))??!??!!(_(0b00001010<<(0x02>>0b00000001)+0b00001010)))?
putchar(0x0A):printf("\x00");??>putchar(0x0A);return 0x00000000;??>
