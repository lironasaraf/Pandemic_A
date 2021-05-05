#include "Board.hpp"
#include "City.hpp"
#include <iostream>
#include <stdexcept>
#include <map>
using namespace std;

namespace pandemic{
        void Board::build(City city){
        this->research_station.insert(city);
    }



    void Board::remove_cures(){

    }

    bool Board::is_clean(){
        return false;
    }


const unsigned int Board::operator[](int city) const
{
    
    return 1;
}

 unsigned int &Board::operator[](City city)
{
    
    return connects.at(city).get_Diseases();
}



ostream &operator<<(ostream &os, const Board &b)
{
    os << "  ";
    return os;
}
    void Board::connections(){

        ////////////////////all yellow city 
    connects[City::Bogota] = City_data(City::Bogota, Color::Yellow, 0, false, {City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires});
    connects[City::BuenosAires] = City_data(City::BuenosAires, Color::Yellow, 0, false, {City::Bogota, City::SaoPaulo});
    connects[City::Johannesburg] = City_data(City::Johannesburg, Color::Yellow, 0, false, {City::Kinshasa, City::Khartoum});
    connects[City::Khartoum] = City_data(City::Khartoum, Color::Yellow, 0, false, {City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg});
    connects[City::Kinshasa] = City_data(City::Kinshasa, Color::Yellow, 0, false, {City::Lagos, City::Khartoum, City::Johannesburg});
    connects[City::Lagos] = City_data(City::Lagos, Color::Yellow, 0, false, {City::SaoPaulo, City::Khartoum, City::Kinshasa});
    connects[City::Lima] = City_data(City::Lima, Color::Yellow, 0, false, {City::MexicoCity, City::Bogota, City::Santiago});
    connects[City::LosAngeles] = City_data(City::LosAngeles, Color::Yellow, 0, false, {City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney});
    connects[City::MexicoCity] = City_data(City::MexicoCity, Color::Yellow, 0, false, {City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota});
    connects[City::Miami] = City_data(City::Miami, Color::Yellow, 0, false, {City::Atlanta, City::MexicoCity, City::Washington, City::Bogota});
    connects[City::Santiago] = City_data(City::Santiago, Color::Yellow, 0, false, {City::Lima});
    connects[City::SaoPaulo] = City_data(City::SaoPaulo, Color::Yellow, 0, false, {City::Bogota, City::BuenosAires, City::Lagos, City::Madrid});
    
    
    ////////////////////all black city
    connects[City::Algiers] = City_data(City::Algiers, Color::Black, 0, false, {City::Paris, City::Istanbul, City::Cairo, City::Madrid});
    connects[City::Baghdad] = City_data(City::Baghdad, Color::Black, 0, false, {City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi});
    connects[City::Cairo] = City_data(City::Cairo, Color::Black, 0, false, {City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh});
    connects[City::Chennai] = City_data(City::Chennai, Color::Black, 0, false, {City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta});
    connects[City::Delhi] = City_data(City::Delhi, Color::Black, 0, false, {City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata});
    connects[City::Istanbul] = City_data(City::Istanbul, Color::Black, 0, false, {City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow});
    connects[City::Karachi] = City_data(City::Karachi, Color::Black, 0, false, {City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi});
    connects[City::Kolkata] = City_data(City::Kolkata, Color::Black, 0, false, {City::Delhi, City::Chennai, City::Bangkok, City::HongKong});
    connects[City::Moscow] = City_data(City::Moscow, Color::Black, 0, false, {City::StPetersburg, City::Istanbul, City::Tehran});
    connects[City::Mumbai] = City_data(City::Mumbai, Color::Black, 0, false, {City::Karachi, City::Delhi, City::Chennai});
    connects[City::Riyadh] = City_data(City::Riyadh, Color::Black, 0, false, {City::Baghdad, City::Cairo, City::Karachi});
    connects[City::Tehran] = City_data(City::Tehran, Color::Black, 0, false, {City::Baghdad, City::Moscow, City::Karachi, City::Delhi});

                ////////////////////all blue city
    connects[City::Atlanta] = City_data(City::Atlanta, Color::Blue, 0, false, {City::Chicago, City::Miami, City::Washington});
    connects[City::Chicago] = City_data(City::Chicago, Color::Blue, 0, false, {City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal});
    connects[City::Essen] = City_data(City::Essen, Color::Blue, 0, false, {City::London, City::Paris, City::Milan, City::StPetersburg});
    connects[City::London] = City_data(City::London, Color::Blue, 0, false, {City::NewYork, City::Madrid, City::Essen, City::Paris});
    connects[City::Madrid] = City_data(City::Madrid, Color::Blue, 0, false, {City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers});
    connects[City::Milan] = City_data(City::Milan, Color::Blue, 0, false, {City::Essen, City::Paris, City::Istanbul});
    connects[City::Montreal] = City_data(City::Montreal, Color::Blue, 0, false, {City::Chicago, City::Washington, City::NewYork});
    connects[City::NewYork] = City_data(City::NewYork, Color::Blue, 0, false, {City::Montreal, City::Washington, City::London, City::Madrid});
    connects[City::Paris] = City_data(City::Paris, Color::Blue, 0, false, {City::Algiers, City::Essen, City::Madrid, City::Milan, City::London});
    connects[City::SanFrancisco] = City_data(City::SanFrancisco, Color::Blue, 0, false, {City::LosAngeles, City::Chicago, City::Tokyo, City::Manila});
    connects[City::StPetersburg] = City_data(City::StPetersburg, Color::Blue, 0, false, {City::Essen, City::Istanbul, City::Moscow});
    connects[City::Washington] = City_data(City::Washington, Color::Blue, 0, false, {City::Atlanta, City::NewYork, City::Montreal, City::Miami});
  
                        ////////////////////all red city
  
    connects[City::Beijing] = City_data(City::Beijing, Color::Red, 0, false, {City::Shanghai, City::Seoul});
    connects[City::HongKong] = City_data(City::HongKong, Color::Red, 0, false, {City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei});
    connects[City::Tokyo] = City_data(City::Tokyo, Color::Red, 0, false, {City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco});
    connects[City::Seoul] = City_data(City::Seoul, Color::Red, 0, false, {City::Beijing, City::Shanghai, City::Tokyo});
    connects[City::Shanghai] = City_data(City::Shanghai, Color::Red, 0, false, {City::Beijing, City::HongKong, City::Taipei, City::Seoul, City::Tokyo});
    connects[City::Taipei] = City_data(City::Taipei, Color::Red, 0, false, {City::Shanghai, City::HongKong, City::Osaka, City::Manila});
    connects[City::Sydney] = City_data(City::Sydney, Color::Red, 0, false, {City::Jakarta, City::Manila, City::LosAngeles});
    connects[City::Jakarta] = City_data(City::Jakarta, Color::Red, 0, false, {City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney});
    connects[City::Manila] = City_data(City::Manila, Color::Red, 0, false, {City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney});
    connects[City::Osaka] = City_data(City::Osaka, Color::Red, 0, false, {City::Taipei, City::Tokyo});
    connects[City::HoChiMinhCity] = City_data(City::HoChiMinhCity, Color::Red, 0, false, {City::Jakarta, City::Bangkok, City::HongKong, City::Manila});
    connects[City::Bangkok] = City_data(City::Bangkok, Color::Red, 0, false, {City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong});
   
   
}
};

