/* Types of SQL Commands */

1.) DDL ---> Data Definition Language ===> /* CREATE, ALTER, RENAME, TRUNCATE, DROP */

2.) DQL/ DRL ---> Data Query Language / Data Retrieval Language ===> /* SELECT */

3.) DML ---> Data Manipulation Language ===> /* INSERT, UPDATE, DELETE */

4.) DCL ---> Data Control Language ===> /* GRANT, REVOKE */

5.) TCL ---> Transaction Control Language ===> /* COMMIT, ROLLBACK, SAVEPOINT */



/* Procedural Language */

** Relational Algebra or is procedural.
** Example of "Non-Procedural" --->  Π name (σ dept = 'CS' (STUDENT))



/* Non-Procedural Language */

** Relational Calculus or SQL (partially) is non-procedural.
** Example of "Non-Procedural" --->  SELECT name FROM STUDENT WHERE dept = 'CS';




/*
Q.) Which forms have a relation that contains information about a single entity?
a) 4NF
b) 2NF
c) 5NF
d) 3NF

Explanation:💡 Interpretation of the Question:

“Which form ensures that a relation contains information about a single entity?”

This means:

All attributes in the relation describe only one real-world object or concept.

No attribute should depend on another non-key attribute (no transitive dependency).

Hence, the table should represent a single entity — not a mix of multiple entities.

That property is achieved in Third Normal Form (3NF).

*/


/*
🧱 Hierarchy of Database Structure: Catalog → Schema → Tables (and other objects)
The top level of the hierarchy consists of "Catalog" each of which can contain "Schema".

** Catalog is the top most level of database.
*/


/*
When designing a Relational Database Management System (RDBMS), Third Normal Form (3NF) is generally considered adequate and practical for most real-world applications.
*/