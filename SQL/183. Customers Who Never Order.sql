/*slow*/
select Name as Customers 
from Customers
where not exists(
  SELECT CustomerId
  FROM Orders 
  where Orders.CustomerId = Customers.Id 
)

/*fast*/
SELECT c.Name as Customers 
FROM Customers as c
left join Orders as o
on  o.CustomerId = c.Id
where o.CustomerId is null