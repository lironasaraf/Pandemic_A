#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <iostream>
#include <stdexcept>
#include <map>
#include <set>
using namespace std;

namespace pandemic{
    class Board
    {
    
        map<pandemic::City, City_data> connects;
        // = map<pandemic::City, City_data> ();
        map<City, int> disease_level;
        set<City> research_station;

        array<bool, 4> medicines;
        void connections();
    public:
        Board()
        {
            medicines = {false, false, false, false};
            connections();
        };

    public:
        
        Board(pandemic::Board& board){


        };
        ~Board(){};
        bool is_clean();
        const unsigned int operator[](int city) const; 
        unsigned int &operator[](City city);   
        friend ostream &operator<<(ostream &ostream, const Board &board);
        void remove_cures();
        void build(City city);
    };
    

    
};