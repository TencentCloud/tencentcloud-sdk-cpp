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

#include <tencentcloud/emr/v20190103/model/RayCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

RayCluster::RayCluster() :
    m_rayClusterNameHasBeenSet(false),
    m_rayClusterIdHasBeenSet(false),
    m_podCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_redisCountHasBeenSet(false),
    m_submitTypeHasBeenSet(false),
    m_dashboardUrlHasBeenSet(false)
{
}

CoreInternalOutcome RayCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RayClusterName") && !value["RayClusterName"].IsNull())
    {
        if (!value["RayClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.RayClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rayClusterName = string(value["RayClusterName"].GetString());
        m_rayClusterNameHasBeenSet = true;
    }

    if (value.HasMember("RayClusterId") && !value["RayClusterId"].IsNull())
    {
        if (!value["RayClusterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.RayClusterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rayClusterId = value["RayClusterId"].GetInt64();
        m_rayClusterIdHasBeenSet = true;
    }

    if (value.HasMember("PodCount") && !value["PodCount"].IsNull())
    {
        if (!value["PodCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.PodCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCount = value["PodCount"].GetInt64();
        m_podCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RedisCount") && !value["RedisCount"].IsNull())
    {
        if (!value["RedisCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.RedisCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisCount = value["RedisCount"].GetInt64();
        m_redisCountHasBeenSet = true;
    }

    if (value.HasMember("SubmitType") && !value["SubmitType"].IsNull())
    {
        if (!value["SubmitType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.SubmitType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_submitType = value["SubmitType"].GetInt64();
        m_submitTypeHasBeenSet = true;
    }

    if (value.HasMember("DashboardUrl") && !value["DashboardUrl"].IsNull())
    {
        if (!value["DashboardUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayCluster.DashboardUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardUrl = string(value["DashboardUrl"].GetString());
        m_dashboardUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RayCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rayClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rayClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_rayClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rayClusterId, allocator);
    }

    if (m_podCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_redisCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisCount, allocator);
    }

    if (m_submitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submitType, allocator);
    }

    if (m_dashboardUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardUrl.c_str(), allocator).Move(), allocator);
    }

}


string RayCluster::GetRayClusterName() const
{
    return m_rayClusterName;
}

void RayCluster::SetRayClusterName(const string& _rayClusterName)
{
    m_rayClusterName = _rayClusterName;
    m_rayClusterNameHasBeenSet = true;
}

bool RayCluster::RayClusterNameHasBeenSet() const
{
    return m_rayClusterNameHasBeenSet;
}

int64_t RayCluster::GetRayClusterId() const
{
    return m_rayClusterId;
}

void RayCluster::SetRayClusterId(const int64_t& _rayClusterId)
{
    m_rayClusterId = _rayClusterId;
    m_rayClusterIdHasBeenSet = true;
}

bool RayCluster::RayClusterIdHasBeenSet() const
{
    return m_rayClusterIdHasBeenSet;
}

int64_t RayCluster::GetPodCount() const
{
    return m_podCount;
}

void RayCluster::SetPodCount(const int64_t& _podCount)
{
    m_podCount = _podCount;
    m_podCountHasBeenSet = true;
}

bool RayCluster::PodCountHasBeenSet() const
{
    return m_podCountHasBeenSet;
}

string RayCluster::GetCreateTime() const
{
    return m_createTime;
}

void RayCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RayCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t RayCluster::GetRedisCount() const
{
    return m_redisCount;
}

void RayCluster::SetRedisCount(const int64_t& _redisCount)
{
    m_redisCount = _redisCount;
    m_redisCountHasBeenSet = true;
}

bool RayCluster::RedisCountHasBeenSet() const
{
    return m_redisCountHasBeenSet;
}

int64_t RayCluster::GetSubmitType() const
{
    return m_submitType;
}

void RayCluster::SetSubmitType(const int64_t& _submitType)
{
    m_submitType = _submitType;
    m_submitTypeHasBeenSet = true;
}

bool RayCluster::SubmitTypeHasBeenSet() const
{
    return m_submitTypeHasBeenSet;
}

string RayCluster::GetDashboardUrl() const
{
    return m_dashboardUrl;
}

void RayCluster::SetDashboardUrl(const string& _dashboardUrl)
{
    m_dashboardUrl = _dashboardUrl;
    m_dashboardUrlHasBeenSet = true;
}

bool RayCluster::DashboardUrlHasBeenSet() const
{
    return m_dashboardUrlHasBeenSet;
}

