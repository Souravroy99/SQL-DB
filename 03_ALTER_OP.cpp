// Add New Column
1.) ALTER TABLE table_name ADD column_name data_type;
2.) ALTER TABLE table_name ADD column_name data_type NOT NULL DEFAULT 0;


// Change Column Datatype
1.) ALTER TABLE table_name MODIFY column_name data_type;
2.) ALTER TABLE table_name MODIFY column_name data_type NOT NULL DEFAULT 0;


// Change Column Name 
ALTER TABLE table_name  CHANGE  old_column_name  new_column_name  new_column_datatype


// DROP Column
ALTER TABLE table_name DROP COLUMN column_name


// Rename Table
ALTER TABLE table_name RENAME TO new_table_name