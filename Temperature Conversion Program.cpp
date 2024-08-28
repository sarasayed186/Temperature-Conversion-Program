#include <iostream>  
#include <iomanip>  

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    double temperature;
    char unit;

    cout << "Temperature Conversion Program" << endl;
    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the original unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    switch (toupper(unit)) {
    case 'C': {
        double fahrenheit = celsiusToFahrenheit(temperature);
        double kelvin = celsiusToKelvin(temperature);
        cout << fixed << setprecision(2);
        cout << temperature << "°C is equal to " << fahrenheit << "°F and " << kelvin << "K" << endl;
        break;
    }
    case 'F': {
        double celsius = fahrenheitToCelsius(temperature);
        double kelvin = fahrenheitToKelvin(temperature);
        cout << fixed << setprecision(2);
        cout << temperature << "°F is equal to " << celsius << "°C and " << kelvin << "K" << endl;
        break;
    }
    case 'K': {
        double celsius = kelvinToCelsius(temperature);
        double fahrenheit = kelvinToFahrenheit(temperature);
        cout << fixed << setprecision(2);
        cout << temperature << "K is equal to " << celsius << "°C and " << fahrenheit << "°F" << endl;
        break;
    }
    default:
        cout << "Invalid unit. Please enter C, F, or K." << endl;
    }

    return 0;
}