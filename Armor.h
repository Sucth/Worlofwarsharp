#ifndef Armor_h
#define Armor_h
using namespace std;


class Armor : public Item {
public:
    Armor(string name, int level, int price, int defense) : Item(name, level, price), h_defense(defense) {}

    virtual void equip() override { cout << "Buy " << i_name << " with defense " << h_defense << endl; }
    virtual void unequip() override { cout << "Sell " << i_name << " with defense " << h_defense << endl; }

    int getDefense() const { return h_defense; }

private:
    int h_defense;
};
#endif /* Armor_h */
