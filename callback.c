#include "_cgo_export.h"

extern void goFileOpenCB(void *, char *, int, int, int);

void csoundFileOpenCB(CSOUND *csound, const char *pathName, int fileType,
                      int write, int temp)
{
  goFileOpenCB((void *)csound, (char *)pathName, fileType, write, temp);
}

void csoundSetFileOpenCB(CSOUND *csound)
{
  csoundSetFileOpenCallback(csound, csoundFileOpenCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goPlayOpenCB(void *, csRtAudioParams *);

int csoundPlayOpenCB(CSOUND *csound, const csRtAudioParams *parm)
{
  return goPlayOpenCB((void *)csound, (csRtAudioParams *)parm);
}

void csoundSetPlayOpenCB(CSOUND *csound)
{
  csoundSetPlayopenCallback(csound, csoundPlayOpenCB);
}

/*////////////////////////////////////////////////////////////*/

extern void goRtPlayCB(void *, MYFLT *, int);

void csoundRtPlayCB(CSOUND *csound, const MYFLT *outbuf, int nbytes)
{
  goRtPlayCB((void *)csound, (MYFLT *)outbuf, nbytes/sizeof(MYFLT));
}

void csoundSetRtPlayCB(CSOUND *csound)
{
  csoundSetRtplayCallback(csound, csoundRtPlayCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goRecOpenCB(void *, csRtAudioParams *);

int csoundRecOpenCB(CSOUND *csound, const csRtAudioParams *parm)
{
  return goRecOpenCB((void *)csound, (csRtAudioParams *)parm);
}

void csoundSetRecOpenCB(CSOUND *csound)
{
  csoundSetRecopenCallback(csound, csoundPlayOpenCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goRtRecordCB(void *, MYFLT *, int);

int csoundRtRecordCB(CSOUND *csound, MYFLT *inbuf, int nbytes)
{
  return goRtRecordCB((void *)csound, inbuf, nbytes/sizeof(MYFLT));
}

void csoundSetRtRecordCB(CSOUND *csound)
{
  csoundSetRtrecordCallback(csound, csoundRtRecordCB);
}

/*////////////////////////////////////////////////////////////*/

extern void goRtCloseCB(void *);

void csoundRtCloseCB(CSOUND *csound)
{
  goRtCloseCB((void *)csound);
}

void csoundSetRtCloseCB(CSOUND *csound)
{
  csoundSetRtcloseCallback(csound, csoundRtCloseCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goExternalMidiInOpenCB(void *, void *, char *);

int csoundExternalMidiInOpenCB(CSOUND *csound, void **userData, const char *devName)
{
  return goExternalMidiInOpenCB((void *)csound, (void *)userData, (char *)devName);
}

void csoundSetExternalMidiInOpenCB(CSOUND *csound)
{
  csoundSetExternalMidiInOpenCallback(csound, csoundExternalMidiInOpenCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goExternalMidiReadCB(void *, void *, unsigned char *, int);

int csoundExternalMidiReadCB(CSOUND *csound, void *userData, unsigned char *buf, int nBytes)
{
  return goExternalMidiReadCB((void *)csound, userData, buf, nBytes);
}

void csoundSetExternalMidiReadCB(CSOUND *csound)
{
  csoundSetExternalMidiReadCallback(csound, csoundExternalMidiReadCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goExternalMidiInCloseCB(void *, void *);

int csoundExternalMidiInCloseCB(CSOUND *csound, void *userData)
{
  return goExternalMidiInCloseCB((void *)csound, userData);
}

void csoundSetExternalMidiInCloseCB(CSOUND *csound)
{
  csoundSetExternalMidiInCloseCallback(csound, csoundExternalMidiInCloseCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goExternalMidiOutOpenCB(void *, void *, char *);

int csoundExternalMidiOutOpenCB(CSOUND *csound, void **userData, const char *devName)
{
  return goExternalMidiOutOpenCB((void *)csound, (void *)userData, (char *)devName);
}

void csoundSetExternalMidiOutOpenCB(CSOUND *csound)
{
  csoundSetExternalMidiOutOpenCallback(csound, csoundExternalMidiOutOpenCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goExternalMidiWriteCB(void *, void *, unsigned char *, int);

int csoundExternalMidiWriteCB(CSOUND *csound, void *userData, const unsigned char *buf, int nBytes)
{
  return goExternalMidiWriteCB((void *)csound, userData, (unsigned char *)buf, nBytes);
}

void csoundSetExternalMidiWriteCB(CSOUND *csound)
{
  csoundSetExternalMidiWriteCallback(csound, csoundExternalMidiWriteCB);
}

/*////////////////////////////////////////////////////////////*/

extern int goExternalMidiOutCloseCB(void *, void *);

int csoundExternalMidiOutCloseCB(CSOUND *csound, void *userData)
{
  return goExternalMidiOutCloseCB((void *)csound, userData);
}

void csoundSetExternalMidiOutCloseCB(CSOUND *csound)
{
  csoundSetExternalMidiOutCloseCallback(csound, csoundExternalMidiOutCloseCB);
}

/*////////////////////////////////////////////////////////////*/

extern char *goExternalMidiErrorStringCB(int);

const char *csoundExternalMidiErrorStringCB(int err)
{
  return goExternalMidiErrorStringCB(err);
}

void csoundSetExternalMidiErrorStringCB(CSOUND *csound)
{
  csoundSetExternalMidiErrorStringCallback(csound, csoundExternalMidiErrorStringCB);
}

/*////////////////////////////////////////////////////////////*/

extern void goCscoreCB(void *);

void csoundCscoreCB(CSOUND *csound)
{
  goCscoreCB((void *)csound);
}

void csoundSetCscoreCB(CSOUND *csound)
{
  csoundSetCscoreCallback(csound, csoundCscoreCB);
}

/*////////////////////////////////////////////////////////////*/

extern void goInputChannelCB(void *, char *, void *, void *);

void csoundInputChannelCB(CSOUND *csound, const char *channelName,
                          void *channelValuePtr, const void *channelType)
{
  goInputChannelCB((void *)csound, (char *)channelName,
                   channelValuePtr, (void *)channelType);
}

void csoundSetInputChannelCB(CSOUND *csound)
{
  csoundSetInputChannelCallback(csound, csoundInputChannelCB);
}

extern void goOutputChannelCB(void *, char *, void *, void *);

void csoundOutputChannelCB(CSOUND *csound, const char *channelName,
                           void *channelValuePtr, const void *channelType)
{
  goOutputChannelCB((void *)csound, (char *)channelName,
                    channelValuePtr, (void *)channelType);
}

void csoundSetOutputChannelCB(CSOUND *csound)
{
  csoundSetOutputChannelCallback(csound, csoundOutputChannelCB);
}

/*////////////////////////////////////////////////////////////*/

extern void goSenseEventCB(void *, void *, int);

void csoundSenseEventCB0(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 0);
}

void csoundSenseEventCB1(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 1);
}

void csoundSenseEventCB2(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 2);
}

void csoundSenseEventCB3(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 3);
}

void csoundSenseEventCB4(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 4);
}

void csoundSenseEventCB5(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 5);
}

void csoundSenseEventCB6(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 6);
}

void csoundSenseEventCB7(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 7);
}

void csoundSenseEventCB8(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 8);
}

void csoundSenseEventCB9(CSOUND *csound, void *userData)
{
  goSenseEventCB((void *)csound, userData, 9);
}

int csoundRegisterSenseEventCB(CSOUND *csound, void *userData, int numFun)
{
  int ret;
  
  switch (numFun) {
    case 0: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB0, userData); break;
    case 1: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB1, userData); break;
    case 2: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB2, userData); break;
    case 3: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB3, userData); break;
    case 4: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB4, userData); break;
    case 5: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB5, userData); break;
    case 6: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB6, userData); break;
    case 7: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB7, userData); break;
    case 8: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB8, userData); break;
    case 9: ret = csoundRegisterSenseEventCallback(csound, csoundSenseEventCB9, userData); break;
    default: ret = -1;
  }
  return ret;
}

/*////////////////////////////////////////////////////////////*/

