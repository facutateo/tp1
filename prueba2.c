#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void consigna1();
void consigna2();
void consigna3();
void consigna4();
void consigna5();
void consigna6();
void consigna7();
void consigna8();
void consigna9();
void consigna10();

int main(int argc, char *argv[]) {
	int opcion;
	while(1){
	system("cls");
	printf("seleccione la consigna (ponga 0 para cerrar): ");
	scanf("%d", &opcion);
	
	switch(opcion) {
		case 0: {
			printf("nos vemos\n");
            return 0;
			break;
		}
		case 1: {
			consigna1(); //suma de 2 entreros
			break;
		}
		case 2: {
			consigna2(); // suma de 3 enteros de 2 operandos
			break;
		}
		case 3: {
			consigna3(); // suma de 3 enteros de varios operandos
			break;
		}
		case 4: {
			consigna4(); // calcular perimetro de un triangulo
			break;
		}
		case 5: {
			consigna5(); // calcular hipotenusa, perimetro y superficie de un triangulo
			break;
		}
		case 6: {
			consigna6(); // calcular la diagonal principal, superficie y perimetro de un rectangulo
			break;
		}
		case 7: {
			consigna7(); // suma producto y resta de 2 enteros
			break;
		}
		case 8: {
			consigna8(); // calcular sueldo de un trabajador
			break;
		}
		case 9: {
			consigna9(); // calcular sueldo de un trabajador sabiendo que la hora vale 10$
			break;
		}
		case 10: {
			consigna10(); // calcular el sueldo de un vendedor de autos
			break;
		}
		default: {
			printf("consigna no encontrada \n");
			printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
			break;
		}
	}
}
	return 0;
}
void consigna1() {
	int v1, v2, rs;
	system("cls");
	printf("ingrese el primer numnero a sumar: ");
	scanf("%d", & v1);
	printf("ingrese el segundo numnero a sumar: ");
	scanf("%d", & v2);
	rs=v1+v2;
	printf("el resultado es %d \n", rs);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna2() {
	int v1,v2,v3,rs;
	system("cls");
	printf("ingrese el primer numnero a sumar: ");
	scanf("%d", & v1);
	printf("ingrese el segundo numnero a sumar: ");
	scanf("%d", & v2);
	printf("ingrece el tercer numero a sumar: ");
	scanf("%d", & v3);
	rs=v1+v2;
	printf("el resultado de la suma de los 2 primeros numeros es: %d \n", rs);
	rs=v3+rs;
	printf("le resultado final es: %d \n", rs);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna3() {
	int v1,v2,v3,rs;
	system("cls");
	printf("ingrese el primer numnero a sumar: ");
	scanf("%d", & v1);
	printf("ingrese el segundo numnero a sumar: ");
	scanf("%d", & v2);
	printf("ingrece el tercer numero a sumar: ");
	scanf("%d", & v3);
	rs=v1+v2+v3;
	printf("le resultado final es: %d \n", rs);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna4() {
	int l1,l2,l3,rs;
	system("cls");
	printf("ingrese el primer lado: ");
	scanf("%d", &l1);
	printf("ingrese el segundo lado: ");
	scanf("%d", &l2);
	printf("ingrese el tercer lado: ");
	scanf("%d", &l3);
	rs=l1+l2+l3;
	printf("el perimetro del triangulo es es %d", rs);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna5 () {
	int l1,l2;
	float H=0,P=0.0,S=0.0;
	system("cls");
	H=P=S=0;
	printf("ingrese un valor para el lado 1: ");
	scanf("%d", &l1);
	printf("ingrese un valor para el lado 2: ");
	scanf("%d", &l2);
	H=(float)sqrt(pow(l1,2)+pow(l2,2));  //sqrt((l1*l1)+(l2*l2))
	P=(float) l1+l2+H;
	S=(float)((l1*l2)/2);
	printf("el valor del lado 1 es %d, el valor del lado 2 es %d",l1,l2);
	printf("\nLa hipotenusa del triangulo es %.2f,el perimetro es %.2f y la superficie es %.2f",H,P,S);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna6() {
	int l1,l2;
	float DP,S,P;
	system("cls");
	printf("ingrese valor del lado a: "); 
	scanf("%d", &l1);
	printf("ingrese valor del lado b: "); 
	scanf("%d", &l2);
	DP=(float)sqrt(pow(l1,2)+pow(l2,2));
	P=(float) 2*(l1+l2);
	S=(float) l1*l2;
	printf("el lado 1 es %d, el lado 2 es %d",l1,l2);
	printf("\nel valor de la diagonal principal es de %.2f, el de la superficie es %.2f y el del perimetro es de %.2f",DP,S,P);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna7() {
	system("cls");
	int v1, v2;
	printf("ingrese el primer numnero a sumar: ");
	scanf("%d", & v1);
	printf("ingrese el segundo numnero a sumar: ");
	scanf("%d", & v2);
	printf("el resultado de la suma es %d \nel resultado de la multiplicacion es %d \nel resultado de la resta es %d",v1+v2,v1*v2,v1-v2);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna8 () {
	system("cls");
	int VH, TT;
	printf("ingrese el valor de la hora: ");
	scanf("%d", & VH);
	printf("ingrese el tiempo trabajado: ");
	scanf("%d", & TT);
	printf("el sueldo del empleado va a ser de: %d$",VH*TT);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna9 () {
	system("cls");
	int TT;
	printf("ingrese el tiempo trabajado: ");
	scanf("%d", & TT);
	printf("el sueldo del empleado va a ser de: %d$",10*TT);
	printf("\nPresione ENTER para volver al menu");
        getchar(); 
        getchar();
}
void consigna10 () {
	int SB =500, bono=50,CV=0;
float precio=0,f;
printf("ingrese el valor del vehiculo: "); 
scanf("%f", &precio);
printf("ingrese el cantidad del vehiculo: "); 
scanf("%d", &CV);
printf("el sueldo del empleado es %.2f$",precio*CV*.1+CV*bono+SB);
}
