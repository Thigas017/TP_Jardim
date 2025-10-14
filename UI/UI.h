#ifndef POO_UI_H
#define POO_UI_H

#include "../Simulador/Simulador.h"

class UI {
    Simulador& sim;
public:
    explicit UI(Simulador& s) : sim(s) {}
    void executa();
};

#endif //POO_UI_H
