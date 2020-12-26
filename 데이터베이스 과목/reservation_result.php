<?php

$conn=mysqli_connect("서버이름", "계정", "비번", "db이름") or die("movieDB 연결안됨!!");

$movie_id= $_POST["movie_id"];
$r_name = $_POST["r_name"];
$r_date = $_POST["r_date"];
$r_count = $_POST["r_count"];

     
        $sql="INSERT INTO reservation(movie_id, r_name, r_date, r_count) VALUES(NULL,'".$r_name."','".$r_date."',".$r_count.");";     
        $result= mysqli_query($conn, $sql);
        
        if($result) {
            echo "<script>alert( '".$r_name." 님 예약완료되었습니다');</script>"; 
        }


		else {       
		    echo "<script>alert('예약 안됨.');</script>";
		}

mysqli_close($conn);

echo '<script>location.replace("main.php");</script>'; 

?>