//Harshini(RA2111003010147)
//Rishabh(RA2111003010131)



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char Name[] = "NAME";
char Age[] = "AGE";
char Mobile[] = "MOBILE";
char Appointment[] = "APPOINTMENT";
char Time[] = "TIME";
char Diagnosis[] = "DIAGNOSIS";
struct patient
{
	int age, mobile;
	char name[20], appointment[30], diagnosis[20], time[10];
};
void Enter1()
{
	FILE *fp;
	fp = fopen("hospital.txt", "a");
	struct patient p;
	printf("\nName - "); scanf("%s", p.name);
	printf("\nAge - "); scanf("%d", &p.age);
	printf("\nMobile - "); scanf("%d", &p.mobile);
	printf("\nDiagnosis - "); scanf("%s", p.diagnosis);
	printf("\nAppointment - "); scanf("%s", p.appointment);
	printf("\nTime (24hr clock) - "); scanf("%s", p.time);
	fwrite(&p, sizeof(struct patient), 1, fp);
	fclose(fp);
}
void Print1()
{
	FILE *fp;
	fp = fopen("hospital.txt", "r");
	struct patient p;
	printf("\n%20s %5s %10s %20s %25s %10s", Name, Age, Mobile, Diagnosis, Appointment, Time);
	while (fread(&p, sizeof(struct patient), 1, fp) != NULL)
		printf("\n%20s %5d %10d %20s %25s %10s", p.name, p.age, p.mobile, p.diagnosis, p.appointment, p.time);
	fclose(fp);
}
void Search1()
{
        FILE *fp;
        fp = fopen("hospital.txt", "r");
        struct patient p;
	int p_mob, flag = 0;
	printf("\nEnter mobile number to search patient with - "); scanf("%d", &p_mob);
        while (fread(&p, sizeof(struct patient), 1, fp) != NULL)
        {
	        if(p_mob == p.mobile)
		{
			printf("\n%20s %5s %10s %20s %25s %10s", Name, Age, Mobile, Diagnosis, Appointment, Time);
			printf("\n%20s %5d %10d %20s %25s %10s", p.name, p.age, p.mobile, p.diagnosis, p.appointment, p.time);
        		flag = 1;
			break;
		}
		else
			flag = 0;
	}
	if (flag == 0)
		printf("\nNo patient with phone number %d is present\n", p_mob);
	fclose(fp);
}
int main()
{
	int ch;
	do
	{
		printf("\n\nHospital Management System\n\n");
		printf("1) Enter patient\n2) Print records\n3) Search for patient\n\nEnter choice - ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
			{
				int n, i; 
				printf("\nEnter number of patients to register ( >=1 ) - "); scanf("%d", &n);
				for(i = 0; i < n; i++)
					Enter1();
				if(n == 0)
					break;
			}
			break;
			case 2: 
			    Print1();
			    break;
			case 3: 
			    Search1();
			    break;
		}
	}
	while(ch != 0);
	return 0;
}
