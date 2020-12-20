SELECT w2.Id
FROM Weather as w1
join Weather as w2
on datediff(day ,w1.RecordDate,w2.RecordDate) = 1
where  w2.Temperature >  w1.Temperature