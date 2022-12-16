#ifndef VERIFY_H
#define VERIFY_H
#include <iostream>
#define verify(condition){\
     do{\
        if(!(condition)){\
            std::cerr << __FILE__ <<": " << __LINE__ << ": error: In the " <<__func__ << "(), verification of contidion \"" << #condition << "\" failed." << std::endl;  \
        } \
    }while(0);\
}
#endif
