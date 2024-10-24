#ifndef FUNC_H_ // Hvis FUNC_H_ ikke er definert
#define FUNC_H_ // Definer FUNC_H_

/*
 * En header-fil (.h) skal kun inneholde deklarasjoner av funksjoner og
 * variabler, samt definisjoner av klasser, strukturer og konstanter.
 *
 * Implementasjonen av funksjoner og variabler skal gjøres i en .cpp-fil.
 *
 * Dette betyr at variabler som kun brukes i en .cpp-fil, ikke trenger å
 * deklareres i en header-fil.
 *
 * Når vi oppretter en global variabel i en header-fil, må vi bruke
 * nøkkelordet 'extern'. Dette forteller kompilatoren at variabelen er
 * definert i en annen .cpp-fil.
 */

#define GLOBAL_VARIABLE 245

// Deklarer funksjonen Log
void Log(const char *message);

// g_Variable er deklarert med extern, dette betyr at variabelen er definert i en annen .cpp-fil.
extern int g_Variable;

#endif // FUNC_H_