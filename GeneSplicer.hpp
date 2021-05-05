#pragma once
#include "Player.hpp"
namespace pandemic{
    class GeneSplicer:public Player
    {
    private:
        /* data */
    public:
        GeneSplicer(pandemic::Board& board,int cityid): Player(board,cityid){}
        GeneSplicer& discover_cure(Color) override;

        

    };
}