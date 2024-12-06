#pragma once

#include <string>
#include <Combatant.hpp>

using namespace std;

namespace chants
{
    class Monster : public Combatant
    {
    public:
        Monster(string name, int health, int fightCoefficient);
        bool isDead();
        int takeDamage(int damage);
        int attackCombatant(int combatantHealth, int damage);
        int GetHealth();
        string GetName();


    private:
        string monsterName();
        int monsterHealth();
        int fightCoefficent;




    };
}