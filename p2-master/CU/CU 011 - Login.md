## ID: 011 Login

**Breve descripción**: El profesor se conecta a la base de datos.

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

**Precondiciones**:

1. El profesor debe estar registrado en el sistema.

**Flujo principal**:

1. El caso de uso empieza cuando el profesor quiere conectarse en el sistema.
2. El sistema comprobará que el profesor está registrado en el sistema.

**Postcondiciones**:

- El sistema pondrá al profesor como conectado.

**Flujos alternativos**:

2.a. Si el profesor no se encuentra registado, el sistema debe mostrar un mensaje de error.