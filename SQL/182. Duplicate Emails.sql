SELECT Email
FROM Person
group by Email
having Count(Email) > 1 