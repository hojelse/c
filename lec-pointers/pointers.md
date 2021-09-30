# Notes

Observe wierd pointer

`int *ptr;` is null which parses as 0x0

printing the value at 0x0 by `p &ptr` prints some data from somewhere

```
$ gdb pointers 
GNU gdb (Ubuntu 9.2-0ubuntu1~20.04) 9.2
...
Reading symbols from pointers...
(gdb) b *main
Breakpoint 1 at 0x1149: file pointers.c, line 3.
(gdb) r
Starting program: /home/path/to/pointers 

Breakpoint 1, main () at pointers.c:3
3	int main() {
(gdb) p ptr
$1 = (int *) 0x0
(gdb) p &ptr
$2 = (int **) 0x7fffffffe0f8
```
