#ifndef DEF_UNIT
#define DEF_UNIT
#include <string>
#include <list>
#include "Effect.h"
#include "../Enum/category.h"
#include "../Enum/range.h"
#include "../Enum/state.h"
#include "../Enum/type.h"

class Unit
{
    public:
        // ###################################################
        // Declarations
        // ###################################################

        Unit(std::string d_id,  // Constructor (Will create an Empty Unit)
            std::string d_name,
            std::string d_description);

        Unit(std::string d_id, // First overload for classic units
            std::string d_name,
            std::string d_description, 
            int d_damage, int d_life,
            Category::Category d_category, Range::Range d_range, Type::Type d_type,
            std::list<int> d_cost);

        Unit(std::string d_id, // Second overload for units with special effects
            std::string d_name,
            std::string d_description,
            int d_damage, int d_life,
            std::list<Effect> d_effect,
            bool d_isUsable, bool d_hasBeenUsed,
            Category::Category d_category, Range::Range d_range, State::State d_state, Type::Type d_type,
            std::list<int> d_cost);

        ~Unit();

        // ###################################################
        // Getters
        // ###################################################

        std::string getId();
        std::string getName();
        std::string getDescription();
        int getDamage();
        int getLife();
        std::list<Effect> getEffects();
        bool getIsUsable();
        bool getHasBeenUsed();
        Category::Category getCategory();
        Range::Range getRange();
        State::State getState();
        Type::Type getType();
        std::list<int> getCost();

        // ###################################################
        // Setters
        // ###################################################

        void setId(std::string newId);
        void setName(std::string newName);
        void setDescription(std::string newDescription);
        void setDamage(int newDamage);
        void setLife(int newLife);
        void setEffects(std::list <Effect> newEffects);
        void setIsUsable(bool newIsUsable);
        void setHasBeenUsed(bool newHasBeenUsed);
        void setCategory(Category::Category newCategory);
        void setRange(Range::Range newRange);
        void setType(Type::Type newType);
        void setCost(std::list<int> newCost);

        // ###################################################
        // Methods
        // ###################################################

        void attackUnits(std::list<Unit> targets, int damage);
        void sufferDamage(int damage);

    private:
        bool isUsable;
        bool hasBeenUsed;
        std::string id;
        std::string name;
        std::string description;
        int damage;
        int life;
        std::list<Effect> effects;
        Category::Category category;
        Range::Range range;
        State::State state;
        Type::Type type;
        std::list<int> cost;

};

#endif