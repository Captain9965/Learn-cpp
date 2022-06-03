#include <ctime>
#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    time_t time_now= time(0);
    
    //convert the time to string:
    char* dt = ctime(&time_now);
    printf("The time since 1970 is: %d\n", int(time_now));

    //This is the system time:
    printf("The time in string format is %s", dt);

    // convert now to tm struct for UTC
   tm *gmtm = gmtime(&time_now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;

    tm *ltm = localtime(&time_now);

   // print various components of tm structure.
   cout << "Year:" << 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<< ltm->tm_mday << endl;
   cout << "Time: "<< 5+ltm->tm_hour << ":";
   cout << 30+ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
    return 0;
}