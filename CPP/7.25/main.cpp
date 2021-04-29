#include <iostream>
#include <string>
#include "Team.h"
using namespace std;

int main(int argc, const char* argv[]) {
   string name;
   int wins;
   int losses;
   Team team;

   cin >> name;
   cin >> wins;
   cin >> losses;

   team.SetTeamName(name);
   team.SetTeamWins(wins);
   team.SetTeamLosses(losses);

   if (team.GetWinPercentage() >= 0.5) {
      cout << "Congratulations, Team " << team.GetTeamName() <<
              " has a winning average!" << endl;
   }
   else {
      cout << "Team " << team.GetTeamName() << " has a losing average." << endl;
   }
}