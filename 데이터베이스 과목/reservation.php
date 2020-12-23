<?php
$conn=mysqli_connect("localhost", "arimy981002 ", "bestgirl9!", "arimy981002 ") or die("movieDB ���� ���� !!");
	// $conn=mysqli_connect("localhost", "201827559", "likelion98", "201827559") or die("movieDB 접속 실패 !!");
	
	$movie_id = $_GET['movie_id'];

	$sql	= "select * from MOVIE where id = '".$movie_id."'";
	//echo $sql;
	//exit;  //일시 멈춤, 디버깅할때 유용한 명령어

	$result	= mysqli_query($conn, $sql);
	$row	= mysqli_fetch_array($result);
	$title	= $row['title'];  // * 모든 필드에서 title 필드 가져오기 의미
	
	mysqli_close($conn);
?> 

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8"/>
	<meta name="viewport" content="initial-scale=1.0, width=device-width">
	<title>예약하기</title>
    <!-- 제이쿼리 모바일, 제이쿼리 라이브러리 화일 -->
	<link rel="stylesheet" href="http://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.css"/>
	<script src="http://code.jquery.com/jquery-1.11.1.min.js"></script>
	<script src="http://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.js"></script>	
</head>  
<body>
  <div data-role="page" id="id">
	<div data-role="content">
	<div data-role="header" data-position="fixed" data-theme="b">
	<a href="#" data-icon="back" data-rel="back">Back</a>
		<h1>영화 정보</h1>
		<a href="main.php" data-icon="home" data-iconpos="notext">Home</a>
		<div data-role="navbar">
			<ul>
				<li><a href="insert.php">입력</a></li>
				<li><a href="update_select.php">수정</a></li>
				<li><a href="delete_select.php">삭제</a></li>	
				<li><a href="selectAll.php">전체검색</a></li>
			</ul>
		</div>
	  </div>
		<form name="form1" method="post" enctype="multipart/form-data" action="reservation_result.php" data-ajax="false">  
			<h3>영화제목 : <?=$title?><br><br>
				영화번호 
				<input type="text" name="movie_id" value="<?=$movie_id?>" data-mini="true">
				예약자
				<input type="text" name="r_name" value="" data-mini="true">
				예약일
				<input type="text" name="r_date" value="" data-mini="true">
				예약인원
				<input type="text" name="r_count" value="" data-mini="true">

            
			<div class="ui-body">
				<fieldset class="ui-grid-a">
					<div class="ui-block-a"><input style="background:yellow;" type="reset" value="취소"/></div>
					<div class="ui-block-b"><input style="background:yellow;" type="submit" value="예약하기"/></div>
				</fieldset>
			</div>
		</form> 
	</div>
	<div data-role="footer" data-position="fixed" data-theme="b">
		<h4>movie & movie cinema</h4>
    </div>
  </div>
</body>
</html>

