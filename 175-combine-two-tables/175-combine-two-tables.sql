# Write your MySQL query statement below

Select firstName , lastName , city , state
FROM person
Left JOIN Address
on person.personId = Address.personId;