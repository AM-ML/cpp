all:
	python m.py c .x mod
d:
	python d.py c .x mod
r:
	cls
	f\c.exe
g:
	g++ c.cpp -o c.exe -Ofast -march=native -flto
	cls
	c.exe
