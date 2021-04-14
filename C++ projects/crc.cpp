#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

using namespace std;

#define CRC 0x00

int n=10;

struct packet{
    size_t len=3;
    uint16_t arr[8]={0xff, 0xff, 0x03, 0x01, 0x02, 0x03, 0x00, 0x00};
};

class packetizer
{
private:
    uint8_t crc;
public:
    
    int CRC_check(uint8_t r)
  {
     crc=r;
     cout<<crc<<endl;
     /*int index=0;
     for(size_t i=0; i<size; i++)
      {
        if(buff[i]== 0xff)
      {
          index = i;
       }
  }
  

  for(size_t i=index-1; i<=size; i++)
  { 
      
      printf("\t%x\t",buff[i]);
      
    
      /*if(buff[i] == 0x00)
      {
          break;
       }
       
  }*/
    if(crc==0x00)
    {
        //cout<<buff[size-1]<<endl;
        cout<<"transmission is success"<<endl;
    }
    else
    {
        cout<<"error detected"<<endl;
    }
}

    packet p;
    int extract_data (const uint16_t* buff, size_t size);
    void modified_data (const uint16_t* buff, size_t size);
    void delete_data (const uint16_t* buff, size_t size);
};



int main()
{
    packet pq;
    packetizer c;
    //int length=*(&pq.arr + 1) - pq.arr;
    //cout<<length<<endl;
    size_t size=sizeof(pq.arr)/2;
    cout<<size<<endl;
    //c.crc=pq.arr[size-1];
    packetizer p1;
    c.CRC_check(pq.arr[size-1]);
    return 0;
}
