#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
    class animal {
    public:
        virtual ~animal() = default;
        virtual std::string species() const = 0;
        virtual unsigned int legs() const = 0;
    };

    class insect: public animal {
    public:    
        unsigned int legs() const override;
    };

    class cockroach : public insect {
    public:    
        std::string species() const override;
    };

    class spider : public animal {
    public:    
        unsigned int legs() const override;
    };
    class tarantula : public spider {
    public:    
        std::string species() const override;
    };

    class bird : public animal {
    public:    
        unsigned int legs() const override;
    };
    class sparrow : public bird {
    public:    
        std::string species() const override;
    };

    class leg_counter {
    private:    
        unsigned legCount = 0;
    public:
        std::string add_animal(animal* anim);
        unsigned legs() const;
    };

    std::unique_ptr<animal> animal_factory(int animalId);
}