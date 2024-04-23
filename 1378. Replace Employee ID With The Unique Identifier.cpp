select unique_id,name from Employees e LEFT JOIN employeeUNI u on e.id = u.id;
