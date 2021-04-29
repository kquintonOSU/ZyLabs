#ifndef TEAMH
#define TEAMH

#include <string>
using namespace std;

class Team {
   // TODO: Declare private data members - teamName, teamWins, teamLosses
   private:
      string teamName;
      int teamWins;
      int teamLosses;
   
   public:
   // TODO: Declare mutator functions - 
   //       SetTeamName(), SetTeamWins(), SetTeamLosses()
      void SetTeamName(string teamName);
      void SetTeamWins(int teamWins);
      void SetTeamLosses(int teamLosses);
   // TODO: Declare accessor functions - 
   //       GetTeamName(), GetTeamWins(), GetTeamLosses()
      string GetTeamName();
      int GetTeamWins();
      int GetTeamLosses();
   // TODO: Declare GetWinPercentage()
      double GetWinPercentage();
};

#endif