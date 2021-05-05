#include <iostream>
#include "doctest.h"   
#include <stdexcept>

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "FieldDoctor.hpp"
#include "Medic.hpp"
#include "GeneSplicer.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "Virologist.hpp"

using namespace pandemic;

#include <string>
using namespace std; 
TEST_CASE("Board clean") {
    Board board;
    CHECK(board.is_clean() == true);
    board[City::Kinshasa] = 1;
    CHECK(board.is_clean() == false);
    Medic medic {board, City::Kinshasa};
    medic.treat(City::Kinshasa);
    CHECK(board.is_clean() == true);
}

TEST_CASE("operator []"){
	Board board;  
	board[City::Algiers] = 3; 
    CHECK_NOTHROW(board[City::Algiers] = 3);
    CHECK(board[City::Algiers] != 2); 
	board[City::London] = 2; 
    CHECK(board[City::London] == 2);   


}

TEST_CASE("OprationsExpert"){
    Board board;
    OperationsExpert player{board, Atlanta};
    player.build();
    player.take_card(City::London).take_card(City::Washington).take_card(City::Paris); 
    player.fly_direct(City::London);
    player.build();
    player.take_card(Washington).take_card(Manila).take_card(NewYork).take_card(StPetersburg);
    CHECK_THROWS(player.fly_shuttle(City::StPetersburg));
    player.fly_direct(London);
    player.build();
    for (int i = 1; i <= 5; i++)
    {
        board[City::London] = (unsigned int)i;
    }
    
    
    board.remove_cures();

}

TEST_CASE("Dispatcher"){
    Board board;
    Dispatcher player{board, City::Sydney};
    CHECK_THROWS(player.build());
    player.take_card(Montreal);
    CHECK_NOTHROW(player.build());
    player.take_card(Santiago).take_card(Seoul).take_card(Shanghai);
    board.build(City::Montreal);
    player.fly_direct(Cairo);
    CHECK_THROWS(player.build());
    player.take_card(Cairo);
    board[City::Cairo] = 1;
    CHECK_THROWS(player.discover_cure(Color::Black));
    CHECK_NOTHROW(player.treat(Cairo));
    CHECK(board[City::Cairo] == 0);
}

TEST_CASE("Scientist"){
    Board board;
    Scientist player{board, City::Santiago, 4};
    player.take_card(Moscow);
    player.build();
    CHECK_THROWS(player.discover_cure(Color::Black)); 
    
    player.take_card(City::Jakarta);
    CHECK_NOTHROW(player.discover_cure(Color::Red)); 

    player.take_card(City::Khartoum);
    CHECK_NOTHROW(player.discover_cure(Color::Yellow)); 

    player.take_card(City::Atlanta);
    CHECK_NOTHROW(player.discover_cure(Color::Blue)); 
}

TEST_CASE("Roles") {
    Board board;
    Medic medic {board, City::Bangkok};
    FieldDoctor fiel {board, City::Beijing};
    GeneSplicer gene {board, City::Bogota};
    CHECK(gene.role() == "GeneSplicer");
    CHECK(medic.role() == "Medic");
    CHECK(fiel.role() == "FieldDoctor");
}

TEST_CASE("test on player"){
    Board board;
	OperationsExpert player {board, City::Bangkok};  
	player.take_card(City::HongKong);
	player.take_card(City::Taipei);
	player.take_card(City::Osaka);
	player.take_card(City::Cairo);
	player.take_card(City::Bangkok);
    player.take_card(City::Madrid);
    player.take_card(City::Manila);
    player.take_card(City::Chennai);
    
    CHECK_NOTHROW((player.drive(City::HongKong)));
    CHECK_THROWS((player.drive(City::Taipei)));
    CHECK_THROWS((player.drive(City::Bangkok)));
    CHECK_THROWS((player.drive(City::Manila)));
}

TEST_CASE("Researcher")
{
    Board board;
    Researcher player{board, City::Lagos};
    CHECK_THROWS(player.discover_cure(Color::Yellow));


}