/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/HealthCheckConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

HealthCheckConfig::HealthCheckConfig() :
    m_healthCheckEnabledHasBeenSet(false),
    m_healthCheckCodesHasBeenSet(false),
    m_healthCheckHealthyThresholdHasBeenSet(false),
    m_healthCheckHostHasBeenSet(false),
    m_healthCheckHttpVersionHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_healthCheckMethodHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckTimeoutHasBeenSet(false),
    m_healthCheckUnhealthyThresholdHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthCheckEnabled") && !value["HealthCheckEnabled"].IsNull())
    {
        if (!value["HealthCheckEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckEnabled = value["HealthCheckEnabled"].GetBool();
        m_healthCheckEnabledHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckCodes") && !value["HealthCheckCodes"].IsNull())
    {
        if (!value["HealthCheckCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["HealthCheckCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_healthCheckCodes.push_back((*itr).GetString());
        }
        m_healthCheckCodesHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckHealthyThreshold") && !value["HealthCheckHealthyThreshold"].IsNull())
    {
        if (!value["HealthCheckHealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckHealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckHealthyThreshold = value["HealthCheckHealthyThreshold"].GetUint64();
        m_healthCheckHealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckHost") && !value["HealthCheckHost"].IsNull())
    {
        if (!value["HealthCheckHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckHost = string(value["HealthCheckHost"].GetString());
        m_healthCheckHostHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckHttpVersion") && !value["HealthCheckHttpVersion"].IsNull())
    {
        if (!value["HealthCheckHttpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckHttpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckHttpVersion = string(value["HealthCheckHttpVersion"].GetString());
        m_healthCheckHttpVersionHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckInterval") && !value["HealthCheckInterval"].IsNull())
    {
        if (!value["HealthCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckInterval = value["HealthCheckInterval"].GetUint64();
        m_healthCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckMethod") && !value["HealthCheckMethod"].IsNull())
    {
        if (!value["HealthCheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckMethod = string(value["HealthCheckMethod"].GetString());
        m_healthCheckMethodHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPath") && !value["HealthCheckPath"].IsNull())
    {
        if (!value["HealthCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPath = string(value["HealthCheckPath"].GetString());
        m_healthCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPort") && !value["HealthCheckPort"].IsNull())
    {
        if (!value["HealthCheckPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPort = value["HealthCheckPort"].GetUint64();
        m_healthCheckPortHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckProtocol") && !value["HealthCheckProtocol"].IsNull())
    {
        if (!value["HealthCheckProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckProtocol = string(value["HealthCheckProtocol"].GetString());
        m_healthCheckProtocolHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTimeout") && !value["HealthCheckTimeout"].IsNull())
    {
        if (!value["HealthCheckTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTimeout = value["HealthCheckTimeout"].GetUint64();
        m_healthCheckTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckUnhealthyThreshold") && !value["HealthCheckUnhealthyThreshold"].IsNull())
    {
        if (!value["HealthCheckUnhealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.HealthCheckUnhealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckUnhealthyThreshold = value["HealthCheckUnhealthyThreshold"].GetUint64();
        m_healthCheckUnhealthyThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthCheckEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckEnabled, allocator);
    }

    if (m_healthCheckCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthCheckCodes.begin(); itr != m_healthCheckCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthCheckHealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckHealthyThreshold, allocator);
    }

    if (m_healthCheckHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckHost.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHttpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHttpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckHttpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckInterval, allocator);
    }

    if (m_healthCheckMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckPort, allocator);
    }

    if (m_healthCheckProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckTimeout, allocator);
    }

    if (m_healthCheckUnhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckUnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckUnhealthyThreshold, allocator);
    }

}


bool HealthCheckConfig::GetHealthCheckEnabled() const
{
    return m_healthCheckEnabled;
}

void HealthCheckConfig::SetHealthCheckEnabled(const bool& _healthCheckEnabled)
{
    m_healthCheckEnabled = _healthCheckEnabled;
    m_healthCheckEnabledHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckEnabledHasBeenSet() const
{
    return m_healthCheckEnabledHasBeenSet;
}

vector<string> HealthCheckConfig::GetHealthCheckCodes() const
{
    return m_healthCheckCodes;
}

void HealthCheckConfig::SetHealthCheckCodes(const vector<string>& _healthCheckCodes)
{
    m_healthCheckCodes = _healthCheckCodes;
    m_healthCheckCodesHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckCodesHasBeenSet() const
{
    return m_healthCheckCodesHasBeenSet;
}

uint64_t HealthCheckConfig::GetHealthCheckHealthyThreshold() const
{
    return m_healthCheckHealthyThreshold;
}

void HealthCheckConfig::SetHealthCheckHealthyThreshold(const uint64_t& _healthCheckHealthyThreshold)
{
    m_healthCheckHealthyThreshold = _healthCheckHealthyThreshold;
    m_healthCheckHealthyThresholdHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckHealthyThresholdHasBeenSet() const
{
    return m_healthCheckHealthyThresholdHasBeenSet;
}

string HealthCheckConfig::GetHealthCheckHost() const
{
    return m_healthCheckHost;
}

void HealthCheckConfig::SetHealthCheckHost(const string& _healthCheckHost)
{
    m_healthCheckHost = _healthCheckHost;
    m_healthCheckHostHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckHostHasBeenSet() const
{
    return m_healthCheckHostHasBeenSet;
}

string HealthCheckConfig::GetHealthCheckHttpVersion() const
{
    return m_healthCheckHttpVersion;
}

void HealthCheckConfig::SetHealthCheckHttpVersion(const string& _healthCheckHttpVersion)
{
    m_healthCheckHttpVersion = _healthCheckHttpVersion;
    m_healthCheckHttpVersionHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckHttpVersionHasBeenSet() const
{
    return m_healthCheckHttpVersionHasBeenSet;
}

uint64_t HealthCheckConfig::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void HealthCheckConfig::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

string HealthCheckConfig::GetHealthCheckMethod() const
{
    return m_healthCheckMethod;
}

void HealthCheckConfig::SetHealthCheckMethod(const string& _healthCheckMethod)
{
    m_healthCheckMethod = _healthCheckMethod;
    m_healthCheckMethodHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckMethodHasBeenSet() const
{
    return m_healthCheckMethodHasBeenSet;
}

string HealthCheckConfig::GetHealthCheckPath() const
{
    return m_healthCheckPath;
}

void HealthCheckConfig::SetHealthCheckPath(const string& _healthCheckPath)
{
    m_healthCheckPath = _healthCheckPath;
    m_healthCheckPathHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckPathHasBeenSet() const
{
    return m_healthCheckPathHasBeenSet;
}

uint64_t HealthCheckConfig::GetHealthCheckPort() const
{
    return m_healthCheckPort;
}

void HealthCheckConfig::SetHealthCheckPort(const uint64_t& _healthCheckPort)
{
    m_healthCheckPort = _healthCheckPort;
    m_healthCheckPortHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckPortHasBeenSet() const
{
    return m_healthCheckPortHasBeenSet;
}

string HealthCheckConfig::GetHealthCheckProtocol() const
{
    return m_healthCheckProtocol;
}

void HealthCheckConfig::SetHealthCheckProtocol(const string& _healthCheckProtocol)
{
    m_healthCheckProtocol = _healthCheckProtocol;
    m_healthCheckProtocolHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckProtocolHasBeenSet() const
{
    return m_healthCheckProtocolHasBeenSet;
}

uint64_t HealthCheckConfig::GetHealthCheckTimeout() const
{
    return m_healthCheckTimeout;
}

void HealthCheckConfig::SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout)
{
    m_healthCheckTimeout = _healthCheckTimeout;
    m_healthCheckTimeoutHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckTimeoutHasBeenSet() const
{
    return m_healthCheckTimeoutHasBeenSet;
}

uint64_t HealthCheckConfig::GetHealthCheckUnhealthyThreshold() const
{
    return m_healthCheckUnhealthyThreshold;
}

void HealthCheckConfig::SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold)
{
    m_healthCheckUnhealthyThreshold = _healthCheckUnhealthyThreshold;
    m_healthCheckUnhealthyThresholdHasBeenSet = true;
}

bool HealthCheckConfig::HealthCheckUnhealthyThresholdHasBeenSet() const
{
    return m_healthCheckUnhealthyThresholdHasBeenSet;
}

