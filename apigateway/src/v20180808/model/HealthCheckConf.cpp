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

#include <tencentcloud/apigateway/v20180808/model/HealthCheckConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

HealthCheckConf::HealthCheckConf() :
    m_isHealthCheckHasBeenSet(false),
    m_requestVolumeThresholdHasBeenSet(false),
    m_sleepWindowInMillisecondsHasBeenSet(false),
    m_errorThresholdPercentageHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsHealthCheck") && !value["IsHealthCheck"].IsNull())
    {
        if (!value["IsHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConf.IsHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isHealthCheck = value["IsHealthCheck"].GetBool();
        m_isHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("RequestVolumeThreshold") && !value["RequestVolumeThreshold"].IsNull())
    {
        if (!value["RequestVolumeThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConf.RequestVolumeThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestVolumeThreshold = value["RequestVolumeThreshold"].GetInt64();
        m_requestVolumeThresholdHasBeenSet = true;
    }

    if (value.HasMember("SleepWindowInMilliseconds") && !value["SleepWindowInMilliseconds"].IsNull())
    {
        if (!value["SleepWindowInMilliseconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConf.SleepWindowInMilliseconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sleepWindowInMilliseconds = value["SleepWindowInMilliseconds"].GetInt64();
        m_sleepWindowInMillisecondsHasBeenSet = true;
    }

    if (value.HasMember("ErrorThresholdPercentage") && !value["ErrorThresholdPercentage"].IsNull())
    {
        if (!value["ErrorThresholdPercentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConf.ErrorThresholdPercentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorThresholdPercentage = value["ErrorThresholdPercentage"].GetInt64();
        m_errorThresholdPercentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHealthCheck, allocator);
    }

    if (m_requestVolumeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestVolumeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestVolumeThreshold, allocator);
    }

    if (m_sleepWindowInMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SleepWindowInMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sleepWindowInMilliseconds, allocator);
    }

    if (m_errorThresholdPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorThresholdPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorThresholdPercentage, allocator);
    }

}


bool HealthCheckConf::GetIsHealthCheck() const
{
    return m_isHealthCheck;
}

void HealthCheckConf::SetIsHealthCheck(const bool& _isHealthCheck)
{
    m_isHealthCheck = _isHealthCheck;
    m_isHealthCheckHasBeenSet = true;
}

bool HealthCheckConf::IsHealthCheckHasBeenSet() const
{
    return m_isHealthCheckHasBeenSet;
}

int64_t HealthCheckConf::GetRequestVolumeThreshold() const
{
    return m_requestVolumeThreshold;
}

void HealthCheckConf::SetRequestVolumeThreshold(const int64_t& _requestVolumeThreshold)
{
    m_requestVolumeThreshold = _requestVolumeThreshold;
    m_requestVolumeThresholdHasBeenSet = true;
}

bool HealthCheckConf::RequestVolumeThresholdHasBeenSet() const
{
    return m_requestVolumeThresholdHasBeenSet;
}

int64_t HealthCheckConf::GetSleepWindowInMilliseconds() const
{
    return m_sleepWindowInMilliseconds;
}

void HealthCheckConf::SetSleepWindowInMilliseconds(const int64_t& _sleepWindowInMilliseconds)
{
    m_sleepWindowInMilliseconds = _sleepWindowInMilliseconds;
    m_sleepWindowInMillisecondsHasBeenSet = true;
}

bool HealthCheckConf::SleepWindowInMillisecondsHasBeenSet() const
{
    return m_sleepWindowInMillisecondsHasBeenSet;
}

int64_t HealthCheckConf::GetErrorThresholdPercentage() const
{
    return m_errorThresholdPercentage;
}

void HealthCheckConf::SetErrorThresholdPercentage(const int64_t& _errorThresholdPercentage)
{
    m_errorThresholdPercentage = _errorThresholdPercentage;
    m_errorThresholdPercentageHasBeenSet = true;
}

bool HealthCheckConf::ErrorThresholdPercentageHasBeenSet() const
{
    return m_errorThresholdPercentageHasBeenSet;
}

