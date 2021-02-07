<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2-1번_result : 코로나19 감염자 입력결과</title>
</head>
<body>
    <br>
    <h2>2-1번_result : 코로나19 감염자 입력결과</h2>
    <br><br>

<?php
    $conn=mysqli_connect("pnuailab.synology.me:3310", "201827559", "lion98", "201827559");

    $id= $_POST["covidId"];
    $namee= $_POST["covidName"];
    $place= $_POST["covidPlace"];
    $dayy= $_POST["covidDay"];
    $file = $_FILES['upfile'];
    $visitPlace= $_POST["covidVisitPlace"];
    $visitDate= $_POST["covidVisitDate"];
    $visitTime= $_POST["covidStayTime"];
    $covidNum= $_POST["covidNum"];

    $upload_dir = "./photo/";
    $pathfile = $upload_dir.basename($file['name']);


    if(isset($_FILES['upfile']) && $_FILES['upfile']['name'] != "") {       
        if(move_uploaded_file($file['tmp_name'], $pathfile)) {        
            $sql="INSERT INTO covid19( id, namee, place, dayy, photo, visitPlace, visitDate, visitTime, covidNum) VALUES('".$id."','".$namee."' ,'".$place."','".$dayy."','".$pathfile."','".$visitPlace."','".$visitDate."','".$visitTime."','".$covidNum."');";  

            mysqli_query($conn, $sql);                  
         }   
    }  
    else {       
            echo "<script>alert('사진파일이 업로드 되지 않았습니다.');</script>";
    }

?>

    <table border=1>
        <tr>
            <th>분류번호</th>
            <th>이름</th>
            <th>검사장소</th>
            <th>확정일자</th>
            <th>사진</th>
            <th>방문장소</th>
            <th>방문일자</th>
            <th>머문 시간</th>
            <th>감염원</th>
        </tr>

    <?php
    $mysqli= new mysqli("pnuailab.synology.me:3310", "201827559", "lion98", "201827559");

        
        if($result= $mysqli->query("SELECT * FROM covid19 "))
        {
            while ($data=$result->fetch_array()) {
                echo "<tr>";
                echo "<td>". $data['id']."</td>";
                echo "<td>". $data['namee']."</td>";
                echo "<td>". $data['place']."</td>";
                echo "<td>". $data['dayy']."</td>";
                echo "<td>". $data['photo']."</td>";
                echo "<td>". $data['visitPlace']."</td>";
                echo "<td>". $data['visitDate']."</td>";
                echo "<td>". $data['visitTime']."</td>";
                echo "<td>". $data['covidNum']."</td>";
                echo"</tr>";
            }
        
            $result->close();
            $mysqli->close();
        }

    ?>

    </table>

</body>
</html>