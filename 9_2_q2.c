/*
Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.
*/

#include<stdio.h>
#include<string.h>

void main(){
	
	char email[50];
	char password[50];
	
	printf("Enter your email :");
	scanf("%s",&email);
	
	printf("Enter your password :");
	scanf("%s",&password);
	
	if(strcmp(email,"nayan@gmail.com")==0){
		if(strcmp(password,"nayan123")==0){
			printf("Login successfull");
		}else{
			printf("Wrong password");
		}
		}else{
			printf("Login invalid ");
		}
		
}
