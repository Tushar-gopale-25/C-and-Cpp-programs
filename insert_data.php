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

$sql = "INSERT INTO `phptable` ( `Name`, `age`, `gender`) VALUES ('Vishal', '22', 'male')";

$result = mysqli_query($conn, $sql);

if ($result) {
    echo "The record has been inserted successfully...!<br>";
} else {
    echo "The record was not inserted successfully because of this error ---> " . mysqli_error($conn);
}

?>