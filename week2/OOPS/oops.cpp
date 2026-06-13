#include <iostream>

using namespace std;

namespace music {
    class Playable {
    public:
        virtual void play() = 0;
        virtual ~Playable() {} 
    };
}

namespace music {
    namespace string_instrument {
        class Veena : public music::Playable {
        public:
            void play() override {
                cout << "Veena is playing classic Indian tunes." << endl;
            }
        };
    }
}

namespace music {
    namespace wind {
        class Saxophone : public music::Playable {
        public:
            void play() override {
                cout << "Saxophone is playing jazz music." << endl;
            }
        };
    }
}

namespace live {
    void doTest() {
        music::string_instrument::Veena myVeena;
        myVeena.play();

        music::wind::Saxophone mySax;
        mySax.play();

        music::Playable* interfacePtr;
        interfacePtr = &myVeena;
        interfacePtr->play();

        interfacePtr = &mySax;
        interfacePtr->play();
    }
}
int main() {
    live::doTest();
    return 0;
}