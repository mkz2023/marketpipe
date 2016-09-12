#include <stdio.h>
#include <stdlib.h>

/* Sistema de punto de venta para usar en sistemas  like-UNIX en cualquier distribucion, desarrollado por probecarios de proteco de la generacion 33 */

void pos ( void  ){
  printf("bienvenido al sistema de punto de venta\n");
}

int localizarUsuario ( char usuario[10] ){
  if ( usuario == "martin" ){
    return 1;
  }
  else {
    return 0;
  }
}

int verificarPass ( char usuario[10], int pass ){
  if ( usuario == "martin" && pass==1992 ){
    return 1;
  }
  else {
    return 0;
  }
}

int login ( void ){
  char usuario[10];
  int pass;
  int intentos = 0;
  // leer el archivo de usuarios y contraseñas
  
  do {
    printf( "Usuario: " );
    scanf("%s", usuario);
    printf("\nPass: ");
    scanf("%d", &pass);
    if ( localizarUsuario( usuario ) == 1 ){
      if ( verificarPass( usuario, pass ) == 1 ){
	// garantizar el accero
	pos();
      }
      else {
	printf("Verificar Pass\n");
	intentos ++;
      }
    }
    else {
      printf("Verificar Usuario\n");
      intentos++;
    }
    printf("intentos [%d]/[5]\n");
  } while ( intentos <= 5 );
}

int main ( int argc, char const *argv[] ){
  printf("PREBEPOS\n");
  login();
  return 0;
}

