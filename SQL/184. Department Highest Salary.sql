SELECT D.Name as Department
      ,E.Name as Employee
      ,E.Salary 
FROM Employee as E
join Department as D
on D.Id = E.DepartmentId
join (
	SELECT
	Max(E.Salary) as Salary,
	D.Name
	FROM Employee as E
	join Department as D
	on D.Id = E.DepartmentId
	group by D.Name
) as X
on X.Salary = E.Salary and X.Name = D.Name
order by E.Salary desc