
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>1-3분야별 검색결과</title>
</head>
<body>
<br>
    <h2>1-3번 :분야별 검색결과</h2>
    </br>

    <table border=1>
        <tr>
            <th bgcolor="#EAEAEA">제품이름</th>
            <th bgcolor="#EAEAEA">가격</th>
            <th bgcolor="#EAEAEA">장점</th>
        </tr>

    <?php
    $mysqli= new mysqli("pnuailab.synology.me:3310", "201827559", "lion98", "201827559");

    $p_type = $_POST["sProductType"];

    if($result= $mysqli->query("SELECT p_name AS '제품이름', price AS '가격', good AS '장점' FROM product1_3 WHERE p_type = '".$p_type."' "))
    {
        while ($data=$result->fetch_array()) {
            echo "<tr>";
            echo "<td>". $data['제품이름']."</td>";
            echo "<td>". $data['가격']."</td>";
            echo "<td>". $data['장점']."</td>";
            echo"</tr>";
        }
        
            $result->close();
            $mysqli->close();
        }

    ?>

    </table>
</body>
</html>