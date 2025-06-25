<?php
$servername = "localhost";
$username = "root";
$password = ""; 

$conn = mysqli_connect($servername, $username, $password);

if (!$conn) {
    die("Sorry we failed to connect: " . mysqli_connect_error());
} else {
    echo "Connection was successful<br>";
}

$sql = "CREATE DATABASE tushar";
$result = mysqli_query($conn, $sql);

if ($result) {
    echo "The DB was created successfully...!<br>";
} else {
    echo "The DB was not created successfully because of this error ---> " . mysqli_error($conn);
}
?>
