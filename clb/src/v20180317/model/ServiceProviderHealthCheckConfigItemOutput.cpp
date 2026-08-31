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

#include <tencentcloud/clb/v20180317/model/ServiceProviderHealthCheckConfigItemOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ServiceProviderHealthCheckConfigItemOutput::ServiceProviderHealthCheckConfigItemOutput() :
    m_healthCheckEnabledHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_healthCheckUnhealthyThresholdHasBeenSet(false),
    m_healthCheckMaxTokensHasBeenSet(false),
    m_healthCheckProtocolHasBeenSet(false)
{
}

CoreInternalOutcome ServiceProviderHealthCheckConfigItemOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthCheckEnabled") && !value["HealthCheckEnabled"].IsNull())
    {
        if (!value["HealthCheckEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderHealthCheckConfigItemOutput.HealthCheckEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckEnabled = value["HealthCheckEnabled"].GetBool();
        m_healthCheckEnabledHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckInterval") && !value["HealthCheckInterval"].IsNull())
    {
        if (!value["HealthCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderHealthCheckConfigItemOutput.HealthCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckInterval = value["HealthCheckInterval"].GetUint64();
        m_healthCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckUnhealthyThreshold") && !value["HealthCheckUnhealthyThreshold"].IsNull())
    {
        if (!value["HealthCheckUnhealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderHealthCheckConfigItemOutput.HealthCheckUnhealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckUnhealthyThreshold = value["HealthCheckUnhealthyThreshold"].GetUint64();
        m_healthCheckUnhealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckMaxTokens") && !value["HealthCheckMaxTokens"].IsNull())
    {
        if (!value["HealthCheckMaxTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderHealthCheckConfigItemOutput.HealthCheckMaxTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckMaxTokens = value["HealthCheckMaxTokens"].GetUint64();
        m_healthCheckMaxTokensHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckProtocol") && !value["HealthCheckProtocol"].IsNull())
    {
        if (!value["HealthCheckProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderHealthCheckConfigItemOutput.HealthCheckProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckProtocol = string(value["HealthCheckProtocol"].GetString());
        m_healthCheckProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceProviderHealthCheckConfigItemOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthCheckEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckEnabled, allocator);
    }

    if (m_healthCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckInterval, allocator);
    }

    if (m_healthCheckUnhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckUnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckUnhealthyThreshold, allocator);
    }

    if (m_healthCheckMaxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckMaxTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckMaxTokens, allocator);
    }

    if (m_healthCheckProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckProtocol.c_str(), allocator).Move(), allocator);
    }

}


bool ServiceProviderHealthCheckConfigItemOutput::GetHealthCheckEnabled() const
{
    return m_healthCheckEnabled;
}

void ServiceProviderHealthCheckConfigItemOutput::SetHealthCheckEnabled(const bool& _healthCheckEnabled)
{
    m_healthCheckEnabled = _healthCheckEnabled;
    m_healthCheckEnabledHasBeenSet = true;
}

bool ServiceProviderHealthCheckConfigItemOutput::HealthCheckEnabledHasBeenSet() const
{
    return m_healthCheckEnabledHasBeenSet;
}

uint64_t ServiceProviderHealthCheckConfigItemOutput::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void ServiceProviderHealthCheckConfigItemOutput::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool ServiceProviderHealthCheckConfigItemOutput::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

uint64_t ServiceProviderHealthCheckConfigItemOutput::GetHealthCheckUnhealthyThreshold() const
{
    return m_healthCheckUnhealthyThreshold;
}

void ServiceProviderHealthCheckConfigItemOutput::SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold)
{
    m_healthCheckUnhealthyThreshold = _healthCheckUnhealthyThreshold;
    m_healthCheckUnhealthyThresholdHasBeenSet = true;
}

bool ServiceProviderHealthCheckConfigItemOutput::HealthCheckUnhealthyThresholdHasBeenSet() const
{
    return m_healthCheckUnhealthyThresholdHasBeenSet;
}

uint64_t ServiceProviderHealthCheckConfigItemOutput::GetHealthCheckMaxTokens() const
{
    return m_healthCheckMaxTokens;
}

void ServiceProviderHealthCheckConfigItemOutput::SetHealthCheckMaxTokens(const uint64_t& _healthCheckMaxTokens)
{
    m_healthCheckMaxTokens = _healthCheckMaxTokens;
    m_healthCheckMaxTokensHasBeenSet = true;
}

bool ServiceProviderHealthCheckConfigItemOutput::HealthCheckMaxTokensHasBeenSet() const
{
    return m_healthCheckMaxTokensHasBeenSet;
}

string ServiceProviderHealthCheckConfigItemOutput::GetHealthCheckProtocol() const
{
    return m_healthCheckProtocol;
}

void ServiceProviderHealthCheckConfigItemOutput::SetHealthCheckProtocol(const string& _healthCheckProtocol)
{
    m_healthCheckProtocol = _healthCheckProtocol;
    m_healthCheckProtocolHasBeenSet = true;
}

bool ServiceProviderHealthCheckConfigItemOutput::HealthCheckProtocolHasBeenSet() const
{
    return m_healthCheckProtocolHasBeenSet;
}

