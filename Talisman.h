#ifndef Talisman_h
#define Talisman_h
using namespace std;


class Talisman : public Item {
public:
    Talisman(string name, int level, int price, int heal)
            : Item(name, level, price), h_heal(heal) {}

    virtual void equip() override { cout << "Buy " << i_name << " with heal " << h_heal << endl; }
    virtual void unequip() override { cout << "Sell " << i_name << " with heal " << h_heal << endl; }

    int getHeal() const { return h_heal; }

private:
    int h_heal;
};
#endif /* Talisman_h */
