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

#include <tencentcloud/apis/v20240801/model/HealthCheckConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

HealthCheckConfigDTO::HealthCheckConfigDTO() :
    m_healthCheckPathHasBeenSet(false),
    m_validHealthCheckStatusCodeHasBeenSet(false),
    m_healthCheckTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthCheckPath") && !value["HealthCheckPath"].IsNull())
    {
        if (!value["HealthCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfigDTO.HealthCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPath = string(value["HealthCheckPath"].GetString());
        m_healthCheckPathHasBeenSet = true;
    }

    if (value.HasMember("ValidHealthCheckStatusCode") && !value["ValidHealthCheckStatusCode"].IsNull())
    {
        if (!value["ValidHealthCheckStatusCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfigDTO.ValidHealthCheckStatusCode` is not array type"));

        const rapidjson::Value &tmpValue = value["ValidHealthCheckStatusCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_validHealthCheckStatusCode.push_back((*itr).GetInt64());
        }
        m_validHealthCheckStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTimeout") && !value["HealthCheckTimeout"].IsNull())
    {
        if (!value["HealthCheckTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfigDTO.HealthCheckTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTimeout = value["HealthCheckTimeout"].GetInt64();
        m_healthCheckTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_validHealthCheckStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidHealthCheckStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_validHealthCheckStatusCode.begin(); itr != m_validHealthCheckStatusCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_healthCheckTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckTimeout, allocator);
    }

}


string HealthCheckConfigDTO::GetHealthCheckPath() const
{
    return m_healthCheckPath;
}

void HealthCheckConfigDTO::SetHealthCheckPath(const string& _healthCheckPath)
{
    m_healthCheckPath = _healthCheckPath;
    m_healthCheckPathHasBeenSet = true;
}

bool HealthCheckConfigDTO::HealthCheckPathHasBeenSet() const
{
    return m_healthCheckPathHasBeenSet;
}

vector<int64_t> HealthCheckConfigDTO::GetValidHealthCheckStatusCode() const
{
    return m_validHealthCheckStatusCode;
}

void HealthCheckConfigDTO::SetValidHealthCheckStatusCode(const vector<int64_t>& _validHealthCheckStatusCode)
{
    m_validHealthCheckStatusCode = _validHealthCheckStatusCode;
    m_validHealthCheckStatusCodeHasBeenSet = true;
}

bool HealthCheckConfigDTO::ValidHealthCheckStatusCodeHasBeenSet() const
{
    return m_validHealthCheckStatusCodeHasBeenSet;
}

int64_t HealthCheckConfigDTO::GetHealthCheckTimeout() const
{
    return m_healthCheckTimeout;
}

void HealthCheckConfigDTO::SetHealthCheckTimeout(const int64_t& _healthCheckTimeout)
{
    m_healthCheckTimeout = _healthCheckTimeout;
    m_healthCheckTimeoutHasBeenSet = true;
}

bool HealthCheckConfigDTO::HealthCheckTimeoutHasBeenSet() const
{
    return m_healthCheckTimeoutHasBeenSet;
}

