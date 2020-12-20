/*slow*/
SELECT E1.Name as Employee
FROM Employee as E1
where E1.ManagerId is not null 
and E1.Salary > (select E2.Salary from Employee as E2 where E1.ManagerId = E2.Id)

/*fast*/
SELECT E1.Name as Employee
FROM Employee as E1
join Employee as E2
on E1.ManagerId = E2.Id and E1.Salary > E2.Salary