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

#include <tencentcloud/tse/v20201207/model/AIGWLLMHealthCheckSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLLMHealthCheckSetting::AIGWLLMHealthCheckSetting() :
    m_healthCheckIntervalSecondHasBeenSet(false),
    m_healthCheckTimeoutHasBeenSet(false),
    m_healthCheckFailThresholdHasBeenSet(false),
    m_healthCheckRecoverThresholdHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMHealthCheckSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthCheckIntervalSecond") && !value["HealthCheckIntervalSecond"].IsNull())
    {
        if (!value["HealthCheckIntervalSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMHealthCheckSetting.HealthCheckIntervalSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckIntervalSecond = value["HealthCheckIntervalSecond"].GetUint64();
        m_healthCheckIntervalSecondHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTimeout") && !value["HealthCheckTimeout"].IsNull())
    {
        if (!value["HealthCheckTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMHealthCheckSetting.HealthCheckTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTimeout = value["HealthCheckTimeout"].GetUint64();
        m_healthCheckTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckFailThreshold") && !value["HealthCheckFailThreshold"].IsNull())
    {
        if (!value["HealthCheckFailThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMHealthCheckSetting.HealthCheckFailThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckFailThreshold = value["HealthCheckFailThreshold"].GetUint64();
        m_healthCheckFailThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckRecoverThreshold") && !value["HealthCheckRecoverThreshold"].IsNull())
    {
        if (!value["HealthCheckRecoverThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMHealthCheckSetting.HealthCheckRecoverThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckRecoverThreshold = value["HealthCheckRecoverThreshold"].GetUint64();
        m_healthCheckRecoverThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPath") && !value["HealthCheckPath"].IsNull())
    {
        if (!value["HealthCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMHealthCheckSetting.HealthCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPath = string(value["HealthCheckPath"].GetString());
        m_healthCheckPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMHealthCheckSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthCheckIntervalSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckIntervalSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckIntervalSecond, allocator);
    }

    if (m_healthCheckTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckTimeout, allocator);
    }

    if (m_healthCheckFailThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckFailThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckFailThreshold, allocator);
    }

    if (m_healthCheckRecoverThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckRecoverThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckRecoverThreshold, allocator);
    }

    if (m_healthCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckPath.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AIGWLLMHealthCheckSetting::GetHealthCheckIntervalSecond() const
{
    return m_healthCheckIntervalSecond;
}

void AIGWLLMHealthCheckSetting::SetHealthCheckIntervalSecond(const uint64_t& _healthCheckIntervalSecond)
{
    m_healthCheckIntervalSecond = _healthCheckIntervalSecond;
    m_healthCheckIntervalSecondHasBeenSet = true;
}

bool AIGWLLMHealthCheckSetting::HealthCheckIntervalSecondHasBeenSet() const
{
    return m_healthCheckIntervalSecondHasBeenSet;
}

uint64_t AIGWLLMHealthCheckSetting::GetHealthCheckTimeout() const
{
    return m_healthCheckTimeout;
}

void AIGWLLMHealthCheckSetting::SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout)
{
    m_healthCheckTimeout = _healthCheckTimeout;
    m_healthCheckTimeoutHasBeenSet = true;
}

bool AIGWLLMHealthCheckSetting::HealthCheckTimeoutHasBeenSet() const
{
    return m_healthCheckTimeoutHasBeenSet;
}

uint64_t AIGWLLMHealthCheckSetting::GetHealthCheckFailThreshold() const
{
    return m_healthCheckFailThreshold;
}

void AIGWLLMHealthCheckSetting::SetHealthCheckFailThreshold(const uint64_t& _healthCheckFailThreshold)
{
    m_healthCheckFailThreshold = _healthCheckFailThreshold;
    m_healthCheckFailThresholdHasBeenSet = true;
}

bool AIGWLLMHealthCheckSetting::HealthCheckFailThresholdHasBeenSet() const
{
    return m_healthCheckFailThresholdHasBeenSet;
}

uint64_t AIGWLLMHealthCheckSetting::GetHealthCheckRecoverThreshold() const
{
    return m_healthCheckRecoverThreshold;
}

void AIGWLLMHealthCheckSetting::SetHealthCheckRecoverThreshold(const uint64_t& _healthCheckRecoverThreshold)
{
    m_healthCheckRecoverThreshold = _healthCheckRecoverThreshold;
    m_healthCheckRecoverThresholdHasBeenSet = true;
}

bool AIGWLLMHealthCheckSetting::HealthCheckRecoverThresholdHasBeenSet() const
{
    return m_healthCheckRecoverThresholdHasBeenSet;
}

string AIGWLLMHealthCheckSetting::GetHealthCheckPath() const
{
    return m_healthCheckPath;
}

void AIGWLLMHealthCheckSetting::SetHealthCheckPath(const string& _healthCheckPath)
{
    m_healthCheckPath = _healthCheckPath;
    m_healthCheckPathHasBeenSet = true;
}

bool AIGWLLMHealthCheckSetting::HealthCheckPathHasBeenSet() const
{
    return m_healthCheckPathHasBeenSet;
}

