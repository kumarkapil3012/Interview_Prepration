.PHONY=all clean

all:
	make -C Compilation_Process
	make -C Bit_Manipulation
	make -C Arrays_Pointers
	make -C Storage_classes
	make -C C

clean:
	make -C Compilation_Process clean
	make -C Bit_Manipulation clean
	make -C Arrays_Pointers clean
	make -C Storage_classes clean
	make -C C clean


