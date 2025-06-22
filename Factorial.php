<?php
function factorial($n) {
    $result = 1;
    for ($i = 1; $i <= $n; $i++) {
        $result *= $i;
    }
    return $result;
}

echo "Factorial of 5 is " . factorial(5);  // Output: Factorial of 5 is 120
?>