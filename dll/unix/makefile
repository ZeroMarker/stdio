all: so math run clean
so:
	gcc -shared -fPIC math.c -o libmath.so
math:
	gcc main.c -lmath -L. -o main
main:
	gcc main.c -o main.o
run:
	./main
readelf:
	readelf -S main.o 
objdump:
	objdump -s -d main.o
clean:
	rm main libmath.so
exports:
	export LD_LIBRARY_PATH="$(pwd)"
ldd:
	ldd main
# objdump -r main.o
# readelf -h main.o