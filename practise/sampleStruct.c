#include<stdio.h>
#include<stdint.h>
typedef struct{
  union out
  {
    uint8_t x;
    typedef struct
	{
          unsigned mtr_x     : 1;
	  unsigned mtr_y     : 1;
	  unsigned unwanted  : 6;
	}mtr_dir K;
  };
}data;



int main()
{

data saurabh;

saurabh.out.K.mtr_x=0;


printf("%d mtr_x",saurabh.out.K.mtr_x);

}
