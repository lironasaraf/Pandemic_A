#pragma once
#include "Player.hpp"
namespace pandemic{
    class Medic:public Player
    {
    private:
        /* data */
    public:
        Medic(pandemic::Board& board,int cityid): Player(board,cityid){};
        Medic &treat(City) override;


   


    };
    
    
}