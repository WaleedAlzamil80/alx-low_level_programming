# static library
## First of all you need to Compile the source files into object files:
```gcc -c <your_files.c>```
## Create the static library using the ```<ar>``` command:
```ar rc libmy.a <your_compiled_files.o>```
## The command used to create or update the index is called ```<ranlib>```, and is invoked as follows:
```ranlib libmy.a```
## or we could use all at once
```ar rcs libmy.a <your_compiled_files.o>```
## Now you can invoke your library as follows:
```gcc <your_main_program.c> -L. -lmy -o prog```
```./prog```
