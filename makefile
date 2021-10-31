//shortcuts 
CC= gcc
AR= ar
Maths= -lm
Flags= -Wall -g  //shows warnings
Objects_loop= advancedClassificationLoop.o basicClassification.o
Objects_rec= advancedClassificationRecursion.o basicClassification.o
Objects_main= main.o

//libraries 
libclassloops.a: $(Objects_loop)
	$(AR) -rcs libclassloops.a $(Objects_loop)

libclassrec.a: $(Objects_rec)
	$(AR) -rcs libclassloops.a $(Objects_rec) 

libclassrec.so: $(Objects_rec)
	$(CC) -shared -o libclassrec.so $(Objects_rec) 

libclassloops.so: $(Objects_loop)
	$(CC) -shared -o libclassloops.so $(Objects_loop) 

//all our mains 
mains: $(Objects_main) libclassrec.a
	$(CC) $(Flags) -o mains $(Objects_main) libclassrec.a

maindloop: $(Objects_main)
	$(CC) $(Flags) -o maindloop $(Objects_main) ./libclassloops.so

maindrec: $(Objects_main)
	$(CC) $(Flags) -o maindrec $(Objects_main) ./libclassrec.so


//functions
main.o: main.c NumClass.h
	$(CC) $(Flags) -c main.c $(Maths)

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(Flags) -c advancedClassificationLoop.c $(Maths)

basicClassification.o: basicClassification.c
	$(CC) $(Flags) -c basicClassification.c $(Maths)

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(Flags) -c advancedClassificationRecursion.c $(Maths)
