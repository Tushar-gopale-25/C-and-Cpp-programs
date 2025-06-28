<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "tushar"; 

$conn = mysqli_connect($servername, $username, $password, $database);

if (!$conn) {
    die("Sorry we failed to connect: " . mysqli_connect_error());
} else {
    echo "Connection was successful<br>";
}

// Correct SQL syntax - using backticks properly and fixing field name `sr.no`
$sql = "CREATE TABLE phptable (
    `sr_no` INT(11) NOT NULL AUTO_INCREMENT,
    `Name` VARCHAR(50) NOT NULL,
    `age` INT(11) NOT NULL,
    `gender` VARCHAR(10) NOT NULL,
    PRIMARY KEY (`sr_no`)
)";

$result = mysqli_query($conn, $sql);

if ($result) {
    echo "The table was created successfully...!<br>";
} else {
    echo "The table was not created successfully because of this error ---> " . mysqli_error($conn);
}
?>
