g++ -c .\main.cpp -o .\main.o -I..\SFML-2.5.1\include\
g++ .\main.o -o .\main.exe ..\SFML-2.5.1\lib\libsfml-graphics.a  ..\SFML-2.5.1\lib\libsfml-system.a   ..\SFML-2.5.1\lib\libsfml-window.a