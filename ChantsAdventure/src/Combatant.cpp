#include "Combatant.hpp"

namespace chants
{
    //initialize combatant's attributes
    Combatant::Combatant(string combatantName, int combatantHealth, int fightSkillLevel)
        : _name(combatantName), _health(combatantHealth), _fightSkillLevel(fightSkillLevel) {}

    //   returns the average fight value
    int Combatant::Fight()
    {
        //   fight power is the sum of health divided by 2 
        int fightPower = (_health / 2) + _fightSkillLevel;
        return fightPower;
    }

    //  combatant's name
    string Combatant::GetName()
    {
        return _name;
    }

    // combatant's health
    int Combatant::GetHealth()
    {
        return _health;
    }
}
