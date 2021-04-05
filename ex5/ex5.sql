SELECT CASE WHEN Notes.Grade > 7
         THEN Students.Name
         ELSE NULL END AS Name_Label, Notes.Grade, Students.Value
FROM Students INNER JOIN Grades ON Students.Value < Notes.Max_Value AND Students.Value > Notes.Min_Value
WHERE Notes.Grade > 7
ORDER BY Notes.Grade DESC
ORDER BY Students.Name ASC;