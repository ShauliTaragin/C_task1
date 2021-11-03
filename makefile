
CC=gcc
AR=ar
Maths=-lm
Flags= -Wall -g  
Objects_loop= advancedClassificationLoop.o basicClassification.o
Objects_rec= advancedClassificationRecursion.o basicClassification.o
Objects_main= main.o


all:libclassloops.a libclassrec.a libclassrec.so libclassloops.so mains maindloop maindrec

loops:libclassloops.a

recursives:libclassrec.a

recursived:libclassrec.so

loopd:libclassloops.so

libclassloops.a: $(Objects_loop)
	$(AR) -rcs libclassloops.a $(Objects_loop)

libclassrec.a: $(Objects_rec) 
	$(AR) -rcs libclassrec.a $(Objects_rec)

libclassrec.so: $(Objects_rec)
	$(CC) -shared -o libclassrec.so $(Objects_rec) $(Maths)

libclassloops.so: $(Objects_loop)
	$(CC) -shared -o libclassloops.so $(Objects_loop) $(Maths)


mains: $(Objects_main) libclassrec.a
	$(CC) $(Flags) -o mains $(Objects_main) libclassrec.a $(Maths)

maindloop: $(Objects_main) libclassloops.so
	$(CC) $(Flags) -o maindloop $(Objects_main) $(Maths) ./libclassloops.so

maindrec: $(Objects_main) libclassrec.so
	$(CC) $(Flags) -o maindrec $(Objects_main)  $(Maths) ./libclassrec.so

main.o: main.c NumClass.h
	$(CC) $(Flags) -c main.c $(Maths)

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(Flags) -c advancedClassificationLoop.c $(Maths)

basicClassification.o: basicClassification.c
	$(CC) $(Flags) -c basicClassification.c $(Maths)

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(Flags) -c advancedClassificationRecursion.c $(Maths)

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec