harlockkeygen_cli : intarray.o char_key_tools.o harlockkeygen_cli.o 
	gcc intarray.o char_key_tools.o harlockkeygen_cli.o -o ./hkkeygen_cli

<<<<<<< HEAD
harlockkeygen_cli.o : harlockkeygen_cli.c char_key_tools.h
	gcc -c -g -O3 -DDEBUG -W -Wall -pedantic harlockkeygen_cli.c
=======
harlockkeygen_cli : intarray.o char_key_tools.o harlockkeygen_cli.o 
	gcc intarray.o char_key_tools.o harlockkeygen_cli.o -o ./harlockkeygen_cli

harlockkeygen_cli.o : harlockkeygen_cli.c char_key_tools.h
	gcc -c harlockkeygen_cli.c

harlockkeygen.o : harlockkeygen.c char_key_tools.h
	gcc -c harlockkeygen.c
>>>>>>> 5af5ab35982d4e3410566c11eb7def38f07728cc

intarray.o : intarray.c intarray.h
	gcc -c intarray.c

char_key_tools.o : char_key_tools.c char_key_tools.h
	gcc -c -g -O3 -DDEBUG -W -Wall -pedantic char_key_tools.c

intarray.o : intarray.c intarray.h
	gcc -c -g -O3 -DDEBUG -W -Wall -pedantic intarray.c
