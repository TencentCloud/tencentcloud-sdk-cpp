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

#include <tencentcloud/tse/v20201207/model/KongActiveHealthCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongActiveHealthCheck::KongActiveHealthCheck() :
    m_healthyIntervalHasBeenSet(false),
    m_unHealthyIntervalHasBeenSet(false),
    m_httpPathHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

CoreInternalOutcome KongActiveHealthCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthyInterval") && !value["HealthyInterval"].IsNull())
    {
        if (!value["HealthyInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KongActiveHealthCheck.HealthyInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyInterval = value["HealthyInterval"].GetUint64();
        m_healthyIntervalHasBeenSet = true;
    }

    if (value.HasMember("UnHealthyInterval") && !value["UnHealthyInterval"].IsNull())
    {
        if (!value["UnHealthyInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KongActiveHealthCheck.UnHealthyInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unHealthyInterval = value["UnHealthyInterval"].GetUint64();
        m_unHealthyIntervalHasBeenSet = true;
    }

    if (value.HasMember("HttpPath") && !value["HttpPath"].IsNull())
    {
        if (!value["HttpPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongActiveHealthCheck.HttpPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpPath = string(value["HttpPath"].GetString());
        m_httpPathHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KongActiveHealthCheck.Timeout` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetDouble();
        m_timeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongActiveHealthCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthyIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthyInterval, allocator);
    }

    if (m_unHealthyIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnHealthyInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unHealthyInterval, allocator);
    }

    if (m_httpPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpPath.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

}


uint64_t KongActiveHealthCheck::GetHealthyInterval() const
{
    return m_healthyInterval;
}

void KongActiveHealthCheck::SetHealthyInterval(const uint64_t& _healthyInterval)
{
    m_healthyInterval = _healthyInterval;
    m_healthyIntervalHasBeenSet = true;
}

bool KongActiveHealthCheck::HealthyIntervalHasBeenSet() const
{
    return m_healthyIntervalHasBeenSet;
}

uint64_t KongActiveHealthCheck::GetUnHealthyInterval() const
{
    return m_unHealthyInterval;
}

void KongActiveHealthCheck::SetUnHealthyInterval(const uint64_t& _unHealthyInterval)
{
    m_unHealthyInterval = _unHealthyInterval;
    m_unHealthyIntervalHasBeenSet = true;
}

bool KongActiveHealthCheck::UnHealthyIntervalHasBeenSet() const
{
    return m_unHealthyIntervalHasBeenSet;
}

string KongActiveHealthCheck::GetHttpPath() const
{
    return m_httpPath;
}

void KongActiveHealthCheck::SetHttpPath(const string& _httpPath)
{
    m_httpPath = _httpPath;
    m_httpPathHasBeenSet = true;
}

bool KongActiveHealthCheck::HttpPathHasBeenSet() const
{
    return m_httpPathHasBeenSet;
}

double KongActiveHealthCheck::GetTimeout() const
{
    return m_timeout;
}

void KongActiveHealthCheck::SetTimeout(const double& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool KongActiveHealthCheck::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

