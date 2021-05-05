
#pragma once
#include <iostream>
#include <list>
#include <map>
#include <array>
#include "City.hpp"
#include "Color.hpp"
using namespace pandemic;
using namespace std;

namespace pandemic {
        enum City
    {  
        Algiers,
        Atlanta,
        Baghdad,
        Bangkok,
        Beijing,
        Bogota,
        BuenosAires,
        Cairo,
        Chennai,
        Chicago,
        Delhi,
        Essen,
        HoChiMinhCity,
        HongKong,
        Istanbul,
        Jakarta,
        Johannesburg,
        Karachi,
        Khartoum,
        Kinshasa,
        Kolkata,
        Lagos,
        Lima,
        London,
        LosAngeles,
        Madrid,
        Manila,
        MexicoCity,
        Miami,
        Milan,
        Montreal,
        Moscow,
        Mumbai,
        NewYork,
        Osaka,
        Paris ,
        Riyadh ,
        SanFrancisco,
        Santiago ,
        SaoPaulo ,
        Seoul,
        Shanghai,
        StPetersburg,
        Sydney,
        Taipei,
        Tehran,
        Tokyo,
        Washington};
        
    class City_data

    {
        pandemic::City city ;
        Color color;
        unsigned int diseases;
        bool station;
        list<City> neighbors;

    public:
        City_data(){};
        City_data(const City ci, const Color co, const unsigned int dis, const bool st, const list<pandemic::City> nb) : city(ci), color(co), diseases(dis), station(st)
        {
            neighbors = nb;
        };
        ~City_data(){};
        unsigned int &get_Diseases(){
            return diseases;
        };
       // friend ostream &operator<<(ostream &os, const City_data &c);
    };
    



    };
    
