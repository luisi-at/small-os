#ifndef SMALLOS_THREAD_HPP
#define SMALLOS_THREAD_HPP

// Thread control block
#include <stdint.h>
#include <cstddef>

namespace smallos
{

    // typedef the function pointer that points to functions to be used in the threads
    typedef void (*threadHandler)(); 

    class SmallOSThread
    {
        public:
        // Construct the thread
            SmallOSThread(uint32_t sp, size_t stksz, threadHandler th): 
                stackptr(&sp), stackSize(sizeof(stksz)), threadFunction(th)
                {}; 

            ~SmallOSThread();
            // Update the stack pointer value for this thread
            void updateStackPtr();
            // Return the stack pointer for this thread
            void returnStackPtr();


        private:
            uint32_t *stackptr;
            size_t stackSize;
            threadHandler threadFunction;
    };
}






#endif //SMALLOS_HPP