all:MyInterp_test.class MyInterp_test.class myInterpLexer.java myInterp.tokens myInterpParser.java


myInterpLexer.class:myInterpLexer.java myInterpParser.java MyInterp_test.java
	javac -cp ./antlr-3.5.2-complete-no-st3.jar  MyInterp_test.java myInterpLexer.java myInterpParser.java

myInterpParser.class:myInterpLexer.java myInterpParser.java MyInterp_test.java
	javac -cp ./antlr-3.5.2-complete-no-st3.jar  MyInterp_test.java myInterpLexer.java myInterpParser.java

MyInterp_test.class:myInterpLexer.java myInterpParser.java MyInterp_test.java
	javac -cp ./antlr-3.5.2-complete-no-st3.jar  MyInterp_test.java myInterpLexer.java myInterpParser.java

myInterpLexer.java:myInterp.g
	java -jar antlr-3.5.2-complete-no-st3.jar myInterp.g

myInterpParser.java:myInterp.g
	java -jar antlr-3.5.2-complete-no-st3.jar myInterp.g

run1:MyInterp_test.class
	java -cp ./antlr-3.5.2-complete-no-st3.jar:. MyInterp_test input1.c

run2:MyInterp_test.class
	java -cp ./antlr-3.5.2-complete-no-st3.jar:. MyInterp_test input2.c

run3:MyInterp_test.class
	java -cp ./antlr-3.5.2-complete-no-st3.jar:. MyInterp_test input3.c

run4:MyInterp_test.class
	java -cp ./antlr-3.5.2-complete-no-st3.jar:. MyInterp_test input4.c

clean:
	rm -rf myInterp.tokens myInterpLexer.java myInterpParser.java *.class