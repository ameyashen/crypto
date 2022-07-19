// included helper functions or building blocks per RFC https://datatracker.ietf.org/doc/draft-denis-aegis-aead/05/
#include <iostream>

struct buf_data {
  unisgned int m_len;
  void * m_buf;
  
  buf_data(len)
  {
    m_buf = new unsigned char[len];
    m_len = len;
  }
  
  ~buf_data()
  {
    delete[] m_buf;
    m_len = 0;
  }
  
  concatenate(const buf_data &buf2)
  {
    unsigned char * tmp = new char[m_len + buf2->m_len];
    memcpy(tmp, m_buf, m_len);
    memcpy(tmp + m_len, buf2->m_buf, buf2->m_len);
    delete[] m_buf;
    m_len += buf2->m_len2; 
  }
};

