#pragma once
#include <string>

namespace SejlaHoroskop {

    public ref class HoroscopeCalculator
    {
    public:
        // Konstruktor
        HoroscopeCalculator() {}

        // Metoda za izračunavanje horoskopskog znaka
        System::String^ CalculateSign(System::DateTime date)
        {
            int day = date.Day;
            int month = date.Month;

            if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
                return "Vodolija";
            }
            else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
                return "Riba";
            }
            else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
                return "Ovan";
            }
            else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
                return "Bik";
            }
            else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
                return "Blizanac";
            }
            else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
                return "Rak";
            }
            else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
                return "Lav";
            }
            else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
                return "Djevica";
            }
            else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
                return "Vaga";
            }
            else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
                return "Skorpion";
            }
            else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
                return "Strijelac";
            }
            else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
                return "Jarac";
            }
            else {
                return "Nepoznato";
            }
        }

  
    };
}
