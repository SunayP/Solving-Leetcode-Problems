# Write your MySQL query statement below
select * from Cinema where MOD(ID, 2)=1 and description <> "boring" order by rating desc;