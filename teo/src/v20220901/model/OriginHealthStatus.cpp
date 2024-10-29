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

#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginHealthStatus::OriginHealthStatus() :
    m_originHasBeenSet(false),
    m_healthyHasBeenSet(false)
{
}

CoreInternalOutcome OriginHealthStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginHealthStatus.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginHealthStatus.Healthy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = string(value["Healthy"].GetString());
        m_healthyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginHealthStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthy.c_str(), allocator).Move(), allocator);
    }

}


string OriginHealthStatus::GetOrigin() const
{
    return m_origin;
}

void OriginHealthStatus::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool OriginHealthStatus::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string OriginHealthStatus::GetHealthy() const
{
    return m_healthy;
}

void OriginHealthStatus::SetHealthy(const string& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool OriginHealthStatus::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

