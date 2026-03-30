Both for and while loops can be used to read from or write to arrays.
The difference is not capability, but clarity, control, and use cases.
👉 Functionally: Both can do the same work
👉 Practically: One may be better than the other depending on the situation


1️⃣ for loop with arrays
✅ Typical use
Use for loop when:

Number of elements is known
You need index-based traversal
Start, condition, and increment are clear

int arr[5];
for (int i = 0; i < 5; i++) {
    arr[i] = i * 10;
}

✅ Best choice when array size is fixed or known
-----------------------------------------------------
2️⃣ while loop with arrays
✅ Typical use
Use while loop when:

Number of elements is not fixed
Loop depends on a condition
Termination is based on data, not count
int i = 0;
while (i < 5) {
    printf("%d ", arr[i]);
    i++;
}

-------------------------------------------------------
  ✅ Choose for loop when:

Working with arrays using index
Loop count is known
Writing clean and readable code


Default choice for array processing


✅ Choose while loop when:

End condition depends on values
Working with strings ('\0')
Loop continuation is conditional


Default choice for string traversal
-------------------------------------------------------
  Array capacity Vs Array Length

  Capacity : How much it could hold 
  Length   : How much currently it holds 

