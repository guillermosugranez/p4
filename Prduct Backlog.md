# Product Backlog

## ID: 001 Buscar Alumno
El sistema debe poder encontrar un alumno registrado en la base de datos

**Prioridad: 1**

---

 - Se podrá buscar a un alumno por su dni, por apellidos o por el equipo en el que está.
 - Si se busca por 1er apellido y hay más de un resultado, se pedirá el dni para una nueva búsqueda.
 - Si no hay coincidencias con el término de busqueda, se deberá notificar al profesor.
 
 ## ID: 002 Introducir Alumno
El profesor debe poder registrar a un nuevo alumno en la base de datos

**Prioridad: 1**

---

 - Quiero poder registrar toda la información relativa a un nuevo alumno.
 - Previamente, se deberá comprobar si el alumno ya está registrado en el sistema o no.

## ID: 003 Mostrar Alumno
El sistema debe poder mostrar la información de un alumno especificado por el usuario que esté registrado en la base de datos

**Prioridad: 1**

---

 - Quiero poder consultar toda la información relativa a un alumno registrado.
 - Se podrá mostrar la información de un alumno especificando o bien su dni, sus apellidos o el equipo al que pertenece.

## ID: 004 Borrar Alumno
El profesor debe poder borrar a un alumno en la base de datos

**Prioridad: 2**

---

 - Quiero poder borrar a un alumno registrado, determinado por su dni o su 1er apellido.
 - Si el alumno no está registrado en el sistema, se deberá notificar el error.

## ID: 005 Guardar Copia de Seguridad
Tanto el sistema como el profesor deben poder guardar una copia de la base de datos cuando lo soliciten

**Prioridad: 2**

---

 - Quiero poder copiar toda la información en un archivo.
 - El sistema hará una copia automática antes de salir.

## ID: 006 Restaurar Copia de Seguridad
El profesor debe poder recuperar desde un fichero toda la información de la base de datos guardada previamente.

**Prioridad: 2**

---

 - Quiero poder recuperar una copia con toda la información de la base de datos especificando el nombre de un fichero.
 - Se deberá comprobar la existencia y el correcto formato del fichero con el nombre introducido.

## ID: 007 Modificar Alumno
El profesor debe poder editar la información relativa a un alumno.

**Prioridad: 3**

---

 - Quiero poder modificar la información relativa a un alumno
 - Se mostrarán los diferentes campos de información para que el profesor pueda elegir cuál modificar.
 - El alumno debe estar registrado en la base de datos.
 - Se podrá salir del menú de edición sin hacer ningún cambio.

## ID: 008 Listar todos los alumnos
El profesor podrá listar la totalidad de los alumnos del sistema con un criterio de ordenación concreto.

**Prioridad: 3**

---

 - Quiero poder consultar la lista de todos los alumnos y ordenarla con algún criterio.
 - Se podrá listar por nombre, apellidos (orden alfabético), dni (orden alfanumérico) y curso más alto (orden numérico).
 - Los criterios pueden ser ascendente o descendente en cualquier caso.

## ID: 009 Establecer líder de grupo
El profesor debe poder determinar a un alumno como líder de su grupo

**Prioridad: 3**

---

 - Quiero poder elegir a un alumno como líder de su grupo.
 - El alumno debe estar registrado en la base de datos.
 - El número de grupo debe ser correcto.
 - Si el grupo ya tiene líder, se preguntará al profesor si quiere sustituirlo
