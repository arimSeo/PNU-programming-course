<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
  <body>
    <h2>1-1번(xsl) 카탈로그: 규격은 박스로 구분, 가격은 색깔있게, 장점은 색깔o + 가장 아래오도록</h2>

    <table border="0">
    <tr>
        <th bgcolor="#EAEAEA">이름: </th>
        <xsl:for-each select="catalog/cd">
        <td><xsl:value-of select="이름" /></td>
        </xsl:for-each>
    </tr>
    
    <tr>
        <th  bgcolor="#EAEAEA">분야:</th>
        <xsl:for-each select="catalog/cd">
        <td><xsl:value-of select="분야" /></td>
        </xsl:for-each>
    </tr>

    <tr>
        <th bgcolor="#EAEAEA">용도:</th>
        <xsl:for-each select="catalog/cd">
        <td><xsl:value-of select="용도" /></td>
        </xsl:for-each>
    </tr>
    
    <tr>
        <th bgcolor="#EAEAEA">회사: </th>
        <xsl:for-each select="catalog/cd">
        <td><xsl:value-of select="회사" /></td>
        </xsl:for-each>
    </tr>

    <tr>
        <th bgcolor="#EAEAEA">규격:</th>
        <xsl:for-each select="catalog/cd">
        <td style="border:1px solid; padding-right:10px;"><span><xsl:value-of select="규격"/></span></td>
        </xsl:for-each>
    </tr>

    <tr>
        <th bgcolor="#EAEAEA">가격: </th>
        <xsl:for-each select="catalog/cd">
        <td><span style="color:#00ff00"><xsl:value-of select="가격" /></span></td>
        </xsl:for-each>
    </tr>

    <tr>
        <th bgcolor="#EAEAEA">장점: </th>
        <xsl:for-each select="catalog/cd">
        <td><span style="color:#ff0000"><xsl:value-of select=" 장점" /></span></td>
        </xsl:for-each>
    </tr>
    
   
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>



