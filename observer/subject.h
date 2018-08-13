#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"

class Subject
{
public:
    virtual void register_observer(Observer* observer) = 0;
    virtual void remove_observer(Observer* observer) = 0;
    virtual void notify_observers() = 0;
};

#endif
