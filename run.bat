REM kill me
@echo off
g++ -c .\src\main.cpp -I.\libs\include
g++ -c .\src\playerEntity.cpp -I.\libs\include
g++ -c .\src\enemyEntity.cpp -I.\libs\include
g++ main.o playerEntity.o enemyEntity.o -o si -L.\libs\lib -lsfml-graphics -lsfml-window -lsfml-system
