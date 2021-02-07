<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2-3번</title>
</head>
<body>
    <br>
    <h2>2-3번 : 그 때에 확진자가 그 장소에 있었는지 판단</h2>
    <!-- (결과 코드는 2-3_result.php 참고) -->
  
</br>
    <form name="form1" method="post" action="2-3번_result.php">  

		방문 장소 : 
		<input type="text" name="covidVisitPlace" placeholder="ex) 학원" data-mini="true"></br></br>
        
        방문 일자(mm/dd) :
        <input type="text" name="covidVisitDate" placeholder="ex) 11/25" data-mini="true"></br></br>

        <input type="submit" data-inline="true" value="확진자가 그 장소에 있었는지 click"/>

	</form> 

</body>
</html>

