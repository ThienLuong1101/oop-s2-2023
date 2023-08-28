#include"player.h"
using namespace std;

class Warrior : public Player
{  
private:
    string weapon;
public:
    Warrior(string name, int health, int damage, string w) :Player(name,health,damage) {
            weapon = w;
    }
    void swingWeapon(Player* opponent) {
        cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
        attack(opponent, getDamage());
        opponent->takeDamage(getDamage());
    };
    ~Warrior(){};
};

