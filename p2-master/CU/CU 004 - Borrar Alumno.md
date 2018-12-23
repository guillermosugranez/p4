## ID: 004 Borrar Alumno

**Breve descripción:** El sistema borra un alumno existente en la base de datos.

**Actores principales:** Profesor

**Actores secundarios:** Alumno

**Precondiciones:**

 1. El alumno debe existir en el sistema.

**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita borrar un alumno.
 2. El sistema encuentra al alumno por su dni o apellidos.
 3. El sistema borra el alumno.

**Postcondiciones:**

 - El sistema borra un alumno.

**Flujos alternativos:**

- 2.a Si no coincide dni o apellidos con ningún alumno, el sistema lanzará un mensaje de error.
