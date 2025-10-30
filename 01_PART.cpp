/*
                                        Database
             Relational(RDBMS)             |                      Non-relational (NoSQL)
            (Data stores in table)         |                 (Data not stored in tables)
                                           |
Example:    MySQL, Oracle, SQL Server,     |                   Example: MongoDB
            PostgreSQL                     |


*** We use Structured Query Language(SQL) to work with RDBMS

*/

// SQL --> Programming language used to interact with relational databases.



/*---------------------------------------DataTypes---------------------------------------*/

/*  Text  */
    1. CHAR(n)       --> Fixed length
    2. VARCHAR(n)    --> Variable length
    3. TINYTEXT(n)   --> Short text
    4. TEXT(n)       --> Medium text
    5. MEDIUMTEXT(n) --> Large text
    6. LONGTEXT(n)   --> Very Large text
    7. BLOB(n)       --> Binary Data(Images, Videos)


/*  Int  */
    1. TINYINT    --> 1 byte
    2. SMALLINT   --> 2 bytes
    3. MEDIUMINT  --> 3 bytes
    4. INT        --> 4 bytes
    5. BIGINT     --> 8 bytes


/*  Decimal  */
    1. DECIMAL(n,d) -> d digits after decimal point
    2. FLOAT(n,d)  --> 4 bytes
    3. DOUBLE(n,d) --> 8 bytes

/*  Date & Time  */
    1. DATE       --> YYYY-MM-DD
    2. DATETIME   --> YYYY-MM-DD + HH:MM:SS
    3. TIMESTAMP  --> Similar to DATETIME, but updates automatically 
    4. TIME       --> HH:MM:SS
    5. YEAR       --> YYYY



/*-------------------------------------Create a Table-------------------------------------*/
CREATE TABLE students(
	StudentID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100),
    Age TINYINT,
    Email VARCHAR(100),
    JoinDate DATE
);

// View of Table ---> SELECT * FROM table_name;

// Insert value into table     <--OR-->     Add a new Row
INSERT INTO table_name(name, age, email, ...)
VALUES
('Sourav', 20, 'ROY.com', ...),
('Rancho', 38, 'WANGRU.com', ...);



// Delete table --> DROP TABLE table_name





/*----------------Operations on Table----------------*/

ALTER TABLE table_name
/*
    Add a column     --> ADD  column_name  column_datatype
    Change datatype  --> MODIFY  column_name  column_datatype
    Rename of column --> RENAME  COLUMN  curr_column_name  TO  change_column_name
*/





/*----------------------Remove all the fields----------------------*/

// Instantly removes all rows by deallocating the table’s storage pages (Much faster).
    TRUNCATE TABLE table_name;	

// Deletes rows one by one, logging each deletion.
    DELETE FROM table_name;	

    
    



/*--------------------------------- CRUD Operation ---------------------------------*/

// Filtering Data ---> WHERE, AND, OR, NOT
// % --> Wildcard

1.) SELECT * FROM table_name WHERE column_name LIKE '%ASKING_NAME%'
2.) SELECT * FROM table_name WHERE column_name='need_actual_name' ;
3.) SELECT * FROM table_name WHERE column_name NOT LIKE '%ASKING_NAME_1%' AND column_name NOT LIKE '%ASKING_NAME_2%'

    /* Select all records where the second letter of the City is an "a" */
    ANS ---> SELECT * FROM table_name WHERE column_name LIKE "_a%" ;


/*------------------------------------- Update -------------------------------------*/

UPDATE table_name
SET Coulmn_1 = Value_1, Column_2 = Value_2, ...
WHERE provide_condition;

/*------------------------------------- DELETE -------------------------------------*/
DELETE FROM table_name
WHERE column_name = Value

    // --------------------
    DELETE T1 FROM table_name T1
    JOIN table_name T2 ON T1.row = T2.row
    WHERE Condition


// Sorting --> ORDER BY
SELECT * FROM table_name ORDER BY column_name_1 ASC, column_name_2 DESC



/*--------------------------- Aggregation & Grouping Data ---------------------------*/

Sum ------->   SELECT SUM(column_name) FROM table_name ;

Count ----->   SELECT COUNT(column_name) FROM table_name WHERE condition ;

Average --->   SELECT AVG(column_name) FROM table_name ;

Minimum/ Maximum --> SELECT MIN(column_name), MAX(column_name) FROM table_name;
 
    // Group By
        SELECT column_name, SUM(amount) FROM Sales
        GROUP BY column_name;

    // Having
    SELECT column_name, SUM(amount) FROM Sales
    GROUP BY column_name
    HAVING Condition;  // Example condition --> SUM(amount) > 1000, // As we are doing work with groups so we need to use 'HAVING' instead of 'WHERE'



/*------------------------------------- String OP -------------------------------------*/
SET @strtng_1 = 'AB';
SET @strtng_2 = 'CD';
SET @strtng_3 = 'EF';

SELECT CONCAT(@strtng_1, @strtng_2, @strtng_3) AS s ;
// LOWER(SUBSTRING(@string1, start_index, length)) ; // In MySQL string indexing starts from 1 not 0