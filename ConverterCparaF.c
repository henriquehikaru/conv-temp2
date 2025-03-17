#include <stdio.h>

float cel, ctof;

void converterCparaF(float temp) {
	ctof = cel * 1.8 + 32;
}

int main() {
	//°C = Celsius, °F = Fahrenheit
	printf("CONVERSOR DE TEMPERATURA (°C para °F)\n");
	
	printf("Digite Temperatura em °C: ");
	scanf("%f", &cel);
	
	converterCparaF(cel);
	
	printf("\nTemperatura fornecida (°C): %.1f\nTemperatura fornecida convertida em °F: %.1f", cel, ctof);
	
	return 0;
}
