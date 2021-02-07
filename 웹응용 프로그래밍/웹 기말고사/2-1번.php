<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2-1번 : 코로나19 감염자 입력</title>
</head>
<body>
    <h2>2-1번 : 코로나19 감염자 입력</h2>
    (p.s : 사진 업로드error방지를 위해 사진은 제출한 파일과 같은 폴더 내의 photo폴더 안의 사진들(ex: jj.jpeg )만 이용해주세요)
    <!-- 파일을 전송하려면 form 태그에 enctype="multipart/form-data" 속성을 추가-->
    <form name="form4" method="post" action="2-1번_result.php" enctype="multipart/form-data" data-ajax="false">  
            - 번호 : <br>
            <input type="text" name="covidId"/> <br>
            - 이름 :  <br>
			<input type="text" name="covidName"/> <br>
            - 검사 장소 : <br>
            <input type="text" name="covidPlace"/> <br>
			- 확정일자(yyyy/mm/dd): <br>
            <input type="text" name="covidDay"/><br>

            - 사진 : 
            <input type="file" name="upfile" data-mini="true"><br>

            - 방문장소: <br>
            <input type="text" name="covidVisitPlace"/><br>
            - 방문 일자(mm/dd) :<br>
            <input type="text" name="covidVisitDate"/><br>
            - 머문 시간 :<br>
            <input type="text" name="covidStayTime"/><br>
            - 감염원(감염자 분류번호) : <br>
            <input type="text" name="covidNum"/>
            <br><br>
            
            &nbsp;&nbsp;&nbsp;<input type="submit" value="입력하기"/>
	</form>

</body>
</html>

