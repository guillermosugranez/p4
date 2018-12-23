## ID: 005 Guardar Copia de Seguridad

**Breve descripción:** El sistema hace una copia de seguridad de la base de datos del sistema.

**Actores principales:** Profesor

**Actores secundarios:** Alumno

**Precondiciones:**

 1. Se debe proporcionar el nombre del archivo de la copia de seguridad.
 2. Se debe comprobar el acceso al archivo y que se puede modificar.
 3. Se debe gestionar cuando el nombre del fichero coincida con uno existente.

**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita realizar una copia de seguridad.
 2. El sistema pide un nombre de fichero.
 3. El sistema comprueba la existencia del fichero.
 4. El sistema realiza la copia de seguridad.

**Postcondiciones:**

 - El sistema realiza una copia de seguridad de la base de datos.

**Flujos alternativos:**

- 3.a Si el fichero ya existe, pregustar si desea sobreescribirlo.
- 4.a Si no se pudo realizar la copia de seguridad por algún motivo, el sistema lanzará un mensaje de error.
