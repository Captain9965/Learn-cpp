/*
stack unwinding is the process of removing function entries from the call stack at runtime. 
the local objects are destroyed in reverse order in which they were created.
n C++, when an exception occurs, the function call stack is linearly searched for the exception handler, 
and all the entries before the function with exception handler are removed from the function call stack.
 So, exception handling involves Stack Unwinding if an exception is not handled in the same function (where it is thrown).
  Basically, Stack unwinding is a process of calling the destructors (whenever an exception is thrown) for all the automatic objects constructed at run time.
*/