## C++ Standard Library

### Primitive types and when to use them:
    1. Primitive data types
        - int - 4 bytes and has values from -2147483648 to 2147483647.
        - char - 1 byte  has values from -128 to 127.
        - bool - true or false..duh
        - float - 4 bytes and is used to store decimal values. (Less precision, lighter)
        - double - decimal values as well but requires 8 bytes of memory. (More precision, heavier)
        - void - represents emptiness. e.g a function return type.

However, there are some things to keep in mind when using primitive data types. We have modifiers which are: 
- Signed - declares that the primitive type has negative and positive values.
- Unsigned - declares that the primitive type has only positive values.
- Short 
- Long

What this means in practice is the following:

| Data Type          	| Size in Bytes 	| Range             	|
|--------------------	|---------------	|-------------------	|
| signed char        	| 1             	| -2^7 - 1 to 2^7   	|
| signed short int   	| 2             	| -2^15 - 1 to 2^15 	|
| signed int         	| 4             	| -2^31 - 1 to 2^31 	|
| signed long        	| at least 4    	|                   	|
| signed long long   	| at least 8    	| -2^63 - 1 to 2^63 	|
| unsigned char      	| 1             	| 0 to 2^8 - 1      	|
| unsigned short int 	| 2             	| 0 to 2^16 - 1     	|
| unsigned int       	| 4             	| 0 to 2^32 - 1     	|
| unsigned long      	| at least 4    	|                   	|
| unsigned long long 	| at least8     	| 0 to 2^64 - 1     	|
| float              	| 4             	| undefined         	|
| double             	| 8             	| undefined         	|
| long double        	| 12            	| undefined         	|

Things to keep in mind:

If you overflow any of these, they will reset to their lowest value. For example:

Int x = Integer.MAX_VALUE + 1 
x = -2,147,483,648

unsigned int x = MAX_VALUE + 1
x = 0 
 
        2. Other useful user-defined or abstract data types

            - Structure - Literally what the name says, a structure to hold data.
                - struct structureName { member1; member2; … memberN; }
            - Enumeration - distinct type whose value is restricted to a range of values
                - enum Color { RED, GREEN, BLUE }
            - Typedef - used to declare type aliases 
                - More on that later, you don’t need this now.

There are many more, these are good to get you started.

2. Header files and imports

When we compile a program, each .cpp file is compiled independently, as such, the compiler has no knowledge of what names are declared in other compilation units. That means if we define a class or a global variable or a function, we must provide a declaration of that thing in each .cpp file that will utilize that, and it must be exactly the same. 
To overcome this, C++ adopted the convention of using header files to contain declarations. You make declarations in a header file, then use the #include directory in every .cpp that requires that declaration.
The compiler will automatically find the declaration and you don’t have to worry about anything else.

Example: Check playground header_example_one.

3. Relevant Types (you can search some more advanced ones later)

- std::array - a container for a fixed size array. (array.h)
- std::vector - a container for a dynamic array. (vector.h)
- std::map - a container with a key and a set of values. (map.h)
- std::string - a char representation of a string. (string.h)
- memory - provides facilities for memory management (memory.h)
- iostream - provides functions for input/output (iostream.h)
