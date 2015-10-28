/* Java Template: BigInteger Reference
   =================================================================
   Description: This document is a reference for the use of the
                BigInteger class in Java. 
   -----------------------------------------------------------------
   Author:      Abdullah Al Imran
   References:  Java API Documentation
   -----------------------------------------------------------------   
   
   Constants:
   ----------
   [1.2]  BigInteger.ONE  - The BigInteger constant one.
   [1.2]  BigInteger.ZERO - The BigInteger constant zero.
   

   Creating BigIntegers
   -------------
   1. From Strings
      a) BigInteger(String val);
      b) BigInteger(String val, int radix);
   2. From byte arrays
      a) BigInteger(byte[] val);
      b) BigInteger(int signum, byte[] magnitude)
   3. From a long integer
      a) static BigInteger BigInteger.valueOf(long val)
   

   Math operations:
   ----------------
   A + B = C              -->  C = A.add(B);
   A - B = C              -->  C = A.subtract(B);
   A * B = C              -->  C = A.multiply(B);
   A / B = C              -->  C = A.divide(B);
   A % B = C              -->  C = A.remainder(B);
   A % B = C where C > 0  -->  C = A.mod(B);
   A / B = Q & A % B = R  -->  C = A.divideAndRemainder(B);
                                     (Q = C[0], R = C[1])
   A ^ b = C              -->  C = A.pow(B);
   abs(A) = C             -->  C = A.abs();
   -(A) = C               -->  C = A.negate();
   
   gcd(A,B) = C           -->  C = A.gcd(B);
   (A ^ B) % M            -->  C = A.modPow(B,M);
   C = inverse of A mod M -->  C = A.modInverse(M);
   max(A,B) = C           -->  C = A.max(B);
   min(A,B) = C           -->  C = A.min(B);
   

   Bit Operations
   ------------------
   ~A = C       (NOT)     -->  C = A.not();
   A & B = C    (AND)     -->  C = A.and(B);
   A | B = C    (OR)      -->  C = A.or(B);
   A ^ B = C    (XOR)     -->  C = A.xor(B);
   A & ~B = C   (ANDNOT)  -->  C = A.andNot(B);
   A << n = C   (LSHIFT)  -->  C = A.shiftLeft(n);
   A >> n = C   (RSHIFT)  -->  C = A.shiftRight(n);
   Clear n'th bit of A    -->  C = A.clearBit(n);
   Set   n'th bit of A    -->  C = A.setBit(n);
   Flip  n'th bit of A    -->  C = A.flipBit(n);
   Test  n'th bit of A    -->  C = A.testBit(n);
   
   Bitcount of A = n      -->  n = A.bitCount();
   Bitlength of A = n     -->  n = A.bitLength();
   Lowest set bit of A    -->  n = A.getLowestSetBit();


   Comparison Operations
   ---------------------
   A < B                  -->  A.compareTo(B) == -1;
   A == B                 -->  A.compareTo(B) ==  0 
                            or A.equals(B);
   A > B                  -->  A.compareTo(B) ==  1;
   A < 0                  -->  A.signum() == -1;
   A == 0                 -->  A.signum() ==  0;
   A > 0                  -->  A.signum() ==  1;
   

   Conversion:
   -----------
   double                 -->  A.doubleValue();
   float                  -->  A.floatValue();
   int                    -->  A.intValue();
   long                   -->  A.longValue();
   byte[]                 -->  A.toByteArray();
   String                 -->  A.toString();
   String (base b)        -->  A.toString(b);
   -----------------------------------------------------------------*/

import java.util.*;
import java.math.*;

public class BigInt_Basic{
	
	public static void main(String [] args)
	{
		//Declaring variables
		BigInteger a,b;

		//Constructing a BigInt variable through String value
		BigInteger c=new BigInteger("1234567890123456789");

		//Taking Input
		Scanner input=new Scanner(System.in);

		a=input.nextBigInteger();
		b=input.nextBigInteger();

		//Some sample operations
		System.out.println("Addition = "+a.add(b));
		System.out.println("Subtraction = "+c.subtract(a));
		System.out.println("Multiplication = "+c.multiply(b));
		System.out.println("Division = "+(a.add(b)).divide(c));

	}
}