//
// Created by bacharma on 17/01/2018.
//

#ifndef MATALAOS_ENTITY_H
#define MATALAOS_ENTITY_H

#include <iostream>

class Entity{
protected:
    std::thread myThread;
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

#endif //MATALAOS_ENTITY_H
