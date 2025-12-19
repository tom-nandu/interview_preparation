What happens when you run this
printf/scanf → asks for a number, prints it.

malloc/free → allocates an array, fills it, prints, then frees it.

assert → checks condition; if false, program aborts.

atexit → registers cleanup(); runs when exit() is called.

system → runs a shell command (ls or dir).

perror/strerror → shows error when opening a missing file.

exit(EXIT_SUCCESS) → ends program with success code.

abort() → ends program immediately, no cleanup.

return 0 → ends main normally.




ASSERT : 
What it does: Checks if the expression is true at runtime.

If true → program continues normally.

If false → prints an error message and calls abort(), which stops the program immediately.

Purpose: Used for debugging and catching logic errors early. It’s like saying: “This condition must always be true. If not, something is wrong.”


FREE : 
Assign (malloc) → you get memory from the heap.

Use → you store values in that memory.

Release (free) → you give memory back to the OS.

Nullify → you prevent accidental access to freed memory.

If you skip free, you get a memory leak. If you skip nullify, you risk a dangling pointer (accessing freed memory).


ABORT() : 
abort() = emergency stop, no cleanup.

Inside a function → program halts when that function is called.

Inside main → program halts right there.

In both cases, nothing after abort() executes.
