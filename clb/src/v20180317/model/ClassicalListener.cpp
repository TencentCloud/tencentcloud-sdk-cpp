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

#include <tencentcloud/clb/v20180317/model/ClassicalListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ClassicalListener::ClassicalListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_instancePortHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sessionExpireHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_httpHashHasBeenSet(false),
    m_httpCodeHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_sSLModeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certCaIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ClassicalListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerPort") && !value["ListenerPort"].IsNull())
    {
        if (!value["ListenerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.ListenerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = value["ListenerPort"].GetInt64();
        m_listenerPortHasBeenSet = true;
    }

    if (value.HasMember("InstancePort") && !value["InstancePort"].IsNull())
    {
        if (!value["InstancePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.InstancePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instancePort = value["InstancePort"].GetInt64();
        m_instancePortHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SessionExpire") && !value["SessionExpire"].IsNull())
    {
        if (!value["SessionExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.SessionExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpire = value["SessionExpire"].GetInt64();
        m_sessionExpireHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("HttpHash") && !value["HttpHash"].IsNull())
    {
        if (!value["HttpHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.HttpHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpHash = string(value["HttpHash"].GetString());
        m_httpHashHasBeenSet = true;
    }

    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.HttpCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = value["HttpCode"].GetInt64();
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckPath") && !value["HttpCheckPath"].IsNull())
    {
        if (!value["HttpCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.HttpCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckPath = string(value["HttpCheckPath"].GetString());
        m_httpCheckPathHasBeenSet = true;
    }

    if (value.HasMember("SSLMode") && !value["SSLMode"].IsNull())
    {
        if (!value["SSLMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.SSLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLMode = string(value["SSLMode"].GetString());
        m_sSLModeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertCaId") && !value["CertCaId"].IsNull())
    {
        if (!value["CertCaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.CertCaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaId = string(value["CertCaId"].GetString());
        m_certCaIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalListener.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassicalListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerPort, allocator);
    }

    if (m_instancePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instancePort, allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpire, allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_httpHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpHash.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCode, allocator);
    }

    if (m_httpCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCaId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string ClassicalListener::GetListenerId() const
{
    return m_listenerId;
}

void ClassicalListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ClassicalListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

int64_t ClassicalListener::GetListenerPort() const
{
    return m_listenerPort;
}

void ClassicalListener::SetListenerPort(const int64_t& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool ClassicalListener::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

int64_t ClassicalListener::GetInstancePort() const
{
    return m_instancePort;
}

void ClassicalListener::SetInstancePort(const int64_t& _instancePort)
{
    m_instancePort = _instancePort;
    m_instancePortHasBeenSet = true;
}

bool ClassicalListener::InstancePortHasBeenSet() const
{
    return m_instancePortHasBeenSet;
}

string ClassicalListener::GetListenerName() const
{
    return m_listenerName;
}

void ClassicalListener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ClassicalListener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string ClassicalListener::GetProtocol() const
{
    return m_protocol;
}

void ClassicalListener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ClassicalListener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t ClassicalListener::GetSessionExpire() const
{
    return m_sessionExpire;
}

void ClassicalListener::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool ClassicalListener::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t ClassicalListener::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void ClassicalListener::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool ClassicalListener::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t ClassicalListener::GetTimeOut() const
{
    return m_timeOut;
}

void ClassicalListener::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool ClassicalListener::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t ClassicalListener::GetIntervalTime() const
{
    return m_intervalTime;
}

void ClassicalListener::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool ClassicalListener::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t ClassicalListener::GetHealthNum() const
{
    return m_healthNum;
}

void ClassicalListener::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool ClassicalListener::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t ClassicalListener::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void ClassicalListener::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool ClassicalListener::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

string ClassicalListener::GetHttpHash() const
{
    return m_httpHash;
}

void ClassicalListener::SetHttpHash(const string& _httpHash)
{
    m_httpHash = _httpHash;
    m_httpHashHasBeenSet = true;
}

bool ClassicalListener::HttpHashHasBeenSet() const
{
    return m_httpHashHasBeenSet;
}

int64_t ClassicalListener::GetHttpCode() const
{
    return m_httpCode;
}

void ClassicalListener::SetHttpCode(const int64_t& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool ClassicalListener::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

string ClassicalListener::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void ClassicalListener::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool ClassicalListener::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

string ClassicalListener::GetSSLMode() const
{
    return m_sSLMode;
}

void ClassicalListener::SetSSLMode(const string& _sSLMode)
{
    m_sSLMode = _sSLMode;
    m_sSLModeHasBeenSet = true;
}

bool ClassicalListener::SSLModeHasBeenSet() const
{
    return m_sSLModeHasBeenSet;
}

string ClassicalListener::GetCertId() const
{
    return m_certId;
}

void ClassicalListener::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ClassicalListener::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string ClassicalListener::GetCertCaId() const
{
    return m_certCaId;
}

void ClassicalListener::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool ClassicalListener::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}

int64_t ClassicalListener::GetStatus() const
{
    return m_status;
}

void ClassicalListener::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClassicalListener::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

