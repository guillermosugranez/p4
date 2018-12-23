## ID: 013 Guardar Datos

**Breve descripción**: El sistema guarda los datos en la lista de alumnos.

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

**Precondiciones**:

1. Debe haberse hecho alguna modificación.

**Flujo principal**:

1. El caso de uso empieza cuando el sistema quiere guardar datos.
2. Introducimos la ruta donde guardar.
3. Va guardando cada campo del alumno.

**Postcondiciones**:

- El fichero debe quedar cerrado.

**Flujos alternativos**:

2.a. Si no se existe la lista, devolverá error.
