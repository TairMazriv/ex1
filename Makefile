CC=gcc
AR=ar
FLAGS= -Wall -g

all: mains maindloop maindrec libclassloops.a libclassrec.a libclassrec.so libclassloops.so 

mains: main.o  libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

loops: libclassloops.a
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs 	libclassloops.a basicClassification.o advancedClassificationLoop.o

recursives: libclassrec.a
libclassrec.a: basicClassification.o advancedClassificationRecursion.o 
	$(AR) -rcs 	libclassloops.a basicClassification.o advancedClassificationRecursion.o

recursived: libclassrec.so
libclassrec.so: basicClassification.o advancedClassificationRecursion.o 
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o 

loopd: libclassloops.so
libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so: basicClassification.o advancedClassificationLoop.o

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h	 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

.PHONY: clean all

clean: 	rm -f *.o *.a *.so mains maindloop maindrec
