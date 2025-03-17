#include <stdio.h>

float cel, ctof, ctok;

void converterCparaK(float temp) {
	ctok = cel + 273.15;
}

void converterCparaF(float temp) {
	ctof = cel * 1.8 + 32;
}


int main() {
	cel = 0;
	printf("CONVERSOR DE TEMPERATURA\n");
	
	printf("Digite Temperatura em °C: ");
	scanf("%f", &cel);
	
	int conv;
	
	while (conv != 1 || conv != 2) {
		printf("\nVoce deseja converter a temperatura de Celsius para:\nFahrenheit(1)\tKelvin(2)\nR: ");
		scanf("%d", &conv);
		switch (conv) {
		case 1:
				//°C = Celsius, °F = Fahrenheit
			converterCparaF(cel);
			printf("\nTemperatura fornecida (°C): %.1f\nTemperatura fornecida convertida em °F: %.1f", cel, ctof);
			return 0;
			break;
		case 2:
				//°C = Celsius, °K = Kelvin
			converterCparaK(cel);
			printf("\nTemperatura fornecida (°C): %.1f\nTemperatura fornecida convertida em °K: %.1f", cel, ctok);
			return 0;
			break;
		default:
			printf("ERRO!, Por favor digite novamente\n\n\n");
			
		}
	}
	

	
	return 0;
}
