// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main()
{
    double ancho = 0.0;
    double alto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;

    std::cout << "Area y perimetro de un rectangulo\n";

    // 2. Entrada: el ancho
    do
    {
        ancho = leerDecimal("Ancho en cm (mayor que 0): ");
        if (ancho <= 0.0)
        {
            std::cout << "El ancho debe ser mayor que 0.\n";
        }
    } while (ancho <= 0.0);

    // 3. Entrada: el alto
    do
    {
        alto = leerDecimal("Alto en cm (mayor que 0): ");
        if (alto <= 0.0)
        {
            std::cout << "El alto debe ser mayor que 0.\n";
        }
    } while (alto <= 0.0);

    // 4. Proceso
    area = ancho * alto;
    perimetro = 2.0 * (ancho + alto);

    // 5. Salida
    std::cout << "Area: " << area << " cm^2\n";
    std::cout << "Perimetro: " << perimetro << " cm\n";

    // ¿Qué significa return 0;?
    return 0;
}