////////////////////////////////////////////////////////////////////////////////////////
// ADCTest Copyright and License
// ADCTest is in the public domain and is licensed under a 3-Clause BSD license
////////////////////////////////////////////////////////////////////////////////////////

#ifndef RINGBUFFERFLOAT_H_INCLUDED
#define RINGBUFFERFLOAT_H_INCLUDED

class RingBufferFloat
{
public:
    RingBufferFloat(int n);
    virtual ~RingBufferFloat();

    int getSize() const { return m_size-1; }

    void reset();

    int getReadSpace();

    int getWriteSpace();

    int peek(float *destination, int n);

    int skip(int n);

    int write(const float *source, int n);

    int zero(int n);

    protected:
        float *m_buffer;
        int    m_writer;
        int    m_reader;
        int    m_size;

    private:
        RingBufferFloat(const RingBufferFloat &); // not provided
        RingBufferFloat &operator=(const RingBufferFloat &); // not provided
};



#endif // RINGBUFFER_H_INCLUDED
