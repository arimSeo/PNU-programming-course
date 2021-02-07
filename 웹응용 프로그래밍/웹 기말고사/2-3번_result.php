
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2-3번</title>
</head>
<body>
<br>
    <h2>2-3번_result: 확진자가 그 장소에 있었는지 판단결과</h2>
    </br>

    <table border=1>
        <tr>
            <th bgcolor="#EAEAEA">확진자 번호</th>
            <th bgcolor="#EAEAEA">방문장소</th>
            <th bgcolor="#EAEAEA">방문일자</th>
        </tr>

    <?php
    $mysqli= new mysqli("pnuailab.synology.me:3310", "201827559", "lion98", "201827559");

    $visitPlace = $_POST["covidVisitPlace"];
    $visitDate = $_POST["covidVisitDate"];

    if($result= $mysqli->query("SELECT id, visitPlace, visitDate FROM covid19 WHERE visitPlace = '".$visitPlace."' AND visitDate='".$visitDate."' "))
    {
        while ($data=$result->fetch_array()) {
            echo "<tr>";
            echo "<td>". $data['id']."</td>";
            echo "<td>". $data['visitPlace']."</td>";
            echo "<td>". $data['visitDate']."</td>";
            echo"</tr>";
        }
        
        $count = mysqli_num_rows($result) ;
        
        if ($count ==0) {
            echo "<script>alert('같은 장소에 있지 않았습니다');location.replace('2-3번.php');</script>";
        }
        else{
            echo "<script>alert('같은 장소에 있었습니다');</script>";
        }

            $result->close();
            $mysqli->close();
        }

    ?>

    </table>

</body>
</html>

