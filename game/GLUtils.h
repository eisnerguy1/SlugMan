#ifndef GLUTILS_H
#define GLUTILS_H

#if __APPLE__
#include <mach/mach_time.h>
#elif _WIN32
#include <windows.h>
#endif

class GLUtils {
public:
    GLUtils();
    
    int randomInt(int end);
    
    double now();

#if _WIN32
    static void log(LPCWSTR format, ...);
    static void log(LPCSTR format, ...);
#endif
    
private:
#if __APPLE__
    double mach_convert;
#elif _WIN32
    LARGE_INTEGER freq;
#endif
};

#endif
