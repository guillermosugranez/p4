## ID: 007 Modificar Alumno

**Breve descripción**: El sistema permite modificar los datos de un alumno.

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

**Precondiciones**:

1. El alumno debe existir en el sistema.

**Flujo principal**:

1. El caso de uso empieza cuando el profesor quiere modificar los datos de un alumno introduciendo dni o apellidos.
2. El sistema recoge los datos del alumno que se quiere modificar.

**Postcondiciones**:

- El sistema guarda los nuevos datos introducidos en el alumno que se quiere modificar.

**Flujos alternativos**:

- 1.a. Si el sitema no encuentra coincidencia debe mostrar un mensaje de error.
