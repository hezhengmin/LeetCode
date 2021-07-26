select *
from Stadium S1
left join Stadium S2 on S1.id = S2.id -1
left join Stadium S3 on S1.id = S3.id -2
left join Stadium S4 on S1.id = S4.id +1
left join Stadium S5 on S1.id = S5.id +2
where 


