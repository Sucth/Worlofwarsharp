#ifndef Item_h
#define Item_h
using namespace std;


class Item {
public:
    Item(string name, int level, int money) : i_name(name), i_level(level), i_money(money) {}

    virtual void equip() = 0;
    virtual void unequip() = 0;

    string getName() const { return i_name; }
    int getLevel() const { return i_level; }
    int getMoney() const { return i_money; }
    bool isBought() const { return bought; }
    void setBought(bool b) { bought = b; }

protected:
    string i_name;
    int i_level;
    int i_money;
    bool bought = false;
};

#endif /* Item_h */
