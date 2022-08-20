Main.o: src/Main.cpp
	g++ src/Main.cpp -o bin/Main.exe -W -Wall

clean:
	rm bin\*.o