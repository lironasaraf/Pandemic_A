#pragma once
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <vector>

namespace pandemic{
    class Player
    {
    private:
        std::vector<pandemic::City> cards;
        Board board;
        int curr_city;
    public:
        Player(pandemic::Board& board, int city_Id): curr_city(city_Id){
            this->board = board; 
        };

        virtual Player& drive (City city_Id);
        virtual Player& fly_direct (City city_Id);
        virtual Player& fly_shuttle (City city_Id);
        virtual Player& fly_charter (City city_Id);
        virtual Player& build ();
        virtual Player& discover_cure (pandemic::Color color);
        virtual Player& treat (City city_Id);
        virtual Player& take_card (City city_Id);
        virtual std::string role ();
        
    };

    
}