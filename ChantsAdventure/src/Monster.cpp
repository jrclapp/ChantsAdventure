#include <Monster.hpp>

namespace chants
{
    Monster::Monster(string monsterName, int monsterHealth, int fightCoefficient) : Combatant(monsterName, monsterHealth, fightCoefficient)
    {
    }


string Monster::GetName()
    {
        return _name;
    }

int Monster::GetHealth()
    {
        return _health;
    }

int Monster::attackCombatant(int combatantHealth, int damage) {
    combatantHealth -= damage;
}

int Monster::takeDamage(int damage)
{
    _health -= damage;
}

bool Monster::isDead()
{
    return _health <= 0;
}

}