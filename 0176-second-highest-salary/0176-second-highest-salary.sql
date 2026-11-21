# Write your MySQL query statement belo
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
Where salary <(SELECT MAX(salary)FROM Employee);
