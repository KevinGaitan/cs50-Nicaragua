
#include <stdio.h>
#include <string.h>

/* creamos nuestra estructura con datos similares */
struct infopersona
{
	char direccion[25];
	char ciudad[20];
	char provincia[20];
	long int codigo_postal;	
}; 
								/* creamos nuestra estructura empleado */
struct empleado
{
	char nombre_empleado[25];
	struct infopersona direcc_empleado; 
	double salario;
}; 
							/* creamos nuestra estructura cliente */
struct cliente
{
	char nombre_cliente[25];
	struct infopersona direcc_cliente;
	double saldo;
};

int main(void)
{
										/* creamos un nuevo cliente  */
	struct cliente MiCliente;
	
	/*inicializamos un par de datos de Micliente */
	strcpy(MiCliente.nombre_cliente,"Jose Antonio");
	strcpy(MiCliente.direcc_cliente.direccion, "Altos del Cielo");
	/* notese que se agrega direcc_cliente haciendo referencia 
	 * a la estructura infopersona por el dato direccion
	 */
	
											/************************* imprimimos los datos ********************************/
	printf("\n Cliente: ");
	printf("\n Nombre: %s", MiCliente.nombre_cliente);
																					/* notese la forma de hacer referencia al dato */
	printf("\n Direccion: %s", MiCliente.direcc_cliente.direccion); 
	
																						/* creamos un nuevo empleado  */
	struct empleado MiEmpleado;
	
																				/*inicializamos un par de datos de MiEmplado */	
	strcpy(MiEmpleado.nombre_empleado,"Miguel Angel");
	strcpy(MiEmpleado.direcc_empleado.ciudad,"Madrid");

																		/* imprimimos los datos */	
	printf("\n");
	printf("\n Empleado: ");
	printf("\n Nombre: %s", MiEmpleado.nombre_empleado);
														/* notese la forma de hacer referencia al dato */
	printf("\n Ciudad: %s", MiEmpleado.direcc_empleado.ciudad);
	
	return 0;
}