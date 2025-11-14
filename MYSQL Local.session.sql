USE vscode;

CREATE TABLE employees(
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(20),
    department_id int 
);

INSERT INTO employees (name, department_id) VALUES
("Sourav Roy", 1), ("Atul Bose", 3), ("Subhash Chandra", 5);

SELECT * FROM employees;


INSERT INTO employees VALUES(5, 'Spider Man', null);


SELECT COUNT(DISTINCT department_id) 
FROM employees;


SELECT department_id 
FROM employees
ORDER BY department_id DESC;


SELECT * FROM employees;
ORDER BY department_id
LIMIT 3 OFFSET 2;