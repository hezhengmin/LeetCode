select EE.Department, EE.Employee, EE.Salary
from (
select D.Name as Department, E.Name as Employee , E.Salary, DENSE_RANK() over (partition by E.DepartmentId order by E.Salary desc) as R
from Employee E
inner join Department D on  E.DepartmentId = D.Id) EE
where EE.R <=3
order by EE.Department