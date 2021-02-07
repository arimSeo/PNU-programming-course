<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>1-3번: 검색하기</title>
</head>
<body>
    <br>
    <h2>1-3번 : 검색하면 제품이름,가격,장점 나오게 하기</h2>
    <!-- (결과 코드는 각각의 1-3~~_result.php 참고) -->
    아래의 ex)에 적힌 단어로 검색해주세요~ (phpMyadmin 데이터베이스에 저장한 단어들)

    <br><br><br>
    <form name="form1" method="post" action="1-3name_result.php">  
		제품 이름 : 
		<input type="search" name="sProductName" placeholder="ex) 치킨,감자,곰인형,피자,사탕" data-mini="true">
        
        <input type="submit" data-inline="true" value="제품이름별 검색"/>
	</form> 
    <br><br>

    <form name="form2" method="post" action="1-3type_result.php">  
        &nbsp;&nbsp; 분야 &nbsp;&nbsp;&nbsp;&nbsp;: 
		<input type="search" name="sProductType" placeholder="ex) 음식,인형" data-mini="true">
        
        <input type="submit" data-inline="true" value="분야별 검색"/>
	</form> 
    <br><br>
    
    <form name="form3" method="post" action="1-3use_result.php">  
        제품 용도 : 
		<input type="search" name="sProductUse" placeholder="ex) 먹기,간식,장난감" data-mini="true">
      	
        <input type="submit" data-inline="true" value="제품용도별 검색"/>
	</form>

</body>
</html>

