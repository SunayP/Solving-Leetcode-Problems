# Write your MySQL query statement below
SELECT d.name AS Department, 
       e.name AS Employee, 
       e.salary AS Salary from employee e
join department d on e.departmentId = d.id
where e.salary in (select max(salary) from employee WHERE departmentId = e.departmentId)