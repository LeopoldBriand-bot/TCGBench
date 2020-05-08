#ifndef DEF_GAME
#define DEF_GAME
#include <string>
#include <list>
#include "Player.h"
#include "Utils/DateTime.h"

class Game
{
    public:

        // ###################################################
        // Declarations
        // ###################################################

       
        Game(std::string d_id, std::list<Player> d_players);
        ~Game();

        // ###################################################
        // Getters
        // ###################################################

        std::string getId();
        std::list<Player> getPlayers();
        int getCurrentTurn();
        Player getCurrentPlayer();
        //DateTime currentTime();

        // ###################################################
        // Setters
        // ###################################################

        void setId(std::string newId);
        void setPlayers(std::list<Player> newPlayers);
        void setCurrentTurn(int newCurrentTurn);
        void setCurrentPlayer(Player newCurrentPlayer);
        //void setCurrentTime(DateTime newCurrentTime);


        // ###################################################
        // Methods
        // ###################################################

        void initGame();
        void gameCycle();
        void endGame();
        void changePlayer();
       

    private:

        std::string id;
        std::list<Player> players;
        int currentTurn;
        Player currentPlayer;
        //DateTime currentTime;

};

#endif