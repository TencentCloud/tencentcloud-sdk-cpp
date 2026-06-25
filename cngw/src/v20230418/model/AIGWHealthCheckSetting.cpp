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

#include <tencentcloud/cngw/v20230418/model/AIGWHealthCheckSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWHealthCheckSetting::AIGWHealthCheckSetting() :
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckIntervalSecondHasBeenSet(false),
    m_healthCheckTimeoutHasBeenSet(false),
    m_healthCheckFailThresholdHasBeenSet(false),
    m_healthCheckRecoverThresholdHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckMethodHasBeenSet(false)
{
}

CoreInternalOutcome AIGWHealthCheckSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthCheckType") && !value["HealthCheckType"].IsNull())
    {
        if (!value["HealthCheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckType = string(value["HealthCheckType"].GetString());
        m_healthCheckTypeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckIntervalSecond") && !value["HealthCheckIntervalSecond"].IsNull())
    {
        if (!value["HealthCheckIntervalSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckIntervalSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckIntervalSecond = value["HealthCheckIntervalSecond"].GetUint64();
        m_healthCheckIntervalSecondHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTimeout") && !value["HealthCheckTimeout"].IsNull())
    {
        if (!value["HealthCheckTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTimeout = value["HealthCheckTimeout"].GetUint64();
        m_healthCheckTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckFailThreshold") && !value["HealthCheckFailThreshold"].IsNull())
    {
        if (!value["HealthCheckFailThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckFailThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckFailThreshold = value["HealthCheckFailThreshold"].GetUint64();
        m_healthCheckFailThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckRecoverThreshold") && !value["HealthCheckRecoverThreshold"].IsNull())
    {
        if (!value["HealthCheckRecoverThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckRecoverThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckRecoverThreshold = value["HealthCheckRecoverThreshold"].GetUint64();
        m_healthCheckRecoverThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPath") && !value["HealthCheckPath"].IsNull())
    {
        if (!value["HealthCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPath = string(value["HealthCheckPath"].GetString());
        m_healthCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckMethod") && !value["HealthCheckMethod"].IsNull())
    {
        if (!value["HealthCheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWHealthCheckSetting.HealthCheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckMethod = string(value["HealthCheckMethod"].GetString());
        m_healthCheckMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWHealthCheckSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthCheckTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_healthCheckMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckMethod.c_str(), allocator).Move(), allocator);
    }

}


string AIGWHealthCheckSetting::GetHealthCheckType() const
{
    return m_healthCheckType;
}

void AIGWHealthCheckSetting::SetHealthCheckType(const string& _healthCheckType)
{
    m_healthCheckType = _healthCheckType;
    m_healthCheckTypeHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckTypeHasBeenSet() const
{
    return m_healthCheckTypeHasBeenSet;
}

uint64_t AIGWHealthCheckSetting::GetHealthCheckIntervalSecond() const
{
    return m_healthCheckIntervalSecond;
}

void AIGWHealthCheckSetting::SetHealthCheckIntervalSecond(const uint64_t& _healthCheckIntervalSecond)
{
    m_healthCheckIntervalSecond = _healthCheckIntervalSecond;
    m_healthCheckIntervalSecondHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckIntervalSecondHasBeenSet() const
{
    return m_healthCheckIntervalSecondHasBeenSet;
}

uint64_t AIGWHealthCheckSetting::GetHealthCheckTimeout() const
{
    return m_healthCheckTimeout;
}

void AIGWHealthCheckSetting::SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout)
{
    m_healthCheckTimeout = _healthCheckTimeout;
    m_healthCheckTimeoutHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckTimeoutHasBeenSet() const
{
    return m_healthCheckTimeoutHasBeenSet;
}

uint64_t AIGWHealthCheckSetting::GetHealthCheckFailThreshold() const
{
    return m_healthCheckFailThreshold;
}

void AIGWHealthCheckSetting::SetHealthCheckFailThreshold(const uint64_t& _healthCheckFailThreshold)
{
    m_healthCheckFailThreshold = _healthCheckFailThreshold;
    m_healthCheckFailThresholdHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckFailThresholdHasBeenSet() const
{
    return m_healthCheckFailThresholdHasBeenSet;
}

uint64_t AIGWHealthCheckSetting::GetHealthCheckRecoverThreshold() const
{
    return m_healthCheckRecoverThreshold;
}

void AIGWHealthCheckSetting::SetHealthCheckRecoverThreshold(const uint64_t& _healthCheckRecoverThreshold)
{
    m_healthCheckRecoverThreshold = _healthCheckRecoverThreshold;
    m_healthCheckRecoverThresholdHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckRecoverThresholdHasBeenSet() const
{
    return m_healthCheckRecoverThresholdHasBeenSet;
}

string AIGWHealthCheckSetting::GetHealthCheckPath() const
{
    return m_healthCheckPath;
}

void AIGWHealthCheckSetting::SetHealthCheckPath(const string& _healthCheckPath)
{
    m_healthCheckPath = _healthCheckPath;
    m_healthCheckPathHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckPathHasBeenSet() const
{
    return m_healthCheckPathHasBeenSet;
}

string AIGWHealthCheckSetting::GetHealthCheckMethod() const
{
    return m_healthCheckMethod;
}

void AIGWHealthCheckSetting::SetHealthCheckMethod(const string& _healthCheckMethod)
{
    m_healthCheckMethod = _healthCheckMethod;
    m_healthCheckMethodHasBeenSet = true;
}

bool AIGWHealthCheckSetting::HealthCheckMethodHasBeenSet() const
{
    return m_healthCheckMethodHasBeenSet;
}

