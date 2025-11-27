& Write-Output "Compiling..."
& ccc -Wall -c main.c -o main.o
& ccc -Wall -c increment.c -o increment.o
& ccc -Wall -c decrement.c -o decrement.o
& ccc -Wall -c reset.c -o reset.o
& Write-Output "Linking..."
& ccc -o Main main.o increment.o decrement.o reset.o