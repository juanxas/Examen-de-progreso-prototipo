#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float calcularPrecioRuta(int rutas,float km){
    float calcularRuta;
    switch (rutas)
    {
    case 1 :
        calcularRuta= km*0.10;
        break;
    case 2 :
        calcularRuta= km *0.15;
        break;
    case 3 :
        calcularRuta= km * 0.20;
        break;
    
    default:
        printf("\nOpcion invalida");
        break;
    }
    return calcularRuta;
}

float calcularDescuento(float tarifa, float km){
    float calculareldescuento;
    if (km<50){
        calculareldescuento=0;
    }else if(km>=50 && km<100){
        calculareldescuento = tarifa *0.05;
    }else if(km>=100 && km<500){
        calculareldescuento = tarifa * 0.10;
    }else if(km>500);{ 
        calculareldescuento = tarifa * 0.20;
    }
    return calculareldescuento;
}