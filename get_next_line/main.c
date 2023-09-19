#include "get_next_line.h"
 
 int main()
{
	char *line;
	int fd = open("archivo.txt", O_RDONLY);

    // Leer y imprimi	r todas las líneas del archivo
    //while ((line = get_next_line(fd)) != NULL) {
		line = get_next_line(fd);
        printf("LINE1: %s", line);
		free(line);
		// line = get_next_line(fd);
        // printf("LINE2: %s", line);
		// free(line);
		// line = get_next_line(fd);
        // printf("LINE3: %s", line);
    	// free(line);  // Libera la memoria asignada a la línea
   	//}

    close(fd);  // Cierra el archivo
    return 0;
}