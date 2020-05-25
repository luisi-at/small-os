#ifndef SMALLOS_SCHEDULER_HPP
#define SMALLOS_SCHEDULER_HPP

#include "smallos_thread.hpp"

// Need to extern the singleton so it can be access across files

// A singleton to manage the threads. Singleton as needs to be a class and only one scheduler can exist.

namespace smallos
{
    class SmallOSScheduler
    {
        public:

            // Ensure only one object of this class exists
            static SmallOSScheduler& getScheduler(){
                static SmallOSScheduler instance;
                return instance;
            }

            void initOS();
            void scheduleOS();
            void runOS();


        private:
            // thread management stuff

            // Enforcing the singleton pattern
            // should also include copy constructor and destructor etc but won't worry about that for the moment
            SmallOSScheduler(){};

    };

    // instance of the singleton:
    // SmallOSScheduler& scheduler = SmallOSScheduler::getScheduler();
}


#endif // SMALLOS_SCHEDULER_HPP