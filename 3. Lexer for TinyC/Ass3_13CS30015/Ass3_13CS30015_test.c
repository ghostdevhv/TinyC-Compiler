


typedef union field{		//Union
	signed int int_data;
	float float_data;
	double double_data;
	long long_data;
	short short_data;
	char char_data;
	char string_data[20];
}Field;
typedef struct node{		/* Structure */
	auto Field data;
	static unsigned int no_of_queries = 0;
}node;
extern int fake(int,...);
int main(void){	
	const int _times = 7; 		// Constant equal to the number of fields in the union
	register signed int int_data = 100;
	float float_data = 25.74;
	double double_data = 25.3e2;
	long long_data = int_data + 900;
	short short_data = int_data - 90;
	char char_data = 'A';
	restrict char string_data = "Himanshu";
	node archive[2*_times];
	volatile int c = 1,k;
	do{
		for(int j = _times;j>=1;j--){
			switch(j){
				case c*7 : (archive+j-1)->int_data = int_data;
					break;
				case c*6 : (archive+j-1)->float_data = float_data;
					break;
				case c*5 : (archive+j-1)->double_data = double_data;
					break;
				case c*4 : (archive+j-1)->long_data = long_data;
					break;
				case c*3 : (archive+j-1)->short_data = short_data;
					break;
				case c*2 : (archive+j-1)->char_data = char_data;
					break;
				case c*1 : (archive+j-1)->string_data = string_data;
					break;
				default : break;
			}
		}
		if(short_data == 0 || short_data < 0 || long_data <= 0 || (int_data>long_data)&&(!short_data))
			continue;
		else{
			int_data /= short_data;
			short_data %= 10;
			long_data = (long_data/int_data)%10;
			int_data += 10;
			int_data *= 10;
			int_data = int_data<<short_data;
			int_data = int_data>>short_data;
			int_data<<=2;
			int_data>>=2;
			int_data -= 20;
		}	
	}while((++(archive[0].no_of_queries))!=2);
	Zero:
	_Bool val = int_data==0? true:false;
	int size = sizeof(archive);
	if(size&1){
		size^=1;
		size&=1;
		size|=1;
	}
	else{
		~size;
		size = size ^ 1;
		size = size | 1;
		goto Zero;
	}
	
	return 0;
}
