// included helper functions or building blocks per RFC https://datatracker.ietf.org/doc/draft-denis-aegis-aead/05/
#include <iostream>

struct buf_data {
  unisgned int len;
  void * buf;
  
  buf_data(len)
  {
    buf = new unsigned char[len];
  }
  
  ~buf_data()
  {
    delete[] buf;
  }
};

