select max(E.Salary) as SecondHighestSalary
from(
	 SELECT distinct Salary
	 FROM Employee
	 order by Salary desc
	 offset  1 rows 
	 fetch next 1 rows only
 ) as E