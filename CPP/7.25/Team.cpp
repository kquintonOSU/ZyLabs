#include "Team.h"
using namespace std;

// TODO: Implement mutator functions - 
//       SetTeamName(), SetTeamWins(), SetTeamLosses()
void Team::SetTeamName(string teamName) {
   this->teamName = teamName;
}

void Team::SetTeamWins(int teamWins) {
   this->teamWins = teamWins;
}

void Team::SetTeamLosses(int teamLosses) {
   this->teamLosses = teamLosses;
}
   
// TODO: Implement accessor functions - 
//       GetTeamName(), GetTeamWins(), GetTeamLosses()
string Team::GetTeamName() {
   return teamName;
}

int Team::GetTeamWins() {
   return teamWins;
}

int Team::GetTeamLosses() {
   return teamLosses;
}
   
// TODO: Implement GetWinPercentage()

double Team::GetWinPercentage() {
   return (double)teamWins / (teamWins + teamLosses);
}