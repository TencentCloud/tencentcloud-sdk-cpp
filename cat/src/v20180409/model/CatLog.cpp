/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cat/v20180409/model/CatLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CatLog::CatLog() :
    m_timeHasBeenSet(false),
    m_catTypeNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_reqPkgSizeHasBeenSet(false),
    m_rspPkgSizeHasBeenSet(false),
    m_reqMsgHasBeenSet(false),
    m_respMsgHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_ispNameHasBeenSet(false),
    m_parseTimeHasBeenSet(false),
    m_connectTimeHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_waitTimeHasBeenSet(false),
    m_receiveTimeHasBeenSet(false)
{
}

CoreInternalOutcome CatLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("CatTypeName") && !value["CatTypeName"].IsNull())
    {
        if (!value["CatTypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.CatTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catTypeName = string(value["CatTypeName"].GetString());
        m_catTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("ServerIp") && !value["ServerIp"].IsNull())
    {
        if (!value["ServerIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.ServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverIp = string(value["ServerIp"].GetString());
        m_serverIpHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.TotalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetUint64();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.ResultType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = value["ResultType"].GetUint64();
        m_resultTypeHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.ResultCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetUint64();
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ReqPkgSize") && !value["ReqPkgSize"].IsNull())
    {
        if (!value["ReqPkgSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.ReqPkgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqPkgSize = value["ReqPkgSize"].GetUint64();
        m_reqPkgSizeHasBeenSet = true;
    }

    if (value.HasMember("RspPkgSize") && !value["RspPkgSize"].IsNull())
    {
        if (!value["RspPkgSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.RspPkgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rspPkgSize = value["RspPkgSize"].GetUint64();
        m_rspPkgSizeHasBeenSet = true;
    }

    if (value.HasMember("ReqMsg") && !value["ReqMsg"].IsNull())
    {
        if (!value["ReqMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.ReqMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqMsg = string(value["ReqMsg"].GetString());
        m_reqMsgHasBeenSet = true;
    }

    if (value.HasMember("RespMsg") && !value["RespMsg"].IsNull())
    {
        if (!value["RespMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.RespMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_respMsg = string(value["RespMsg"].GetString());
        m_respMsgHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }

    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatLog.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("ParseTime") && !value["ParseTime"].IsNull())
    {
        if (!value["ParseTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.ParseTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parseTime = value["ParseTime"].GetUint64();
        m_parseTimeHasBeenSet = true;
    }

    if (value.HasMember("ConnectTime") && !value["ConnectTime"].IsNull())
    {
        if (!value["ConnectTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.ConnectTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTime = value["ConnectTime"].GetUint64();
        m_connectTimeHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.SendTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = value["SendTime"].GetUint64();
        m_sendTimeHasBeenSet = true;
    }

    if (value.HasMember("WaitTime") && !value["WaitTime"].IsNull())
    {
        if (!value["WaitTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.WaitTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waitTime = value["WaitTime"].GetUint64();
        m_waitTimeHasBeenSet = true;
    }

    if (value.HasMember("ReceiveTime") && !value["ReceiveTime"].IsNull())
    {
        if (!value["ReceiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatLog.ReceiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiveTime = value["ReceiveTime"].GetUint64();
        m_receiveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CatLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_catTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultType, allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_reqPkgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqPkgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqPkgSize, allocator);
    }

    if (m_rspPkgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspPkgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rspPkgSize, allocator);
    }

    if (m_reqMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_respMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_respMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_parseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parseTime, allocator);
    }

    if (m_connectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTime, allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendTime, allocator);
    }

    if (m_waitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitTime, allocator);
    }

    if (m_receiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiveTime, allocator);
    }

}


string CatLog::GetTime() const
{
    return m_time;
}

void CatLog::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CatLog::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string CatLog::GetCatTypeName() const
{
    return m_catTypeName;
}

void CatLog::SetCatTypeName(const string& _catTypeName)
{
    m_catTypeName = _catTypeName;
    m_catTypeNameHasBeenSet = true;
}

bool CatLog::CatTypeNameHasBeenSet() const
{
    return m_catTypeNameHasBeenSet;
}

uint64_t CatLog::GetTaskId() const
{
    return m_taskId;
}

void CatLog::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CatLog::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CatLog::GetCity() const
{
    return m_city;
}

void CatLog::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool CatLog::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string CatLog::GetIsp() const
{
    return m_isp;
}

void CatLog::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool CatLog::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string CatLog::GetServerIp() const
{
    return m_serverIp;
}

void CatLog::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool CatLog::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

string CatLog::GetDomainName() const
{
    return m_domainName;
}

void CatLog::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CatLog::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

uint64_t CatLog::GetTotalTime() const
{
    return m_totalTime;
}

void CatLog::SetTotalTime(const uint64_t& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool CatLog::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

uint64_t CatLog::GetResultType() const
{
    return m_resultType;
}

void CatLog::SetResultType(const uint64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool CatLog::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

uint64_t CatLog::GetResultCode() const
{
    return m_resultCode;
}

void CatLog::SetResultCode(const uint64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool CatLog::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

uint64_t CatLog::GetReqPkgSize() const
{
    return m_reqPkgSize;
}

void CatLog::SetReqPkgSize(const uint64_t& _reqPkgSize)
{
    m_reqPkgSize = _reqPkgSize;
    m_reqPkgSizeHasBeenSet = true;
}

bool CatLog::ReqPkgSizeHasBeenSet() const
{
    return m_reqPkgSizeHasBeenSet;
}

uint64_t CatLog::GetRspPkgSize() const
{
    return m_rspPkgSize;
}

void CatLog::SetRspPkgSize(const uint64_t& _rspPkgSize)
{
    m_rspPkgSize = _rspPkgSize;
    m_rspPkgSizeHasBeenSet = true;
}

bool CatLog::RspPkgSizeHasBeenSet() const
{
    return m_rspPkgSizeHasBeenSet;
}

string CatLog::GetReqMsg() const
{
    return m_reqMsg;
}

void CatLog::SetReqMsg(const string& _reqMsg)
{
    m_reqMsg = _reqMsg;
    m_reqMsgHasBeenSet = true;
}

bool CatLog::ReqMsgHasBeenSet() const
{
    return m_reqMsgHasBeenSet;
}

string CatLog::GetRespMsg() const
{
    return m_respMsg;
}

void CatLog::SetRespMsg(const string& _respMsg)
{
    m_respMsg = _respMsg;
    m_respMsgHasBeenSet = true;
}

bool CatLog::RespMsgHasBeenSet() const
{
    return m_respMsgHasBeenSet;
}

string CatLog::GetClientIp() const
{
    return m_clientIp;
}

void CatLog::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool CatLog::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string CatLog::GetCityName() const
{
    return m_cityName;
}

void CatLog::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool CatLog::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

string CatLog::GetIspName() const
{
    return m_ispName;
}

void CatLog::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool CatLog::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

uint64_t CatLog::GetParseTime() const
{
    return m_parseTime;
}

void CatLog::SetParseTime(const uint64_t& _parseTime)
{
    m_parseTime = _parseTime;
    m_parseTimeHasBeenSet = true;
}

bool CatLog::ParseTimeHasBeenSet() const
{
    return m_parseTimeHasBeenSet;
}

uint64_t CatLog::GetConnectTime() const
{
    return m_connectTime;
}

void CatLog::SetConnectTime(const uint64_t& _connectTime)
{
    m_connectTime = _connectTime;
    m_connectTimeHasBeenSet = true;
}

bool CatLog::ConnectTimeHasBeenSet() const
{
    return m_connectTimeHasBeenSet;
}

uint64_t CatLog::GetSendTime() const
{
    return m_sendTime;
}

void CatLog::SetSendTime(const uint64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool CatLog::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

uint64_t CatLog::GetWaitTime() const
{
    return m_waitTime;
}

void CatLog::SetWaitTime(const uint64_t& _waitTime)
{
    m_waitTime = _waitTime;
    m_waitTimeHasBeenSet = true;
}

bool CatLog::WaitTimeHasBeenSet() const
{
    return m_waitTimeHasBeenSet;
}

uint64_t CatLog::GetReceiveTime() const
{
    return m_receiveTime;
}

void CatLog::SetReceiveTime(const uint64_t& _receiveTime)
{
    m_receiveTime = _receiveTime;
    m_receiveTimeHasBeenSet = true;
}

bool CatLog::ReceiveTimeHasBeenSet() const
{
    return m_receiveTimeHasBeenSet;
}

