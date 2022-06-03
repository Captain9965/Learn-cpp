#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    /*inline functions only save execution time only when the time used in switching between the calling function and 
    the called function is greater than the execution time of the called function
    Disadvantages:
    1) The added variables from the inlined function consumes additional registers, After in-lining function if variables number which are going to use register increases than they may create overhead on register variable resource utilization. This means that when inline function body is substituted at the point of function call, total number of variables used by the function also gets inserted. So the number of register going to be used for the variables will also get increased. So if after function inlining variable numbers increase drastically then it would surely cause an overhead on register utilization.

    2) If you use too many inline functions then the size of the binary executable file will be large, because of the duplication of same code.
    3) Too much inlining can also reduce your instruction cache hit rate, thus reducing the speed of instruction fetch from that of cache memory to that of primary memory.
    4) Inline function may increase compile time overhead if someone changes the code inside the inline function then all the calling location has to be recompiled because compiler would require to replace all the code once again to reflect the changes, otherwise it will continue with old functionality.

    5) Inline functions may not be useful for many embedded systems. Because in embedded systems code size is more important than speed.
    6) Inline functions might cause thrashing because inlining might increase size of the binary executable file. Thrashing in memory causes performance of computer to degrade.




    */

    return 0;
}