#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>

class Date {
private:
    std::string fecha;
    std::string conYear, conMonth, conDay;
    int day;
    int month;
    int year;

public:
    Date(std::string);


    void validateMonth() {
        if (month < 1 || month > 12)
        {
            std::cout << "Error. Mes invalido" << std::endl;
        }

        std::cout << "Mes: " << month;
        std::cout << "\n";
    }

    void validateDay() {
        if (month == 1 && (day < 1 || day > 31))
        {
            std::cout << "Error. Dia invalido" << std::endl;
        }

        std::cout << "Dia: "<< day;
        std::cout << "\n";
    }

    void leapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)) {
            std::cout << "\n\tA" << (char)164 << "o bisiesto\n\n";
        }

        else {
            std::cout << "\n\tA" << (char)164 << "o no bisiesto\n\n";
        }

        std::cout << "A" << (char)164 << "o:" << year;
        std::cout << "\n";
    }
};

Date::Date(std::string _Fecha) {
    fecha = _Fecha;

    conYear = _Fecha.substr(0, 4);
    conMonth = fecha.substr(5, 6);
    conDay = fecha.substr(8, 9);

    year = stoi(conYear);
    month = stoi(conMonth);
    day = stoi(conDay);

    leapYear();
    validateMonth();
    validateDay();
}



int main() {
    
    //char op = 's';
    std::string _tiempo;

    /*while (op == 's' || op == 'S') {
        system("cls");

        */
        std::cout << "Ingresar fecha con el siguiente formato yyyy-MM-dd: ";
        getline(std::cin, _tiempo);
        Date date1(_tiempo);

        
       //std::fflush();
        /*
        std::cout<<"\n\nDesea revisar otra fecha? S/N: ";
        std::cin >> op;
    }*/


    return 0;

}


