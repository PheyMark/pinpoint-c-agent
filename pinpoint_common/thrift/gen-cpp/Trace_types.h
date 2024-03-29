/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Trace_TYPES_H
#define Trace_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




class TIntStringValue;

class TIntStringStringValue;

class TAnnotationValue;

class TAnnotation;

class TSpanEvent;

class TSpan;

class TSpanChunk;

class TStringMetaData;

class TSqlMetaData;

class TApiMetaData;

class TResult;

typedef struct _TIntStringValue__isset {
  _TIntStringValue__isset() : intValue(false), stringValue(false) {}
  bool intValue :1;
  bool stringValue :1;
} _TIntStringValue__isset;

class TIntStringValue : public virtual ::apache::thrift::TBase {
 public:

  TIntStringValue(const TIntStringValue&);
  TIntStringValue& operator=(const TIntStringValue&);
  TIntStringValue() : intValue(0), stringValue() {
  }

  virtual ~TIntStringValue() throw();
  int32_t intValue;
  std::string stringValue;

  _TIntStringValue__isset __isset;

  void __set_intValue(const int32_t val);

  void __set_stringValue(const std::string& val);

  bool operator == (const TIntStringValue & rhs) const
  {
    if (!(intValue == rhs.intValue))
      return false;
    if (__isset.stringValue != rhs.__isset.stringValue)
      return false;
    else if (__isset.stringValue && !(stringValue == rhs.stringValue))
      return false;
    return true;
  }
  bool operator != (const TIntStringValue &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TIntStringValue & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TIntStringValue &a, TIntStringValue &b);

inline std::ostream& operator<<(std::ostream& out, const TIntStringValue& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TIntStringStringValue__isset {
  _TIntStringStringValue__isset() : intValue(false), stringValue1(false), stringValue2(false) {}
  bool intValue :1;
  bool stringValue1 :1;
  bool stringValue2 :1;
} _TIntStringStringValue__isset;

class TIntStringStringValue : public virtual ::apache::thrift::TBase {
 public:

  TIntStringStringValue(const TIntStringStringValue&);
  TIntStringStringValue& operator=(const TIntStringStringValue&);
  TIntStringStringValue() : intValue(0), stringValue1(), stringValue2() {
  }

  virtual ~TIntStringStringValue() throw();
  int32_t intValue;
  std::string stringValue1;
  std::string stringValue2;

  _TIntStringStringValue__isset __isset;

  void __set_intValue(const int32_t val);

  void __set_stringValue1(const std::string& val);

  void __set_stringValue2(const std::string& val);

  bool operator == (const TIntStringStringValue & rhs) const
  {
    if (!(intValue == rhs.intValue))
      return false;
    if (__isset.stringValue1 != rhs.__isset.stringValue1)
      return false;
    else if (__isset.stringValue1 && !(stringValue1 == rhs.stringValue1))
      return false;
    if (__isset.stringValue2 != rhs.__isset.stringValue2)
      return false;
    else if (__isset.stringValue2 && !(stringValue2 == rhs.stringValue2))
      return false;
    return true;
  }
  bool operator != (const TIntStringStringValue &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TIntStringStringValue & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TIntStringStringValue &a, TIntStringStringValue &b);

inline std::ostream& operator<<(std::ostream& out, const TIntStringStringValue& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TAnnotationValue__isset {
  _TAnnotationValue__isset() : stringValue(false), boolValue(false), intValue(false), longValue(false), shortValue(false), doubleValue(false), binaryValue(false), byteValue(false), intStringValue(false), intStringStringValue(false) {}
  bool stringValue :1;
  bool boolValue :1;
  bool intValue :1;
  bool longValue :1;
  bool shortValue :1;
  bool doubleValue :1;
  bool binaryValue :1;
  bool byteValue :1;
  bool intStringValue :1;
  bool intStringStringValue :1;
} _TAnnotationValue__isset;

class TAnnotationValue : public virtual ::apache::thrift::TBase {
 public:

  TAnnotationValue(const TAnnotationValue&);
  TAnnotationValue& operator=(const TAnnotationValue&);
  TAnnotationValue() : stringValue(), boolValue(0), intValue(0), longValue(0), shortValue(0), doubleValue(0), binaryValue(), byteValue(0) {
  }

  virtual ~TAnnotationValue() throw();
  std::string stringValue;
  bool boolValue;
  int32_t intValue;
  int64_t longValue;
  int16_t shortValue;
  double doubleValue;
  std::string binaryValue;
  int8_t byteValue;
  TIntStringValue intStringValue;
  TIntStringStringValue intStringStringValue;

  _TAnnotationValue__isset __isset;

  void __set_stringValue(const std::string& val);

  void __set_boolValue(const bool val);

  void __set_intValue(const int32_t val);

  void __set_longValue(const int64_t val);

  void __set_shortValue(const int16_t val);

  void __set_doubleValue(const double val);

  void __set_binaryValue(const std::string& val);

  void __set_byteValue(const int8_t val);

  void __set_intStringValue(const TIntStringValue& val);

  void __set_intStringStringValue(const TIntStringStringValue& val);

  bool operator == (const TAnnotationValue & rhs) const
  {
    if (__isset.stringValue != rhs.__isset.stringValue)
      return false;
    else if (__isset.stringValue && !(stringValue == rhs.stringValue))
      return false;
    if (__isset.boolValue != rhs.__isset.boolValue)
      return false;
    else if (__isset.boolValue && !(boolValue == rhs.boolValue))
      return false;
    if (__isset.intValue != rhs.__isset.intValue)
      return false;
    else if (__isset.intValue && !(intValue == rhs.intValue))
      return false;
    if (__isset.longValue != rhs.__isset.longValue)
      return false;
    else if (__isset.longValue && !(longValue == rhs.longValue))
      return false;
    if (__isset.shortValue != rhs.__isset.shortValue)
      return false;
    else if (__isset.shortValue && !(shortValue == rhs.shortValue))
      return false;
    if (__isset.doubleValue != rhs.__isset.doubleValue)
      return false;
    else if (__isset.doubleValue && !(doubleValue == rhs.doubleValue))
      return false;
    if (__isset.binaryValue != rhs.__isset.binaryValue)
      return false;
    else if (__isset.binaryValue && !(binaryValue == rhs.binaryValue))
      return false;
    if (__isset.byteValue != rhs.__isset.byteValue)
      return false;
    else if (__isset.byteValue && !(byteValue == rhs.byteValue))
      return false;
    if (__isset.intStringValue != rhs.__isset.intStringValue)
      return false;
    else if (__isset.intStringValue && !(intStringValue == rhs.intStringValue))
      return false;
    if (__isset.intStringStringValue != rhs.__isset.intStringStringValue)
      return false;
    else if (__isset.intStringStringValue && !(intStringStringValue == rhs.intStringStringValue))
      return false;
    return true;
  }
  bool operator != (const TAnnotationValue &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAnnotationValue & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TAnnotationValue &a, TAnnotationValue &b);

inline std::ostream& operator<<(std::ostream& out, const TAnnotationValue& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TAnnotation__isset {
  _TAnnotation__isset() : key(false), value(false) {}
  bool key :1;
  bool value :1;
} _TAnnotation__isset;

class TAnnotation : public virtual ::apache::thrift::TBase {
 public:

  TAnnotation(const TAnnotation&);
  TAnnotation& operator=(const TAnnotation&);
  TAnnotation() : key(0) {
  }

  virtual ~TAnnotation() throw();
  int32_t key;
  TAnnotationValue value;

  _TAnnotation__isset __isset;

  void __set_key(const int32_t val);

  void __set_value(const TAnnotationValue& val);

  bool operator == (const TAnnotation & rhs) const
  {
    if (!(key == rhs.key))
      return false;
    if (__isset.value != rhs.__isset.value)
      return false;
    else if (__isset.value && !(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const TAnnotation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAnnotation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TAnnotation &a, TAnnotation &b);

inline std::ostream& operator<<(std::ostream& out, const TAnnotation& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TSpanEvent__isset {
  _TSpanEvent__isset() : spanId(false), sequence(false), startElapsed(false), endElapsed(true), rpc(false), serviceType(false), endPoint(false), annotations(false), depth(true), nextSpanId(true), destinationId(false), apiId(false), exceptionInfo(false), asyncId(false), nextAsyncId(false), asyncSequence(false) {}
  bool spanId :1;
  bool sequence :1;
  bool startElapsed :1;
  bool endElapsed :1;
  bool rpc :1;
  bool serviceType :1;
  bool endPoint :1;
  bool annotations :1;
  bool depth :1;
  bool nextSpanId :1;
  bool destinationId :1;
  bool apiId :1;
  bool exceptionInfo :1;
  bool asyncId :1;
  bool nextAsyncId :1;
  bool asyncSequence :1;
} _TSpanEvent__isset;

class TSpanEvent : public virtual ::apache::thrift::TBase {
 public:

  TSpanEvent(const TSpanEvent&);
  TSpanEvent& operator=(const TSpanEvent&);
  TSpanEvent() : spanId(0), sequence(0), startElapsed(0), endElapsed(0), rpc(), serviceType(0), endPoint(), depth(-1), nextSpanId(-1LL), destinationId(), apiId(0), asyncId(0), nextAsyncId(0), asyncSequence(0) {
  }

  virtual ~TSpanEvent() throw();
  int64_t spanId;
  int16_t sequence;
  int32_t startElapsed;
  int32_t endElapsed;
  std::string rpc;
  int16_t serviceType;
  std::string endPoint;
  std::vector<TAnnotation>  annotations;
  int32_t depth;
  int64_t nextSpanId;
  std::string destinationId;
  int32_t apiId;
  TIntStringValue exceptionInfo;
  int32_t asyncId;
  int32_t nextAsyncId;
  int16_t asyncSequence;

  _TSpanEvent__isset __isset;

  void __set_spanId(const int64_t val);

  void __set_sequence(const int16_t val);

  void __set_startElapsed(const int32_t val);

  void __set_endElapsed(const int32_t val);

  void __set_rpc(const std::string& val);

  void __set_serviceType(const int16_t val);

  void __set_endPoint(const std::string& val);

  void __set_annotations(const std::vector<TAnnotation> & val);

  void __set_depth(const int32_t val);

  void __set_nextSpanId(const int64_t val);

  void __set_destinationId(const std::string& val);

  void __set_apiId(const int32_t val);

  void __set_exceptionInfo(const TIntStringValue& val);

  void __set_asyncId(const int32_t val);

  void __set_nextAsyncId(const int32_t val);

  void __set_asyncSequence(const int16_t val);

  bool operator == (const TSpanEvent & rhs) const
  {
    if (__isset.spanId != rhs.__isset.spanId)
      return false;
    else if (__isset.spanId && !(spanId == rhs.spanId))
      return false;
    if (!(sequence == rhs.sequence))
      return false;
    if (!(startElapsed == rhs.startElapsed))
      return false;
    if (__isset.endElapsed != rhs.__isset.endElapsed)
      return false;
    else if (__isset.endElapsed && !(endElapsed == rhs.endElapsed))
      return false;
    if (__isset.rpc != rhs.__isset.rpc)
      return false;
    else if (__isset.rpc && !(rpc == rhs.rpc))
      return false;
    if (!(serviceType == rhs.serviceType))
      return false;
    if (__isset.endPoint != rhs.__isset.endPoint)
      return false;
    else if (__isset.endPoint && !(endPoint == rhs.endPoint))
      return false;
    if (__isset.annotations != rhs.__isset.annotations)
      return false;
    else if (__isset.annotations && !(annotations == rhs.annotations))
      return false;
    if (__isset.depth != rhs.__isset.depth)
      return false;
    else if (__isset.depth && !(depth == rhs.depth))
      return false;
    if (__isset.nextSpanId != rhs.__isset.nextSpanId)
      return false;
    else if (__isset.nextSpanId && !(nextSpanId == rhs.nextSpanId))
      return false;
    if (__isset.destinationId != rhs.__isset.destinationId)
      return false;
    else if (__isset.destinationId && !(destinationId == rhs.destinationId))
      return false;
    if (__isset.apiId != rhs.__isset.apiId)
      return false;
    else if (__isset.apiId && !(apiId == rhs.apiId))
      return false;
    if (__isset.exceptionInfo != rhs.__isset.exceptionInfo)
      return false;
    else if (__isset.exceptionInfo && !(exceptionInfo == rhs.exceptionInfo))
      return false;
    if (__isset.asyncId != rhs.__isset.asyncId)
      return false;
    else if (__isset.asyncId && !(asyncId == rhs.asyncId))
      return false;
    if (__isset.nextAsyncId != rhs.__isset.nextAsyncId)
      return false;
    else if (__isset.nextAsyncId && !(nextAsyncId == rhs.nextAsyncId))
      return false;
    if (__isset.asyncSequence != rhs.__isset.asyncSequence)
      return false;
    else if (__isset.asyncSequence && !(asyncSequence == rhs.asyncSequence))
      return false;
    return true;
  }
  bool operator != (const TSpanEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TSpanEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TSpanEvent &a, TSpanEvent &b);

inline std::ostream& operator<<(std::ostream& out, const TSpanEvent& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TSpan__isset {
  _TSpan__isset() : agentId(false), applicationName(false), agentStartTime(false), transactionId(false), spanId(false), parentSpanId(true), startTime(false), elapsed(true), rpc(false), serviceType(false), endPoint(false), remoteAddr(false), annotations(false), flag(true), err(false), spanEventList(false), parentApplicationName(false), parentApplicationType(false), acceptorHost(false), apiId(false), exceptionInfo(false), applicationServiceType(false), loggingTransactionInfo(false) {}
  bool agentId :1;
  bool applicationName :1;
  bool agentStartTime :1;
  bool transactionId :1;
  bool spanId :1;
  bool parentSpanId :1;
  bool startTime :1;
  bool elapsed :1;
  bool rpc :1;
  bool serviceType :1;
  bool endPoint :1;
  bool remoteAddr :1;
  bool annotations :1;
  bool flag :1;
  bool err :1;
  bool spanEventList :1;
  bool parentApplicationName :1;
  bool parentApplicationType :1;
  bool acceptorHost :1;
  bool apiId :1;
  bool exceptionInfo :1;
  bool applicationServiceType :1;
  bool loggingTransactionInfo :1;
} _TSpan__isset;

class TSpan : public virtual ::apache::thrift::TBase {
 public:

  TSpan(const TSpan&);
  TSpan& operator=(const TSpan&);
  TSpan() : agentId(), applicationName(), agentStartTime(0), transactionId(), spanId(0), parentSpanId(-1LL), startTime(0), elapsed(0), rpc(), serviceType(0), endPoint(), remoteAddr(), flag(0), err(0), parentApplicationName(), parentApplicationType(0), acceptorHost(), apiId(0), applicationServiceType(0), loggingTransactionInfo(0) {
  }

  virtual ~TSpan() throw();
  std::string agentId;
  std::string applicationName;
  int64_t agentStartTime;
  std::string transactionId;
  int64_t spanId;
  int64_t parentSpanId;
  int64_t startTime;
  int32_t elapsed;
  std::string rpc;
  int16_t serviceType;
  std::string endPoint;
  std::string remoteAddr;
  std::vector<TAnnotation>  annotations;
  int16_t flag;
  int32_t err;
  std::vector<TSpanEvent>  spanEventList;
  std::string parentApplicationName;
  int16_t parentApplicationType;
  std::string acceptorHost;
  int32_t apiId;
  TIntStringValue exceptionInfo;
  int16_t applicationServiceType;
  int8_t loggingTransactionInfo;

  _TSpan__isset __isset;

  void __set_agentId(const std::string& val);

  void __set_applicationName(const std::string& val);

  void __set_agentStartTime(const int64_t val);

  void __set_transactionId(const std::string& val);

  void __set_spanId(const int64_t val);

  void __set_parentSpanId(const int64_t val);

  void __set_startTime(const int64_t val);

  void __set_elapsed(const int32_t val);

  void __set_rpc(const std::string& val);

  void __set_serviceType(const int16_t val);

  void __set_endPoint(const std::string& val);

  void __set_remoteAddr(const std::string& val);

  void __set_annotations(const std::vector<TAnnotation> & val);

  void __set_flag(const int16_t val);

  void __set_err(const int32_t val);

  void __set_spanEventList(const std::vector<TSpanEvent> & val);

  void __set_parentApplicationName(const std::string& val);

  void __set_parentApplicationType(const int16_t val);

  void __set_acceptorHost(const std::string& val);

  void __set_apiId(const int32_t val);

  void __set_exceptionInfo(const TIntStringValue& val);

  void __set_applicationServiceType(const int16_t val);

  void __set_loggingTransactionInfo(const int8_t val);

  bool operator == (const TSpan & rhs) const
  {
    if (!(agentId == rhs.agentId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    if (!(agentStartTime == rhs.agentStartTime))
      return false;
    if (!(transactionId == rhs.transactionId))
      return false;
    if (!(spanId == rhs.spanId))
      return false;
    if (__isset.parentSpanId != rhs.__isset.parentSpanId)
      return false;
    else if (__isset.parentSpanId && !(parentSpanId == rhs.parentSpanId))
      return false;
    if (!(startTime == rhs.startTime))
      return false;
    if (__isset.elapsed != rhs.__isset.elapsed)
      return false;
    else if (__isset.elapsed && !(elapsed == rhs.elapsed))
      return false;
    if (__isset.rpc != rhs.__isset.rpc)
      return false;
    else if (__isset.rpc && !(rpc == rhs.rpc))
      return false;
    if (!(serviceType == rhs.serviceType))
      return false;
    if (__isset.endPoint != rhs.__isset.endPoint)
      return false;
    else if (__isset.endPoint && !(endPoint == rhs.endPoint))
      return false;
    if (__isset.remoteAddr != rhs.__isset.remoteAddr)
      return false;
    else if (__isset.remoteAddr && !(remoteAddr == rhs.remoteAddr))
      return false;
    if (__isset.annotations != rhs.__isset.annotations)
      return false;
    else if (__isset.annotations && !(annotations == rhs.annotations))
      return false;
    if (__isset.flag != rhs.__isset.flag)
      return false;
    else if (__isset.flag && !(flag == rhs.flag))
      return false;
    if (__isset.err != rhs.__isset.err)
      return false;
    else if (__isset.err && !(err == rhs.err))
      return false;
    if (__isset.spanEventList != rhs.__isset.spanEventList)
      return false;
    else if (__isset.spanEventList && !(spanEventList == rhs.spanEventList))
      return false;
    if (__isset.parentApplicationName != rhs.__isset.parentApplicationName)
      return false;
    else if (__isset.parentApplicationName && !(parentApplicationName == rhs.parentApplicationName))
      return false;
    if (__isset.parentApplicationType != rhs.__isset.parentApplicationType)
      return false;
    else if (__isset.parentApplicationType && !(parentApplicationType == rhs.parentApplicationType))
      return false;
    if (__isset.acceptorHost != rhs.__isset.acceptorHost)
      return false;
    else if (__isset.acceptorHost && !(acceptorHost == rhs.acceptorHost))
      return false;
    if (__isset.apiId != rhs.__isset.apiId)
      return false;
    else if (__isset.apiId && !(apiId == rhs.apiId))
      return false;
    if (__isset.exceptionInfo != rhs.__isset.exceptionInfo)
      return false;
    else if (__isset.exceptionInfo && !(exceptionInfo == rhs.exceptionInfo))
      return false;
    if (__isset.applicationServiceType != rhs.__isset.applicationServiceType)
      return false;
    else if (__isset.applicationServiceType && !(applicationServiceType == rhs.applicationServiceType))
      return false;
    if (__isset.loggingTransactionInfo != rhs.__isset.loggingTransactionInfo)
      return false;
    else if (__isset.loggingTransactionInfo && !(loggingTransactionInfo == rhs.loggingTransactionInfo))
      return false;
    return true;
  }
  bool operator != (const TSpan &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TSpan & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TSpan &a, TSpan &b);

inline std::ostream& operator<<(std::ostream& out, const TSpan& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TSpanChunk__isset {
  _TSpanChunk__isset() : agentId(false), applicationName(false), agentStartTime(false), serviceType(false), transactionId(false), spanId(false), endPoint(false), spanEventList(false), applicationServiceType(false) {}
  bool agentId :1;
  bool applicationName :1;
  bool agentStartTime :1;
  bool serviceType :1;
  bool transactionId :1;
  bool spanId :1;
  bool endPoint :1;
  bool spanEventList :1;
  bool applicationServiceType :1;
} _TSpanChunk__isset;

class TSpanChunk : public virtual ::apache::thrift::TBase {
 public:

  TSpanChunk(const TSpanChunk&);
  TSpanChunk& operator=(const TSpanChunk&);
  TSpanChunk() : agentId(), applicationName(), agentStartTime(0), serviceType(0), transactionId(), spanId(0), endPoint(), applicationServiceType(0) {
  }

  virtual ~TSpanChunk() throw();
  std::string agentId;
  std::string applicationName;
  int64_t agentStartTime;
  int16_t serviceType;
  std::string transactionId;
  int64_t spanId;
  std::string endPoint;
  std::vector<TSpanEvent>  spanEventList;
  int16_t applicationServiceType;

  _TSpanChunk__isset __isset;

  void __set_agentId(const std::string& val);

  void __set_applicationName(const std::string& val);

  void __set_agentStartTime(const int64_t val);

  void __set_serviceType(const int16_t val);

  void __set_transactionId(const std::string& val);

  void __set_spanId(const int64_t val);

  void __set_endPoint(const std::string& val);

  void __set_spanEventList(const std::vector<TSpanEvent> & val);

  void __set_applicationServiceType(const int16_t val);

  bool operator == (const TSpanChunk & rhs) const
  {
    if (!(agentId == rhs.agentId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    if (!(agentStartTime == rhs.agentStartTime))
      return false;
    if (!(serviceType == rhs.serviceType))
      return false;
    if (!(transactionId == rhs.transactionId))
      return false;
    if (!(spanId == rhs.spanId))
      return false;
    if (__isset.endPoint != rhs.__isset.endPoint)
      return false;
    else if (__isset.endPoint && !(endPoint == rhs.endPoint))
      return false;
    if (!(spanEventList == rhs.spanEventList))
      return false;
    if (__isset.applicationServiceType != rhs.__isset.applicationServiceType)
      return false;
    else if (__isset.applicationServiceType && !(applicationServiceType == rhs.applicationServiceType))
      return false;
    return true;
  }
  bool operator != (const TSpanChunk &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TSpanChunk & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TSpanChunk &a, TSpanChunk &b);

inline std::ostream& operator<<(std::ostream& out, const TSpanChunk& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TStringMetaData__isset {
  _TStringMetaData__isset() : agentId(false), agentStartTime(false), stringId(false), stringValue(false) {}
  bool agentId :1;
  bool agentStartTime :1;
  bool stringId :1;
  bool stringValue :1;
} _TStringMetaData__isset;

class TStringMetaData : public virtual ::apache::thrift::TBase {
 public:

  TStringMetaData(const TStringMetaData&);
  TStringMetaData& operator=(const TStringMetaData&);
  TStringMetaData() : agentId(), agentStartTime(0), stringId(0), stringValue() {
  }

  virtual ~TStringMetaData() throw();
  std::string agentId;
  int64_t agentStartTime;
  int32_t stringId;
  std::string stringValue;

  _TStringMetaData__isset __isset;

  void __set_agentId(const std::string& val);

  void __set_agentStartTime(const int64_t val);

  void __set_stringId(const int32_t val);

  void __set_stringValue(const std::string& val);

  bool operator == (const TStringMetaData & rhs) const
  {
    if (!(agentId == rhs.agentId))
      return false;
    if (!(agentStartTime == rhs.agentStartTime))
      return false;
    if (!(stringId == rhs.stringId))
      return false;
    if (!(stringValue == rhs.stringValue))
      return false;
    return true;
  }
  bool operator != (const TStringMetaData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TStringMetaData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TStringMetaData &a, TStringMetaData &b);

inline std::ostream& operator<<(std::ostream& out, const TStringMetaData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TSqlMetaData__isset {
  _TSqlMetaData__isset() : agentId(false), agentStartTime(false), sqlId(false), sql(false) {}
  bool agentId :1;
  bool agentStartTime :1;
  bool sqlId :1;
  bool sql :1;
} _TSqlMetaData__isset;

class TSqlMetaData : public virtual ::apache::thrift::TBase {
 public:

  TSqlMetaData(const TSqlMetaData&);
  TSqlMetaData& operator=(const TSqlMetaData&);
  TSqlMetaData() : agentId(), agentStartTime(0), sqlId(0), sql() {
  }

  virtual ~TSqlMetaData() throw();
  std::string agentId;
  int64_t agentStartTime;
  int32_t sqlId;
  std::string sql;

  _TSqlMetaData__isset __isset;

  void __set_agentId(const std::string& val);

  void __set_agentStartTime(const int64_t val);

  void __set_sqlId(const int32_t val);

  void __set_sql(const std::string& val);

  bool operator == (const TSqlMetaData & rhs) const
  {
    if (!(agentId == rhs.agentId))
      return false;
    if (!(agentStartTime == rhs.agentStartTime))
      return false;
    if (!(sqlId == rhs.sqlId))
      return false;
    if (!(sql == rhs.sql))
      return false;
    return true;
  }
  bool operator != (const TSqlMetaData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TSqlMetaData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TSqlMetaData &a, TSqlMetaData &b);

inline std::ostream& operator<<(std::ostream& out, const TSqlMetaData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TApiMetaData__isset {
  _TApiMetaData__isset() : agentId(false), agentStartTime(false), apiId(false), apiInfo(false), line(false), type(false) {}
  bool agentId :1;
  bool agentStartTime :1;
  bool apiId :1;
  bool apiInfo :1;
  bool line :1;
  bool type :1;
} _TApiMetaData__isset;

class TApiMetaData : public virtual ::apache::thrift::TBase {
 public:

  TApiMetaData(const TApiMetaData&);
  TApiMetaData& operator=(const TApiMetaData&);
  TApiMetaData() : agentId(), agentStartTime(0), apiId(0), apiInfo(), line(0), type(0) {
  }

  virtual ~TApiMetaData() throw();
  std::string agentId;
  int64_t agentStartTime;
  int32_t apiId;
  std::string apiInfo;
  int32_t line;
  int32_t type;

  _TApiMetaData__isset __isset;

  void __set_agentId(const std::string& val);

  void __set_agentStartTime(const int64_t val);

  void __set_apiId(const int32_t val);

  void __set_apiInfo(const std::string& val);

  void __set_line(const int32_t val);

  void __set_type(const int32_t val);

  bool operator == (const TApiMetaData & rhs) const
  {
    if (!(agentId == rhs.agentId))
      return false;
    if (!(agentStartTime == rhs.agentStartTime))
      return false;
    if (!(apiId == rhs.apiId))
      return false;
    if (!(apiInfo == rhs.apiInfo))
      return false;
    if (__isset.line != rhs.__isset.line)
      return false;
    else if (__isset.line && !(line == rhs.line))
      return false;
    if (__isset.type != rhs.__isset.type)
      return false;
    else if (__isset.type && !(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const TApiMetaData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TApiMetaData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TApiMetaData &a, TApiMetaData &b);

inline std::ostream& operator<<(std::ostream& out, const TApiMetaData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TResult__isset {
  _TResult__isset() : success(false), message(false) {}
  bool success :1;
  bool message :1;
} _TResult__isset;

class TResult : public virtual ::apache::thrift::TBase {
 public:

  TResult(const TResult&);
  TResult& operator=(const TResult&);
  TResult() : success(0), message() {
  }

  virtual ~TResult() throw();
  bool success;
  std::string message;

  _TResult__isset __isset;

  void __set_success(const bool val);

  void __set_message(const std::string& val);

  bool operator == (const TResult & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const TResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TResult &a, TResult &b);

inline std::ostream& operator<<(std::ostream& out, const TResult& obj)
{
  obj.printTo(out);
  return out;
}



#endif
