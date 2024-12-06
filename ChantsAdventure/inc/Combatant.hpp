#pragma once
#include <string>
using namespace std;

namespace chants
{
    class Combatant
    {
    public:
        string _name;         // The combatant's name
        int _health;          // The combatant's health
        int _fightSkillLevel; // Represents the combatant's skill in fighting

        // Constructor to initialize combatant's attributes
        Combatant(string combatantName, int combatantHealth, int fightSkillLevel);
        
        /// @brief Simulates a fight and calculates average fight value
        /// @return Average fight power
        int Fight();
        
        /// @brief Retrieves the name of the combatant
        /// @return Combatant's name
        string GetName();
        
        /// @brief Retrieves the health of the combatant
        /// @return Combatant's health
        int GetHealth();
    };
}
