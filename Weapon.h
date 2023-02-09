#ifndef Weapon_h
#define Weapon_h
using namespace std;


class Weapon : public Item {
public:
    Weapon(string name, int level, int price, int force)
            : Item(name, level, price), h_power(force) {}


    virtual void equip() override { cout << "Buy " << i_name << " with force " << h_power << endl; }
    virtual void unequip() override { cout << "Sell " << i_name << " with force " << h_power << endl; }

    int getForce() const { return h_power; }

private:
    int h_power;
};
#endif /* Weapon_h */
