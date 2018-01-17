//
// Created by izraelyni on 17/01/2018.
//

#include "New.h"

    New::New(const string& content)
    {
        stringstream s(content);
        string dump;
        string genreString;
        s >> dump >> producerId >> genreString >> serialId;
        genre = genreToString(genreString);

    }

    New::New(int producerId, int serialId, Genre genre)
    {
        this->producerId = producerId;
        this->serialId = serialId;
        this->genre = genre;
    }

    int New::getProducerId()
    {
        return producerId;
    }

    void New::setProducerId(int producerId)
    {
        this->producerId = producerId;
    }

    int New::getSerialId()
    {
        return serialId;
    }

    void New::setSerialId(int serialId)
    {
        this->serialId = serialId;
    }

    Genre New::getGenre()
    {
        return genre;
    }

    void New::setGenre(Genre genre)
    {
        this->genre = genre;
    }

    string New::getContent()
    {
        return "producer"+" "+producerId+" "+genreToString(genre)+" "+serialId;
    }

    static string New::genreToString(Genre gen)
    {
        if(gen == Genre::NEWS)
            return "NEWS";
        if(gen == Genre::SPORT)
            return "SPORT";
        if(gen == Genre::WEATHER)
            return "WEATHER";
        else return "";
    }

    static Genre New::stringToGenre(string str)
    {
        if(genreString.compare("NEWS"))
            return Genre::NEWS;
        if(genreString.compare("SPORT"))
            return Genre::SPORT;
        if(genreString.compare("WEATHER"))
            return Genre::WEATHER;
    }
