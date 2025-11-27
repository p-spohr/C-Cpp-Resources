# ccc is alias for gcc (C:\msys64\ucrt64\bin\gcc.exe)
& ccc -Wall -c main.c -o main.o # compile main
& ccc -Wall -c add.c -o add.o # compile add
& ccc -o Main main.o add.o # link into Main.exe