#ifndef FW_API_H
#define FW_API_H

#ifdef FW_SHARED_BUILD
    #ifdef FW_EXPORTS
        #ifdef _WIN32
            #define FW_API __declspec(dllexport)
        #else //UNIX (GCC)
            #define FW_API __attribute__ ((visibility ("default")))
        #endif
    #else
        #ifdef _WIN32
            #define FW_API __declspec(dllimport)
        #else
            #define FW_API 
    #endif
#endif
#else
    #define FW_API 
#endif


#endif