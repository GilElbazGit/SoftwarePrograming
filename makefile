cc=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB1=basicClassification.o
OBJECTS_LIB2=advancedClassificationLoop.o
OBJECTS_LIB3=advancedClassificationRecursion.o
FLAGS= -Wall -g

all: mains maindloop maindrec loops  
mains: $(OBJECTS_MAIN) libclassrec.a 
	$(cc) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm

maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(cc) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(cc) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm

loops: libclassloops.a
libclassloops.a: $(OBJECTS_LIB1) $(OBJECTS_LIB2)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB1) $(OBJECTS_LIB2)

loopd: libclassloops.so 
libclassloops.so: $(OBJECTS_LIB1) $(OBJECTS_LIB2)
	$(cc) -shared -o libclassloops.so $(OBJECTS_LIB1) $(OBJECTS_LIB2)

recursives: libclassrec.a 
libclassrec.a: $(OBJECTS_LIB1) $(OBJECTS_LIB3)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB1) $(OBJECTS_LIB3)

recursived: libclassrec.so 
libclassrec.so: $(OBJECTS_LIB1) $(OBJECTS_LIB3)
	$(cc) -shared -o libclassrec.so $(OBJECTS_LIB1) $(OBJECTS_LIB3)

$(OBJECTS_MAIN): main.c NumClass.h
	$(cc) $(FLAGS) -c main.c
$(OBJECTS_LIB1): basicClassification.c NumClass.h
	$(cc) $(FLAGS) -c basicClassification.c
$(OBJECTS_LIB2): advancedClassificationLoop.c NumClass.h
	$(cc) $(FLAGS) -c advancedClassificationLoop.c
$(OBJECTS_LIB3): advancedClassificationRecursion.c NumClass.h
	$(cc) $(FLAGS) -c advancedClassificationRecursion.c


.PHONY: clean all
clean:
	rm -f *.o  *.a *.so mains maindloop maindrec