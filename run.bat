REM kill me
@echo off
g++ -c .\src\main.cpp -I.\libs\include
g++ -c .\src\entity.cpp -I.\libs\include
g++ main.o entity.o -o si -L.\libs\lib -lsfml-graphics -lsfml-window -lsfml-system
