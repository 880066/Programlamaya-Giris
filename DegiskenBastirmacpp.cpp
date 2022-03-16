#include <stdio.h>

#define tam_sayi int

typedef class Sayi{

  private:
  tam_sayi a;
  
  public:
  Sayi( const tam_sayi a){
    
    this->a = a;
    
  }
  
   void bastir(void){
  
  
    printf("%d",a);
    
  }
  

}sayi1;

int main(void)
{

  const tam_sayi a = 5;
  
  sayi1 sayi(a);
  
  sayi.bastir();
 
  

return 0;
}
