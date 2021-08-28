
static int Global_var=8 ;

int add(int f, int g);
int sub(int f, int g);

int main (void)
{
	int Local_Var=0;
	
	Global_var++;
	Global_var++;
	Global_var++;
	Global_var++;
	
	int add_Var=add(5,6);
	int sub_Var=sub(6,5);
	
}

int add(int f, int g)
{
	int c =0 ;
	c=f+g;
	return c;
	
}


int sub(int f, int g)
{
	int c =0 ;
	c=f-g;
	return c;
	
}
