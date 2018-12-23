
# Extracción de Requisitos
## Partes interesadas
Los actores que participan en el sistema son los siguientes:
 - Profesores (Es el cliente)
 - Alumnos
## Datos que debe almacenar la aplicación
Los datos que debe almacenar la aplicación referentes a los alumnos son los siguientes:
 - Nombre
 - Apellidos
 - DNI
 - Fecha de nacimiento
 - Dirección Postal
 - Teléfono
 - eMail
 - Curso más alto donde esté matriculado
 - Equipo al que pertenece
 - Líder de grupo (si o no)
## Requisitos funcionales y no funcionales
### Requisitos funcionales
Expresa lo que debería hacer el sistema. Las funcionalidades que este debe proporcionar y especifican la manera en que el sistema debe reaccionar antes determinadas entradas y/o el comportamiento del mismo en determinadas situaciones.
Los requisitos funcionales son:
 - Buscar Alumno
 - Introducir Alumno
 - Modificar Alumno
 - Listar todos los alumnos (mediante un orden concreto)
 - Borrar Alumno
 - Mostrar Alumno
 - Guardar copia de seguridad
 - Restaurar copia de seguridad
 - Establecer líder de grupo
 #### Prioridad
 - Con prioridad 1: Buscar alumno, Mostrar alumno, Introducir Alumno, Borrar Alumno
 - Con prioridad 2: Guardar copia de seguridad, Restaurar copia de seguridad
 - Con prioridad 3: Modificar Alumno, Listar todos los Alumnos, Establecer líder de grupo

### Requisitos no funcionales
Indican como debería ser el sistema. Restricciones que afectan al sistema.
 - Implementación en c++
 - La interfaz de la aplicación será por linea de comandos
 - Los ficheros para manejar la información utilizados serán binarios
 - El uso de la aplicación debe ser sencillo y amigable
