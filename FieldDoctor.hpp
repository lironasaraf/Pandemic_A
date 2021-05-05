#pragma once
#include "Player.hpp"
namespace pandemic{
    class FieldDoctor:public Player
    {
    private:
        /* data */
    public:
        FieldDoctor(pandemic::Board& board,int cityid): Player(board,cityid){}
        FieldDoctor& treat(City) override;

       

    };
}