select *
from(
select 
T.Request_at as 'Day',
Try_Convert(decimal(10,2),
Cast((Sum(case 
	when U1.Banned ='No' and U2.Banned ='No' and T.Status like 'cancel%' then 1
	else 0
	end)) as float) /
NULLIF(
Cast((Count(*) - Sum(case 
	when U1.Banned ='Yes' then 1
	when U2.Banned ='Yes' then 1
	else 0
	end)) as float),0)
) as 'Cancellation Rate'
from Trips T
join Users U1 on U1.Users_Id = T.Client_Id
join Users U2 on U2.Users_Id = T.Driver_Id
where T.Request_at between '2013-10-01' and '2013-10-03'
group by T.Request_at) d
where d.[Cancellation Rate] is not null