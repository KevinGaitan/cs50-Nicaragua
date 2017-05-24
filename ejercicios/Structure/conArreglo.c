#include <stdio.h>
#include <cs50.h>

#define ELEMENTOS	3

struct estructura_amigo {
	string nombre;
	string apellido;
	string telefono;
	int edad;
	};

struct estructura_amigo amigo[ELEMENTOS];

int main(void)
{
	int num_amigo;

	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "\nDatos del amigo número %i:\n", num_amigo+1 );

		printf( "Nombre: " );
		amigo[num_amigo].nombre=GetString();
		printf( "Apellido: " );
		amigo[num_amigo].apellido=GetString();
		printf( "Teléfono: " );
		amigo[num_amigo].telefono=GetString();
		printf( "Edad: " );
		amigo[num_amigo].edad=GetInt();

	}

	/* Impresión de los datos */
	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "Mi amigo %s ", amigo[num_amigo].nombre );
		printf( "%s tiene ", amigo[num_amigo].apellido );
		printf( "%i años ", amigo[num_amigo].edad );
		printf( "y su teléfono es el %s.\n" , amigo[num_amigo].telefono );
	}
}
