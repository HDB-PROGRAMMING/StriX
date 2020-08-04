output:
	g++ -Wall -Wextra -O -ansi -pedantic -fPIC -shared src/StriX.h -o StriX.so

install:
	g++ -Wall -Wextra -O -ansi -pedantic -fPIC -shared StriX.h -o /lib/StriX.so