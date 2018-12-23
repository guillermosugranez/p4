## ID: 009 Establecer líder de grupo

**Breve descripción**: El profesor establece un líder en cada grupo de alumnos.

**Actores principales**: Profesor.

**Actores secundarios**: Alumno

**Precondiciones**:

1. El alumno debe existir en el sistema.

**Flujo principal**:

1. El caso de uso empieza cuando el profesor quiere establecer un líder de grupo.
2. El sistema lee todos los alumnos de un grupo determinado.

**Postcondiciones**:

- El sistema establece como líder de grupo a un alumno.

**Flujos alternativos**:

2.a. Si el alumno no se encuentra en el grupo, el sistema debe mostrar un mensaje de error.
2.b. Si el grupo ya tiene líder, el sistema le preguntará al profesor si quiere sustituirlo.