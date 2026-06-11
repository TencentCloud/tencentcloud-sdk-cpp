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

#include <tencentcloud/apm/v20210622/model/OverviewStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

OverviewStats::OverviewStats() :
    m_serviceStatsHasBeenSet(false),
    m_databaseStatsHasBeenSet(false),
    m_mQStatsHasBeenSet(false),
    m_totalNodesHasBeenSet(false),
    m_healthyNodesHasBeenSet(false),
    m_warningNodesHasBeenSet(false),
    m_errorNodesHasBeenSet(false)
{
}

CoreInternalOutcome OverviewStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceStats") && !value["ServiceStats"].IsNull())
    {
        if (!value["ServiceStats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.ServiceStats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceStats.Deserialize(value["ServiceStats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceStatsHasBeenSet = true;
    }

    if (value.HasMember("DatabaseStats") && !value["DatabaseStats"].IsNull())
    {
        if (!value["DatabaseStats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.DatabaseStats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_databaseStats.Deserialize(value["DatabaseStats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_databaseStatsHasBeenSet = true;
    }

    if (value.HasMember("MQStats") && !value["MQStats"].IsNull())
    {
        if (!value["MQStats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.MQStats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mQStats.Deserialize(value["MQStats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mQStatsHasBeenSet = true;
    }

    if (value.HasMember("TotalNodes") && !value["TotalNodes"].IsNull())
    {
        if (!value["TotalNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.TotalNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNodes = value["TotalNodes"].GetInt64();
        m_totalNodesHasBeenSet = true;
    }

    if (value.HasMember("HealthyNodes") && !value["HealthyNodes"].IsNull())
    {
        if (!value["HealthyNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.HealthyNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyNodes = value["HealthyNodes"].GetInt64();
        m_healthyNodesHasBeenSet = true;
    }

    if (value.HasMember("WarningNodes") && !value["WarningNodes"].IsNull())
    {
        if (!value["WarningNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.WarningNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warningNodes = value["WarningNodes"].GetInt64();
        m_warningNodesHasBeenSet = true;
    }

    if (value.HasMember("ErrorNodes") && !value["ErrorNodes"].IsNull())
    {
        if (!value["ErrorNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewStats.ErrorNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorNodes = value["ErrorNodes"].GetInt64();
        m_errorNodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceStats.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_databaseStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_databaseStats.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mQStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MQStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mQStats.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNodes, allocator);
    }

    if (m_healthyNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthyNodes, allocator);
    }

    if (m_warningNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningNodes, allocator);
    }

    if (m_errorNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorNodes, allocator);
    }

}


TopologyNodeStats OverviewStats::GetServiceStats() const
{
    return m_serviceStats;
}

void OverviewStats::SetServiceStats(const TopologyNodeStats& _serviceStats)
{
    m_serviceStats = _serviceStats;
    m_serviceStatsHasBeenSet = true;
}

bool OverviewStats::ServiceStatsHasBeenSet() const
{
    return m_serviceStatsHasBeenSet;
}

TopologyNodeStats OverviewStats::GetDatabaseStats() const
{
    return m_databaseStats;
}

void OverviewStats::SetDatabaseStats(const TopologyNodeStats& _databaseStats)
{
    m_databaseStats = _databaseStats;
    m_databaseStatsHasBeenSet = true;
}

bool OverviewStats::DatabaseStatsHasBeenSet() const
{
    return m_databaseStatsHasBeenSet;
}

TopologyNodeStats OverviewStats::GetMQStats() const
{
    return m_mQStats;
}

void OverviewStats::SetMQStats(const TopologyNodeStats& _mQStats)
{
    m_mQStats = _mQStats;
    m_mQStatsHasBeenSet = true;
}

bool OverviewStats::MQStatsHasBeenSet() const
{
    return m_mQStatsHasBeenSet;
}

int64_t OverviewStats::GetTotalNodes() const
{
    return m_totalNodes;
}

void OverviewStats::SetTotalNodes(const int64_t& _totalNodes)
{
    m_totalNodes = _totalNodes;
    m_totalNodesHasBeenSet = true;
}

bool OverviewStats::TotalNodesHasBeenSet() const
{
    return m_totalNodesHasBeenSet;
}

int64_t OverviewStats::GetHealthyNodes() const
{
    return m_healthyNodes;
}

void OverviewStats::SetHealthyNodes(const int64_t& _healthyNodes)
{
    m_healthyNodes = _healthyNodes;
    m_healthyNodesHasBeenSet = true;
}

bool OverviewStats::HealthyNodesHasBeenSet() const
{
    return m_healthyNodesHasBeenSet;
}

int64_t OverviewStats::GetWarningNodes() const
{
    return m_warningNodes;
}

void OverviewStats::SetWarningNodes(const int64_t& _warningNodes)
{
    m_warningNodes = _warningNodes;
    m_warningNodesHasBeenSet = true;
}

bool OverviewStats::WarningNodesHasBeenSet() const
{
    return m_warningNodesHasBeenSet;
}

int64_t OverviewStats::GetErrorNodes() const
{
    return m_errorNodes;
}

void OverviewStats::SetErrorNodes(const int64_t& _errorNodes)
{
    m_errorNodes = _errorNodes;
    m_errorNodesHasBeenSet = true;
}

bool OverviewStats::ErrorNodesHasBeenSet() const
{
    return m_errorNodesHasBeenSet;
}

