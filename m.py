from subprocess import call
from sys import argv

cpps = ""
objs = []
libs = []
clibs = ""
ln = len(argv)
rn = ln+1
sep = 0

call("cls", shell=True)


for i in range(1, ln):
	if argv[i] == ".x":
		sep = i
for i in range(1, ln):
	if i < sep:
		cpps += f" {argv[i]}.cpp "
	elif i > sep:
		if(argv[i] != "mod"):
			libs.append(f"/cpp/f/lib/{argv[i]}.cpp")
	if i != sep:
		objs.append(f"{argv[i]}.obj")

for i in range(len(libs)):

	clibs += f" {libs[i]} "

call(f"cl {cpps} -I/cpp/f/lib {clibs} -Fe:f/{argv[1]}", shell=True)

for i in range(len(objs)):

	call(f"del {objs[i]}", shell=True)

call("cls", shell=True)

call(f'"f\{argv[1]}.exe"', shell=True)
