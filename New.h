//
// Created by izraelyni on 17/01/2018.
//

#ifndef MATALAOS_NEW_H
#define MATALAOS_NEW_H

enum Genre{NEWS,SPORT,WEATHER};

using namespace std;

class New{
public:
    New(const string& content);
    New(int producerId, int serialId, Genre genre);

    int getProducerId();
    void setProducerId(int producerId);

    int getSerialId();
    void setSerialId(int serialId);

    Genre getGenre();
    void setGenre(Genre genre);

    string getContent();
};


#endif //MATALAOS_NEW_H

