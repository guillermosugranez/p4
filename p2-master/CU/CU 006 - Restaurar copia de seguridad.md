## ID: 006 Restaurar Copia de Seguridad

**Breve descripción**: El sistema restaura una copia de seguridad previamente guardada.

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

**Precondiciones**:

1. El sistema debe haber creado una copia de seguridad previa en un fichero determinado.

**Flujo principal**:

1. El caso de uso empieza cuando el profesor quiere restaurar una copia de seguridad.
2. El sistema pide el nombre del fichero donde se ha guardado la ultima copia de seguridad.
3. El sistema lee la última copia de seguridad guardada en un fichero determinado.
4. El sistema escribe en el fichero principal lo que ha leido en el fichero donde se ha realizado la copia de seguridad.


**Postcondiciones**:

- El sistema sustituye los datos actuales del sistema por los últimos leídos en el fichero donde se ha guardado la copia de seguridad.

**Flujos alternativos**:

2.a. Si no existe el fichero introducido, el sistema mostrará un mensaje de error.
3.a. Si no hay información guardada en el fichero creado para guardar la copia de seguridad, el sistema debe mostrar un mensaje de error.