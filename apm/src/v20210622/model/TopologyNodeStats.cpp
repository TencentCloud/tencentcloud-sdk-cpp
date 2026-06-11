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

#include <tencentcloud/apm/v20210622/model/TopologyNodeStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

TopologyNodeStats::TopologyNodeStats() :
    m_totalHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome TopologyNodeStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNodeStats.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNodeStats.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("Warning") && !value["Warning"].IsNull())
    {
        if (!value["Warning"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNodeStats.Warning` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warning = value["Warning"].GetInt64();
        m_warningHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNodeStats.Error` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_error = value["Error"].GetInt64();
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologyNodeStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_warningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warning, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_error, allocator);
    }

}


int64_t TopologyNodeStats::GetTotal() const
{
    return m_total;
}

void TopologyNodeStats::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TopologyNodeStats::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t TopologyNodeStats::GetHealthy() const
{
    return m_healthy;
}

void TopologyNodeStats::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool TopologyNodeStats::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

int64_t TopologyNodeStats::GetWarning() const
{
    return m_warning;
}

void TopologyNodeStats::SetWarning(const int64_t& _warning)
{
    m_warning = _warning;
    m_warningHasBeenSet = true;
}

bool TopologyNodeStats::WarningHasBeenSet() const
{
    return m_warningHasBeenSet;
}

int64_t TopologyNodeStats::GetError() const
{
    return m_error;
}

void TopologyNodeStats::SetError(const int64_t& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TopologyNodeStats::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

