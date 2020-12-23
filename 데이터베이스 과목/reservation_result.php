<?php

//movieDB �����ͺ��̽� ����
$conn=mysqli_connect("localhost", "arimy981002 ", "bestgirl9!", "arimy981002 ") or die("movieDB ���� ���� !!");
// $conn=mysqli_connect("localhost", "201827559", "likelion98", "201827559") or die("movieDB ���� ���� !!");

$movie_id= $_POST["movie_id"];
$r_name = $_POST["r_name"];
$r_date = $_POST["r_date"];
$r_count = $_POST["r_count"];

     
        $sql="INSERT INTO reservation(movie_id, r_name, r_date, r_count) VALUES(NULL,'".$r_name."','".$r_date."',".$r_count.");";     
        $result= mysqli_query($conn, $sql);
        
        if($result) {
            echo "<script>alert( '".$r_name." �� ������ �Ϸ� �Ǿ����ϴ�');</script>"; 
        }


		else {       
		    echo "<script>alert('������� �ʾҽ��ϴ�.');</script>";
		}

mysqli_close($conn);

echo '<script>location.replace("main.php");</script>'; 

?>