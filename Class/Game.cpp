#include "Game.h"
#include "Utils/DateTime.h"
#include "Player.h"
using namespace std;


// ###################################################
// Declarations
// ###################################################

Game::Game(string d_id, list<Player> d_players)
{
	id = d_id;
    players = d_players;
    initGame();
}

Game::~Game()
{
}


// ###################################################
// Getters
// ###################################################

string Game::getId()
{
	return id;
}

list<Player> Game::getPlayers() 
{
    return players;
}

int Game::getCurrentTurn()
{
    return currentTurn;
}

Player Game::getCurrentPlayer()
{
    return currentPlayer;
}

// DateTime Game::currentTime()
// {
//     return currentTime;
// }

// ###################################################
// Setters
// ###################################################

void Game::setId(string newId)
{
	id = newId;
}
void Game::setPlayers(list<Player> newPlayers)
{
    players = newPlayers;
}
void Game::setCurrentTurn(int newCurrentTurn)
{
    currentTurn = newCurrentTurn;
}
void Game::setCurrentPlayer(Player newCurrentPlayer)
{
    currentPlayer = newCurrentPlayer;
}
// void Game::setCurrentTime(DateTime newCurrentTime)
// {
//     currentTime = newCurrentTime;
// }

// ###################################################
// Methods
// ###################################################

void Game::initGame()
{
    currentTurn = 1;
    int randNum = rand() % 2;
    if (randNum == 0) {
        currentPlayer = players.front();
    } else {
        currentPlayer = players.back();
    }

    // currentTime = new DataTime();
}
void Game::gameCycle()
{
     while (players.size()>1)
     {
         currentPlayer.playTurn();
         changePlayer();
     }
     
     
}
void Game::endGame()
{
    //TODO: Add reward for Winner
}

void Game::changePlayer()
{
    if(currentPlayer.getId() == players.front().getId()){
        setCurrentPlayer(players.back());
    } else {
        setCurrentPlayer(players.front());
    }
}
