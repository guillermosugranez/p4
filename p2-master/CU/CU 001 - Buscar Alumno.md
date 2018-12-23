## ID: 001 Buscar Alumno

**Breve descripción:** El sistema busca un alumno

**Actores principales:** Profesor

**Actores secundarios:** Alumno

**Precondiciones:**

 1. Se deberá proporcionar o su dni, o alguno de sus apellidos, o su número de grupo.

**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita encontrar a un alumno.
 2. El sistema recoge los datos del alumno.

**Postcondiciones:**

 - El sistema devuelve los datos del alumno.

**Flujos alternativos:**

 - 2.a Si no encuentra al alumno, el sistema muestra un mensaje de error.
 - 2.b Si hay más de un resultado, el sistema mostrará las coincidencias y permitirá realizar una nueva busqueda por otro criterio.
