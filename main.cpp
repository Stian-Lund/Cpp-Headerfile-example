/*
 * Eksempel på bruk av header filer i c++.
 *
 * Laget 24. Oktober 2024
 * av Stian Østhus Lund
 *
 */

/*
 * Her inkluderer vi header filen vår, vi bruker "" fordi vi har laget header
 * filen selv, den er 'lokal' til prosjektet. Hvis vi bruker et eksternt
 * biblotek ville vi brukt <>. for eksempel #include <Arduino.h>
 */
#include "func.h"
#include <iostream>

int main()
{
    // Her kaller vi funksjonen Log som vi har deklarert i func.h og definert i func.cpp
    Log("Hello, World!");

    // Her bruker vi den globale variabelen g_Variable som er deklarert som extern i func.h og definert i func.cpp
    std::cout << g_Variable << std::endl;

    // Her bruker vi den globale variabelen GLOBAL_VARIABLE som er #define'd i func.h
    std::cout << GLOBAL_VARIABLE << std::endl;
    return 0;
}