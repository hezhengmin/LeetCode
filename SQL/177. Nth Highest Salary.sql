CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        SELECT distinct Salary
        FROM Employee
		order by Salary desc
		offset @N-1 rows
		fetch next 1 rows only
    );
END

-- select dbo.getNthHighestSalary(2) 