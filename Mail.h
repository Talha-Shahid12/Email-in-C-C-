	FILE* locBit;
	FILE* locBit1;
	FILE* locBit2;
	FILE* locBit3;
	FILE *locBit4;
	FILE* MainCRET;
void Init(void)
{
	locBit = fopen("GmailUR.txt","w");
	locBit1 =fopen("Mail.txt","w");
	locBit2 =fopen("Message.txt","w");
	locBit3 =fopen("PassUR.txt","w");
	locBit4 =fopen("Subject.txt","w");	
	MainCRET=fopen("Mail.aysoat","w");
	fprintf(MainCRET,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody = ''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, smessage)\nprint('Email has been sent!')\n\n");
	fclose(MainCRET);
}
void fillDat(void)
{
	Init();
	char SENDMAIL[256];
	char GMAILID[2561]=/*please write your email from which you want to send email to someone*/
	fprintf(locBit,"%s",GMAILID);
	char PASSWARD[256]=/*Set password here of email from which you want to send email to someo one*/
	fprintf(locBit3,"%s",PASSWARD);	
	printf("Please enter the Costumer's Email-ID (Only Gmail is accepted, Else this will crash!)\nMail:> ");
	scanf("%s",&SENDMAIL);
	fprintf(locBit1,"%s",SENDMAIL);
	char SUBJECT[50]=/*Set Subject for email here*/
	fprintf(locBit4,"%s\n",SUBJECT);
	char MESSAGE[50]=/*Set message for email here*/
	fprintf(locBit2,"%s",MESSAGE);
	system("CLS");
	printf("We have sent an confirmation email to you on your entered email (%s)\n(Program will continue it self don't press any key)\n\n",SENDMAIL);
	printf("\a");
	fclose(locBit);
	fclose(locBit1);
	fclose(locBit2);
	fclose(locBit3);
	fclose(locBit4);
}
int SendMail(int returnVal)
{
	
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}
