#pragma once
#include "Player.hpp"
namespace pandemic{
    class Researcher:public Player
    {
    private:
        /* data */
    public:
        Researcher(pandemic::Board& board,int cityid): Player(board,cityid){}
        Researcher& discover_cure(Color) override;

       

    };
}