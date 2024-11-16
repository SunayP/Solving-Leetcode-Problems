# Write your MySQL query statement below
SELECT P.product_name, s.year, s.price from Sales s left join product P on s.product_id = p.product_id;