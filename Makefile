output:
	touch tmp.h
	echo "#include \"src/StriX.h\"" > tmp.h
	g++ -Wall -Wextra -O -ansi -pedantic -fPIC -shared tmp.h -o StriX.so

install:
	touch tmp.h
	echo "#include \"src/StriX.h\"" > tmp.h
	g++ -Wall -Wextra -O -ansi -pedantic -fPIC -shared tmp.h -o /lib/StriX.so