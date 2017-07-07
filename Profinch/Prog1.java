/*
    In this problem you have to decide wether user can change his password or not
    Old password is already stored in the program you just have to decide that user can update password or not
    
    You have to check following constraints
    -New Password should not match to the older one
    -New Password should not contain the older password
    -New Password must have atleast two special chars
    -New Password must have atleast two numbers
    -New Password must have atleast two upper case alphabets
    -New Password must have atleast two lower case alphabets
    -New Password must have length of atleast 8 chars 
    
*/
import java.util.*;
import java.lang.*;
import java.io.*;



class MyClass
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        
		String oldPassword = "AAaa11@@";
        
		System.out.println("Enter New Password: ");
		String newPassword = sc.next();

		int res = myFunction( oldPassword , newPassword );
		
        if( res == 1 )
		{
			oldPassword = newPassword;
			System.out.println("Password Changed Successfully");
		}
		else
		{
            showError( res );
		}
		
		
	}

	public static int myFunction( String oldP , String newP )
	{
	    if( newP.length() < 8 )
			return -1;
	
        if( oldP.equalsIgnoreCase(newP) )
			return -2;

		if( newP.contains(oldP) )
			return -3;
	
		int myArr[] = new int[128];
		
		for( int i = 0 ; i < newP.length() ; i++ )
		{
			myArr[ newP.charAt(i) ]++;
		}
        
		int lowerCount = 0;
		int upperCount = 0;
		int specialCount = 0;
		int numberCount= 0;

		for( int index = 'a' ; index <= 'z' ; index++ )
			if( myArr[index] > 0 )
				lowerCount += myArr[index];
		for( int index = 'A' ; index <= 'Z' ; index++ )
			if( myArr[index] > 0 )
				upperCount += myArr[index];
		for( int index = '0' ; index <= '9' ; index++ )
			if( myArr[index] > 0 )
				numberCount += myArr[index];
		
		specialCount = newP.length() - lowerCount - upperCount - numberCount;
		
		if( numberCount < 2)	
			return -4;
		if( specialCount < 2)	
			return -5;
		if( upperCount < 2)	
			return -6;
		if( lowerCount < 2)	
			return -7;		
		return 1;
	}
    
    public static void showError( int errorCode )
    {
        switch(errorCode)
        {
            case -1:
                System.out.println("Length is less then 8.");
                break;
            case -2:
                System.out.println("New Password is same as Old Password.");
                break;
            case -3:
                System.out.println("New Password contains the Old Password.");
                break;
            case -4:
                System.out.println("New Password don't have minimum no of Numeric.");
                break;
            case -5:
                System.out.println("New Password don't have minimum no of Special Char.");
                break;
            case -6:
                System.out.println("New Password don't have minimum no of Upper Case Char.");
                break;
            case -7:
                System.out.println("New Password don't have minimum no of Lower Case Char.");
                break;
        }
    }

}
