// Add New Column
1.) ALTER TABLE table_name 
    ADD COLUMN column_name data_type;

2.) ALTER TABLE table_name 
    ADD COLUMN column_name data_type NOT NULL DEFAULT 0;




// DROP Column
ALTER TABLE table_name 
DROP COLUMN column_name


// Rename Table
ALTER TABLE table_name  RENAME  TO  new_table_name




/* "RENAME"  VS  "MODIFY"  VS  "CHANGE" */
 
// RENAME:  Change Column Name 
    ALTER TABLE table_name  
    RENAME COLUMN  old_column_name  TO  new_column_name 

// MODIFY:  Change type, keep name 
    ALTER TABLE table_name 
    MODIFY COLUMN  column_name  new_data_type  NOT NULL;

// CHANGE:  Rename + Change type (CHANGE needs both old and new name + type)
    ALTER TABLE table_name 
    CHANGE COLUMN  old_column_name  new_column_name  new_data_type;