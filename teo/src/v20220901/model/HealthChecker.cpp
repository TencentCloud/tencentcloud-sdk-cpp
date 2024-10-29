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

#include <tencentcloud/teo/v20220901/model/HealthChecker.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HealthChecker::HealthChecker() :
    m_typeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_healthThresholdHasBeenSet(false),
    m_criticalThresholdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_expectedCodesHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_sendContextHasBeenSet(false),
    m_recvContextHasBeenSet(false)
{
}

CoreInternalOutcome HealthChecker::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthThreshold") && !value["HealthThreshold"].IsNull())
    {
        if (!value["HealthThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.HealthThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthThreshold = value["HealthThreshold"].GetUint64();
        m_healthThresholdHasBeenSet = true;
    }

    if (value.HasMember("CriticalThreshold") && !value["CriticalThreshold"].IsNull())
    {
        if (!value["CriticalThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.CriticalThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalThreshold = value["CriticalThreshold"].GetUint64();
        m_criticalThresholdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("ExpectedCodes") && !value["ExpectedCodes"].IsNull())
    {
        if (!value["ExpectedCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthChecker.ExpectedCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ExpectedCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_expectedCodes.push_back((*itr).GetString());
        }
        m_expectedCodesHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthChecker.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomizedHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("FollowRedirect") && !value["FollowRedirect"].IsNull())
    {
        if (!value["FollowRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.FollowRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followRedirect = string(value["FollowRedirect"].GetString());
        m_followRedirectHasBeenSet = true;
    }

    if (value.HasMember("SendContext") && !value["SendContext"].IsNull())
    {
        if (!value["SendContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.SendContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendContext = string(value["SendContext"].GetString());
        m_sendContextHasBeenSet = true;
    }

    if (value.HasMember("RecvContext") && !value["RecvContext"].IsNull())
    {
        if (!value["RecvContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthChecker.RecvContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recvContext = string(value["RecvContext"].GetString());
        m_recvContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthChecker::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_healthThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthThreshold, allocator);
    }

    if (m_criticalThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalThreshold, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_expectedCodes.begin(); itr != m_expectedCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_sendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_recvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recvContext.c_str(), allocator).Move(), allocator);
    }

}


string HealthChecker::GetType() const
{
    return m_type;
}

void HealthChecker::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HealthChecker::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t HealthChecker::GetPort() const
{
    return m_port;
}

void HealthChecker::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HealthChecker::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t HealthChecker::GetInterval() const
{
    return m_interval;
}

void HealthChecker::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool HealthChecker::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t HealthChecker::GetTimeout() const
{
    return m_timeout;
}

void HealthChecker::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool HealthChecker::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t HealthChecker::GetHealthThreshold() const
{
    return m_healthThreshold;
}

void HealthChecker::SetHealthThreshold(const uint64_t& _healthThreshold)
{
    m_healthThreshold = _healthThreshold;
    m_healthThresholdHasBeenSet = true;
}

bool HealthChecker::HealthThresholdHasBeenSet() const
{
    return m_healthThresholdHasBeenSet;
}

uint64_t HealthChecker::GetCriticalThreshold() const
{
    return m_criticalThreshold;
}

void HealthChecker::SetCriticalThreshold(const uint64_t& _criticalThreshold)
{
    m_criticalThreshold = _criticalThreshold;
    m_criticalThresholdHasBeenSet = true;
}

bool HealthChecker::CriticalThresholdHasBeenSet() const
{
    return m_criticalThresholdHasBeenSet;
}

string HealthChecker::GetPath() const
{
    return m_path;
}

void HealthChecker::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HealthChecker::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string HealthChecker::GetMethod() const
{
    return m_method;
}

void HealthChecker::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool HealthChecker::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<string> HealthChecker::GetExpectedCodes() const
{
    return m_expectedCodes;
}

void HealthChecker::SetExpectedCodes(const vector<string>& _expectedCodes)
{
    m_expectedCodes = _expectedCodes;
    m_expectedCodesHasBeenSet = true;
}

bool HealthChecker::ExpectedCodesHasBeenSet() const
{
    return m_expectedCodesHasBeenSet;
}

vector<CustomizedHeader> HealthChecker::GetHeaders() const
{
    return m_headers;
}

void HealthChecker::SetHeaders(const vector<CustomizedHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool HealthChecker::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string HealthChecker::GetFollowRedirect() const
{
    return m_followRedirect;
}

void HealthChecker::SetFollowRedirect(const string& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool HealthChecker::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

string HealthChecker::GetSendContext() const
{
    return m_sendContext;
}

void HealthChecker::SetSendContext(const string& _sendContext)
{
    m_sendContext = _sendContext;
    m_sendContextHasBeenSet = true;
}

bool HealthChecker::SendContextHasBeenSet() const
{
    return m_sendContextHasBeenSet;
}

string HealthChecker::GetRecvContext() const
{
    return m_recvContext;
}

void HealthChecker::SetRecvContext(const string& _recvContext)
{
    m_recvContext = _recvContext;
    m_recvContextHasBeenSet = true;
}

bool HealthChecker::RecvContextHasBeenSet() const
{
    return m_recvContextHasBeenSet;
}

