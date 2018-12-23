## ID: 003 Introducir Alumno

**Breve descripción:** El sistema introduce un nuevo alumno en la base de datos.

**Actores principales:** Profesor

**Actores secundarios:** Alumno

**Precondiciones:**

 1. El alumno no debe existir en el sistema.
 2. No puede coincidir el DNI ni el correo con el de otro alumno.
 3. No se pueden registrar más de 150 alumnos.

**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita introducir la información de un nuevo alumno.
 2. El sistema comprueba que el alumno no exista.
 3. El sistema comprueba que no haya 150 alumnos registrados.
 4. El sistema recoge los datos del alumno y los introduce en la base de datos.

**Postcondiciones:**

 - El sistema introduce un nuevo alumno.

**Flujos alternativos:**
- 2.a Si el alumno ya existía, el sistema lanzará un mensaje de error.
- 3.a Si hay 150 alumnos registrados, el sistema mandará un mensaje de error.
- 4.a Si el dni del nuevo alumno ya existía, el sistema lanzará un mensaje de error.
