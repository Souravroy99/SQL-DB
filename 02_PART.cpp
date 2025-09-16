CREATE DATABASE ORG;
USE ORG;

CREATE TABLE worker(
	WORKER_ID INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    FIRST_NAME VARCHAR(20),
    LAST_NAME VARCHAR(20),
    JOINING_DATE DATETIME,
    SALARY INT,
    DEPARTMENT CHAR(40) 
);

INSERT INTO WORKER (FIRST_NAME, LAST_NAME, JOINING_DATE, SALARY, DEPARTMENT)
VALUES
('Sourav', 'Roy', '2023-01-15 09:30:00', 50000, 'IT'),
('Riya', 'Sen', '2022-05-20 10:00:00', 45000, 'HR'),
('Amit', 'Kumar', '2021-03-10 11:15:00', 60000, 'Finance'),
('Neha', 'Sharma', '2020-07-25 09:45:00', 55000, 'IT'),
('Rahul', 'Verma', '2019-11-12 08:30:00', 52000, 'Marketing'),
('Priya', 'Gupta', '2023-02-01 10:30:00', 47000, 'HR'),
('Ankit', 'Mehta', '2021-09-18 09:00:00', 58000, 'Finance'),
('Tanya', 'Reddy', '2022-12-05 11:00:00', 53000, 'Marketing');



CREATE TABLE BONUS(
	WORKER_REF_ID INT ,
    BONUS_AMOUNT INT,
    BONUS_DATE DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
		REFERENCES WORKER(WORKER_ID)
        ON DELETE CASCADE
);

INSERT INTO BONUS (WORKER_REF_ID, BONUS_AMOUNT, BONUS_DATE)
VALUES
(1, 5000, '2023-06-30 09:00:00'),
(2, 3000, '2023-07-15 10:30:00'),
(3, 7000, '2023-08-01 11:15:00'),
(4, 4500, '2023-09-05 09:45:00'),
(5, 4000, '2023-10-10 08:30:00');



CREATE TABLE Title(
	WORKER_REF_ID INT ,
    WORKER_TITLE VARCHAR(30),
    AFFECTED_FROM DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
		REFERENCES WORKER(WORKER_ID)
        ON DELETE CASCADE 
);

INSERT INTO Title (WORKER_REF_ID, WORKER_TITLE, AFFECTED_FROM)
VALUES
(1, 'Software Engineer', '2023-01-15 09:30:00'),
(2, 'HR Executive', '2022-05-20 10:00:00'),
(3, 'Finance Analyst', '2021-03-10 11:15:00'),
(4, 'Senior Software Engineer', '2020-07-25 09:45:00'),
(5, 'Marketing Manager', '2019-11-12 08:30:00'),
(6, 'HR Manager', '2023-02-01 10:30:00'),
(7, 'Finance Lead', '2021-09-18 09:00:00'),
(8, 'Marketing Executive', '2022-12-05 11:00:00');


SELECT * FROM WORKER;
SELECT * FROM BONUS;
SELECT * FROM Title;

SELECT last_name,salary, FIRST_NAME from worker;



-- SELECT 33 + 82 - 15 ;
-- SELECT NOW();
-- SELECT lcase("SouRav");
-- SELECT ucase("SouRav");

-- WHERE, AND
SELECT FIRST_NAME, SALARY FROM worker WHERE SALARY > 55000 AND SALARY < 60000 AND FIRST_Name = "ANKIT" ;



-- OR
SELECT * FROM worker WHERE DEPARTMENT = "IT" OR DEPARTMENT = 'FINANCE' OR DEPARTMENT = "HR";
-- Better Way: IN
SELECT * FROM worker WHERE DEPARTMENT IN("IT", "FINANCE", "HR");



-- NOT
SELECT * FROM worker WHERE DEPARTMENT NOT IN("IT", "FINANCE", "HR");
 


-- Patern Search: % --> Any Character, _ --> 1 Character
SELECT * FROM worker WHERE FIRST_NAME LIKE "%y%";
SELECT * FROM worker WHERE FIRST_NAME LIKE "Sou_av";



-- Sorting: ORDER BY
SELECT * FROM worker ORDER BY SALARY;
SELECT * FROM worker ORDER BY SALARY DESC;



-- Unique: DISTINCT
SELECT DISTINCT department FROM worker;



-- DATA GROUPING: GROUP BY
-- Aggregation Functions: COUNT, SUM, MAX, MIN, AVG
	
    -- Count worker per department
	SELECT department, COUNT(department) FROM worker GROUP BY(department) ;

	-- Average salary per department
	SELECT department, AVG(salary) FROM worker GROUP BY(department) ;

	-- Minimum salary per department
	SELECT department, MIN(salary) FROM worker GROUP BY(department) ;
    
	-- Total salary per department
	SELECT department, SUM(salary) FROM worker GROUP BY(department) ;
    
    
    
-- GROUP BY, HAVING
SELECT department, COUNT(department) FROM worker WHERE department = 'IT' GROUP BY(department) ;

SELECT department, COUNT(department) FROM worker GROUP BY(department) HAVING AVG(salary) > 55000;