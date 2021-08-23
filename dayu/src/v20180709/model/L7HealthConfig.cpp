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

#include <tencentcloud/dayu/v20180709/model/L7HealthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

L7HealthConfig::L7HealthConfig() :
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_kickNumHasBeenSet(false),
    m_aliveNumHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome L7HealthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("KickNum") && !value["KickNum"].IsNull())
    {
        if (!value["KickNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.KickNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kickNum = value["KickNum"].GetUint64();
        m_kickNumHasBeenSet = true;
    }

    if (value.HasMember("AliveNum") && !value["AliveNum"].IsNull())
    {
        if (!value["AliveNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.AliveNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveNum = value["AliveNum"].GetUint64();
        m_aliveNumHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.StatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetUint64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7HealthConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7HealthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_kickNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KickNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kickNum, allocator);
    }

    if (m_aliveNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveNum, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string L7HealthConfig::GetProtocol() const
{
    return m_protocol;
}

void L7HealthConfig::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L7HealthConfig::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string L7HealthConfig::GetDomain() const
{
    return m_domain;
}

void L7HealthConfig::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool L7HealthConfig::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t L7HealthConfig::GetEnable() const
{
    return m_enable;
}

void L7HealthConfig::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool L7HealthConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t L7HealthConfig::GetInterval() const
{
    return m_interval;
}

void L7HealthConfig::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool L7HealthConfig::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t L7HealthConfig::GetKickNum() const
{
    return m_kickNum;
}

void L7HealthConfig::SetKickNum(const uint64_t& _kickNum)
{
    m_kickNum = _kickNum;
    m_kickNumHasBeenSet = true;
}

bool L7HealthConfig::KickNumHasBeenSet() const
{
    return m_kickNumHasBeenSet;
}

uint64_t L7HealthConfig::GetAliveNum() const
{
    return m_aliveNum;
}

void L7HealthConfig::SetAliveNum(const uint64_t& _aliveNum)
{
    m_aliveNum = _aliveNum;
    m_aliveNumHasBeenSet = true;
}

bool L7HealthConfig::AliveNumHasBeenSet() const
{
    return m_aliveNumHasBeenSet;
}

string L7HealthConfig::GetMethod() const
{
    return m_method;
}

void L7HealthConfig::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool L7HealthConfig::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t L7HealthConfig::GetStatusCode() const
{
    return m_statusCode;
}

void L7HealthConfig::SetStatusCode(const uint64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool L7HealthConfig::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string L7HealthConfig::GetUrl() const
{
    return m_url;
}

void L7HealthConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool L7HealthConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

