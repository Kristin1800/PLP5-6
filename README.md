# PLP5-6
Variable and naming rules explored

 What is the syntax for declaring a function in your language? 

The data type of the function, the name of the function, then the parameters followed by the actual statements in the function which are enclosed in brackets. 

2. Are there any rules about where the function has to be placed in your code file so that it can run (i.e., before main, after main, in the same file, in the same folder, etc)? 
	
The functions have to be put before main, and in the same file, unless exceptions are used.

3. Does your language support recursive functions? If so, write one. 

Yes it does, see the attached code.

4. Can functions in your language accept multiple parameters? Can they be of different data types?
It can accept multiple parameters, but they can not be of different data types if you want them returned. 

5. Can functions in your language return multiple values at the same time? 

No, unless an exception is used.

6. Declare a variable (say, x) in the main body of your program. Then declare a variable of the same name inside of a loop. Is there a conflict? Is the old variable overwritten or do you now have two variables of the same name? 

The code still runs with two different values named the same thing, but whatever I declared most recently overwrote the old variable. 

7. What if the other x is inside a function? 
	
The code still runs but the overwriting issue is still there, the issue being that whatever is most recently declared will overwrite whatever the variable had before.

8. Can you have variables that are globally accessible? What are the rules for creating them? 
	
Yes you can. They are available throughout the lifetime of a program. They are declared at the top of the program outside all of the functions or blocks. 

9. Are variables passed by value or by reference? (Hint: write a function that alters its input, but doesn't return it. Pass it a variable, and see if the alteration is visible in main after you call the function) 
	
C++ supports both passing by value and reference.

10. If you run this code (or the equivalent) in your language, what is the output? What does that tell you about how the language handles assignments? 
char [] a = {'c','a','t'} 
char [] b = {'d','o','g'}
 a=b 
b[1] = 'u' 
print a 
print b 
	
There was a lot syntactically I had to change, such as char a [] instead of char [] a. Along with Cout statements as well instead of print statements. When I originally tried to print this after the syntax issues, it wouldn’t let me assign the char arrays to each other. It did let me change b[1] to ‘u’ instead of ‘o’. This tells me that set data types can not be reassigned after they are defined. I also learned that semicolons make or break a program as well. Besides that, it was a basic syntax change of this code.

 
