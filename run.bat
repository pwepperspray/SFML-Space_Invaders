REM kill me
@echo off
g++ -w -c .\src\main.cpp -I.\libs\include
g++ -w -c .\src\entity.cpp -I.\libs\include
g++ main.o entity.o -w -o si -L.\libs\lib -lsfml-graphics -lsfml-window -lsfml-system
