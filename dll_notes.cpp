

✅ Signature
-----------------------------------------------------------------------------------------------------------------
: Why do we use signatures in headers?
Headers (.h or .hpp) contain signatures so other files know:

What functions exist
How to call them
What types they expect and return

The actual implementation (body) goes in .c or .cpp.

class Dll {
public:
    void push_front(int value);   // signature
    bool pop_back(int& out);      // signature
};

A normal class that works with a fixed type (e.g., int).
Example:
C++class MyList {public:    void push_front(int value);};Show more lines

Here, MyList can only store int. If you want to store double or string, you must write another class or overload everything.

------------------------------------------------------------------------------------------------------------------------------------------------------
  
✅ Template class

A generic class that works with any type.
Example:
C++template <typename T>class MyList {public:    void push_front(T value);};Show more lines

Now MyList<int> stores integers, MyList<std::string> stores strings, etc.
Templates are compile-time code generators: the compiler creates a version for each type you use.


------------------------------------------------------------------------------------------------------------------------------------------------------

  
