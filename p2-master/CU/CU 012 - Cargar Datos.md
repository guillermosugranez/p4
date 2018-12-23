## ID: 012 Cargar Datos

**Breve descripción**: El sistema recoge los datos de la base de datos y los vuelca en una lista de alumnos.

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

**Precondiciones**:

1. Debe de existir una base de datos.

**Flujo principal**:

1. El caso de uso empieza cuando el sistema quiere cargar datos.
2. Introducimos la ruta de donde cargar.
3. Si hay algún alumno en la lista se borra.
4. Leemos y cargamos de la base de datos cada alumno en una lista de alumnos.

**Postcondiciones**:

- Se deberán haber volcado todos los alumnos.

**Flujos alternativos**:

2.a. Si no se encunetra ruta, el sistema muestra error.
