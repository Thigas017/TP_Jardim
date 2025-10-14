#include "Simulador/Simulador.h"
#include "UI/UI.h"

int main() {
    Simulador sim;
    UI ui(sim);
    ui.executa();
    return 0;
}
