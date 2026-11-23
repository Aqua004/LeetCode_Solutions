# Write your MySQL query statement below
SELECT FirstName, LastName,city,State
From Person LEFT JOIN Address
ON Person.PersonID = Address.PersonId