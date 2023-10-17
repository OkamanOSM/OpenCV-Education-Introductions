#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct {
	double x;
	double y;
	double z;
	double pwm_1;
	double pwm_2;
	double pwm_3;
	double pwm_4;
}  Name;

Name x = { 0.76, 0.56, 0.34, 1400, 1200, 1400, 1200 };

int main() {



	double x_in_wide_variance = x.x * (1 / 0.0078);    //burada verileri 1/0.0078 ile çarparak -128 ve 128 arasına düşürüyoruz.
	int final_x = (int)x_in_wide_variance;
	final_x += 128;
	if (final_x >= 256) { final_x = 255; }
	else if (final_x <= 0) { final_x = 0; }

	double y_in_wide_variance = x.y * (1 / 0.0078);    //burada verileri 1/0.0078 ile çarparak -128 ve 128 arasına düşürüyoruz.
	int final_y = (int)y_in_wide_variance;
	final_y += 128;
	if (final_y >= 256) { final_y = 255; }
	else if (final_y <= 0) { final_y = 0; }


	double z_in_wide_variance = x.z * (1 / 0.0078);    //burada verileri 1/0.0078 ile çarparak -128 ve 128 arasına düşürüyoruz.
	int final_z = (int)z_in_wide_variance;
	final_z += 128;
	if (final_z >= 256) { final_z = 255; }
	else if (final_z <= 0) { final_z = 0; }
	


	//pwm kismi

	double pwm_1 = x.pwm_1;

	// PWM sayısını işler
	pwm_1 -= 1000;
	pwm_1 /= 10;

	// Sonucu yalnızca tam sayı olarak alır
	pwm_1 = (int)pwm_1;

	// 0 ile 100 arasındaki sayıyı kontrol eder
	if (pwm_1 < 0) {
		pwm_1 = 0;
	}
	else if (pwm_1 > 100) {
		pwm_1 = 100;
	}

	// Sonucu uint_8 olarak yazdırır
	uint8_t uint8_pwm_1 = (uint8_t)pwm_1;
	//printf("Sonuc: %d\n", uint8_pwm_1);

	

	double pwm_2 = x.pwm_2;

	// PWM sayısını işler
	pwm_2 -= 1000;
	pwm_2 /= 10;

	// Sonucu yalnızca tam sayı olarak alır
	pwm_2 = (int)pwm_2;

	// 0 ile 100 arasındaki sayıyı kontrol eder
	if (pwm_2 < 0) {
		pwm_2 = 0;
	}
	else if (pwm_2 > 100) {
		pwm_2 = 100;
	}

	// Sonucu uint_8 olarak yazdırır
	uint8_t uint8_pwm_3 = (uint8_t)pwm_2;
	//printf("Sonuc: %d\n", uint8_pwm_3);




	double pwm_3 = x.pwm_3;

	// PWM sayısını işler
	pwm_3 -= 1000;
	pwm_3 /= 10;

	// Sonucu yalnızca tam sayı olarak alır
	pwm_3 = (int)pwm_3;

	// 0 ile 100 arasındaki sayıyı kontrol eder
	if (pwm_3 < 0) {
		pwm_3 = 0;
	}
	else if (pwm_3 > 100) {
		pwm_3 = 100;
	}

	// Sonucu uint_8 olarak yazdırır
	uint8_t uint8_pwm_4 = (uint8_t)pwm_3;
	//printf("Sonuc: %d\n", uint8_pwm_4);




	double pwm_4 = x.pwm_4;

	// PWM sayısını işler
	pwm_4 -= 1000;
	pwm_4 /= 10;

	// Sonucu yalnızca tam sayı olarak alır
	pwm_4 = (int)pwm_4;

	// 0 ile 100 arasındaki sayıyı kontrol eder
	if (pwm_4 < 0) {
		pwm_4 = 0;
	}
	else if (pwm_4 > 100) {
		pwm_4 = 100;
	}

	// Sonucu uint_8 olarak yazdırır
	uint8_t uint8_pwm = (uint8_t)pwm_4;
	//printf("Sonuc: %d\n", uint8_pwm);






}