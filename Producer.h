//
// Created by bacharma on 17/01/2018.
//

#ifndef MATALAOS_PRODUCER_H
#define MATALAOS_PRODUCER_H

#include <iostream>

class Producer : Entity{

private:
    std::queue newsQueue<New>;
public:
    void insert(New n);
    std::queue getQueue();
};

#endif //MATALAOS_PRODUCER_H
