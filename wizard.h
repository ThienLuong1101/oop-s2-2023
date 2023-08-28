#include"player.h"
using namespace std;

class Wizard : public Player
{  
private:
    int mana;
public:
    Wizard(string name, int health, int damage, int m) :Player(name,health,damage) {
            mana = m;
    }
    void castSpell(Player* opponent) {
        
        attack(opponent, mana);
        cout << getName() << " casts a spell on " << opponent->getName() << " for " << getDamage() << " damage.\n";
        opponent->takeDamage(mana);
    };
    ~Wizard(){};
};

