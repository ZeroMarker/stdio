# at developer powershell for vs2022
all: dll link run clean

dll: add.c
	cl add.c /LD
dumpbin:
	dumpbin add.dll /exports
link:
	cl main.c /link add.lib
run:
	main.exe
clean:
	rm *.exp *.lib *.obj *.dll *.exe