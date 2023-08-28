#ifndef PLAYER_H
#define PLAYER_H

#include<string>
using namespace std;
class Player
{
    private:
        string name;
        int health;
        int damage;
    public:
        
        Player() {};
        void setName(string Name) {name = Name;}
        string getName() {return name;}
        
        
        void setHealth(int Health) {health = Health;}
        int getHealth() {return health;}
        
        void setDamage(int Damage) {damage = Damage;}
        int getDamage() {return damage;}

        Player(string name, int health, int damage) {
            setHealth(health);
            setName(name);
            setDamage(damage);
        }
        
        void takeDamage(int damage) {
            health -= damage;
            cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
        };

        void attack(Player* opponent, int dmg) {
            this-> damage = dmg;
            
        };
        
        ~Player() {};
};



#endif