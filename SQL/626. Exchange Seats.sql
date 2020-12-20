SELECT id = case
when id = s.id_total and id & 1 =1 then id
when id & 1 = 1 then id+1
when id & 1 = 0 then  id-1
end 
,student
FROM seat, (select count(*) as id_total from seat ) as s
order by id