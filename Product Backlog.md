# Product Backlog

## ID: 001 Buscar Alumno 
El sistema debe poder encontrar un alumno registrado en la base de datos

**Prioridad: 1** (3h)

---

 - Se podrá buscar a un alumno por su dni, por apellidos o por el equipo en el que está.
 - Si se busca por 1er apellido y hay más de un resultado, se pedirá el dni para una nueva búsqueda.
 - Si no hay coincidencias con el término de busqueda, se deberá notificar al profesor.
 
 ## ID: 002 Introducir Alumno 
El profesor debe poder registrar a un nuevo alumno en la base de datos

**Prioridad: 1** (1'5h)

---

 - Quiero poder registrar toda la información relativa a un nuevo alumno.
 - Previamente, se deberá comprobar si el alumno ya está registrado en el sistema o no.

## ID: 003 Mostrar Alumno 
El sistema debe poder mostrar la información de un alumno especificado por el usuario que esté registrado en la base de datos

**Prioridad: 1** (1'5h)

---

 - Quiero poder consultar toda la información relativa a un alumno registrado.
 - Se podrá mostrar la información de un alumno especificando o bien su dni, sus apellidos o el equipo al que pertenece.

## ID: 004 Borrar Alumno 
El profesor debe poder borrar a un alumno en la base de datos

**Prioridad: 2** (2h)

---

 - Quiero poder borrar a un alumno registrado, determinado por su dni o su 1er apellido.
 - Si el alumno no está registrado en el sistema, se deberá notificar el error.

## ID: 005 Guardar Copia de Seguridad 
Tanto el sistema como el profesor deben poder guardar una copia de la base de datos cuando lo soliciten

**Prioridad: 2** (2h)

---

 - Quiero poder copiar toda la información en un archivo.
 - El sistema hará una copia automática antes de salir.
 - Para realizar esta tarea es necesario ser Coordinador

## ID: 006 Restaurar Copia de Seguridad 
El profesor debe poder recuperar desde un fichero externo toda la información de la base de datos guardada previamente.

**Prioridad: 2** (2h)

---

 - Quiero poder recuperar una copia con toda la información de la base de datos especificando el nombre de un fichero.
 - Se deberá comprobar la existencia y el correcto formato del fichero con el nombre introducido.
 - Para realizar esta tarea es necesario ser Coordinador

## ID: 007 Modificar Alumno 
El profesor debe poder editar la información relativa a un alumno.

**Prioridad: 3** (2h)

---

 - Quiero poder modificar la información relativa a un alumno
 - Se mostrarán los diferentes campos de información para que el profesor pueda elegir cuál modificar.
 - El alumno debe estar registrado en la base de datos.
 - Se podrá salir del menú de edición sin hacer ningún cambio.

## ID: 008 Listar todos los alumnos 
El profesor podrá listar la totalidad de los alumnos del sistema con un criterio de ordenación concreto.

**Prioridad: 3** (2h)

---

 - Quiero poder consultar la lista de todos los alumnos y ordenarla con algún criterio.
 - Se podrá listar por nombre, apellidos (orden alfabético), dni (orden alfanumérico) y curso más alto (orden numérico).
 - Los criterios pueden ser ascendente o descendente en cualquier caso.

## ID: 009 Establecer líder de grupo 
El profesor debe poder determinar a un alumno como líder de su grupo

**Prioridad: 3** (2h)

---

 - Quiero poder elegir a un alumno como líder de su grupo.
 - El alumno debe estar registrado en la base de datos.
 - El número de grupo debe ser correcto.
 - Si el grupo ya tiene líder, se preguntará al profesor si quiere sustituirlo

## ID: 010 Registrar 
El profesor debe poder registrarse en el sistema

**Prioridad: 4** (2h)

---

 - Quiero poder registrarme en el sistema
 - Se debe introducir un nombre de usuario que no esté en el sistema
 - Se debe acompañar con una contraseña
 - El registro se almacenará en un archivo de texto externo junto al restro de registros
 - Se incluirá el dni del usuario que registró en el registro

## ID: 011 Login 
El profesor debe poder loguearse en el sistema

**Prioridad: 4** (2h)

---

 - Quiero poder loguearme en el sistema
 - Se debe introducir un nombre de usuario que esté registrado en el sistema
 - Para un loguin correcto, usuario y contraseña deben coincidir
 - Los datos para el loguin se encuentran en una archivo de texto externo

## ID: 012 Guardar Datos 
El profesor debe poder guardar la información en el archivo por defecto

**Prioridad: 4** (2h)

---

 - Quiero poder guardar la lista de alumnos actual
 - No hace falta ser coordinador para esta tarea
 - Los datos se almacenarán en un fichero de texto cuya ruta será la determinada por defecto

## ID: 013 Cargar Datos 
El profesor debe poder cargar la información en el archivo por defecto

**Prioridad: 4** (2h)

---

 - Quiero poder cargar la lista de alumnos desde un fichero
 - No hace falta ser coordinador para esta tarea
 - Los datos están almacenados en un fichero de texto cuya ruta será la determinada por defecto

### La duración total del proyecto será de 26 horas, repartidas en 9 horas la primera semana y el resto en la segunda

Corrección: falta poner horas por tareas (al lado de prioridad)

