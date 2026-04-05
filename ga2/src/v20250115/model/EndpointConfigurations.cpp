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

#include <tencentcloud/ga2/v20250115/model/EndpointConfigurations.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

EndpointConfigurations::EndpointConfigurations() :
    m_endpointTypeHasBeenSet(false),
    m_endpointServiceHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_healthCheckStatusHasBeenSet(false)
{
}

CoreInternalOutcome EndpointConfigurations::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointType") && !value["EndpointType"].IsNull())
    {
        if (!value["EndpointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointConfigurations.EndpointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointType = string(value["EndpointType"].GetString());
        m_endpointTypeHasBeenSet = true;
    }

    if (value.HasMember("EndpointService") && !value["EndpointService"].IsNull())
    {
        if (!value["EndpointService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointConfigurations.EndpointService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointService = string(value["EndpointService"].GetString());
        m_endpointServiceHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointConfigurations.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckStatus") && !value["HealthCheckStatus"].IsNull())
    {
        if (!value["HealthCheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointConfigurations.HealthCheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckStatus = string(value["HealthCheckStatus"].GetString());
        m_healthCheckStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointConfigurations::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointType.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointService.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_healthCheckStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckStatus.c_str(), allocator).Move(), allocator);
    }

}


string EndpointConfigurations::GetEndpointType() const
{
    return m_endpointType;
}

void EndpointConfigurations::SetEndpointType(const string& _endpointType)
{
    m_endpointType = _endpointType;
    m_endpointTypeHasBeenSet = true;
}

bool EndpointConfigurations::EndpointTypeHasBeenSet() const
{
    return m_endpointTypeHasBeenSet;
}

string EndpointConfigurations::GetEndpointService() const
{
    return m_endpointService;
}

void EndpointConfigurations::SetEndpointService(const string& _endpointService)
{
    m_endpointService = _endpointService;
    m_endpointServiceHasBeenSet = true;
}

bool EndpointConfigurations::EndpointServiceHasBeenSet() const
{
    return m_endpointServiceHasBeenSet;
}

uint64_t EndpointConfigurations::GetWeight() const
{
    return m_weight;
}

void EndpointConfigurations::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool EndpointConfigurations::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string EndpointConfigurations::GetHealthCheckStatus() const
{
    return m_healthCheckStatus;
}

void EndpointConfigurations::SetHealthCheckStatus(const string& _healthCheckStatus)
{
    m_healthCheckStatus = _healthCheckStatus;
    m_healthCheckStatusHasBeenSet = true;
}

bool EndpointConfigurations::HealthCheckStatusHasBeenSet() const
{
    return m_healthCheckStatusHasBeenSet;
}

