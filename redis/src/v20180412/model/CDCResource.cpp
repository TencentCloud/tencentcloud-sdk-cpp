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

#include <tencentcloud/redis/v20180412/model/CDCResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

CDCResource::CDCResource() :
    m_appIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_redisClusterIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_baseBundlesHasBeenSet(false),
    m_resourceBundlesHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome CDCResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("RedisClusterId") && !value["RedisClusterId"].IsNull())
    {
        if (!value["RedisClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.RedisClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redisClusterId = string(value["RedisClusterId"].GetString());
        m_redisClusterIdHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BaseBundles") && !value["BaseBundles"].IsNull())
    {
        if (!value["BaseBundles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CDCResource.BaseBundles` is not array type"));

        const rapidjson::Value &tmpValue = value["BaseBundles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceBundle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baseBundles.push_back(item);
        }
        m_baseBundlesHasBeenSet = true;
    }

    if (value.HasMember("ResourceBundles") && !value["ResourceBundles"].IsNull())
    {
        if (!value["ResourceBundles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CDCResource.ResourceBundles` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceBundles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceBundle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceBundles.push_back(item);
        }
        m_resourceBundlesHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDCResource.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CDCResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_redisClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redisClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_baseBundlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBundles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baseBundles.begin(); itr != m_baseBundles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceBundlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBundles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceBundles.begin(); itr != m_resourceBundles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

}


int64_t CDCResource::GetAppId() const
{
    return m_appId;
}

void CDCResource::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CDCResource::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t CDCResource::GetRegionId() const
{
    return m_regionId;
}

void CDCResource::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CDCResource::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t CDCResource::GetZoneId() const
{
    return m_zoneId;
}

void CDCResource::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CDCResource::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CDCResource::GetRedisClusterId() const
{
    return m_redisClusterId;
}

void CDCResource::SetRedisClusterId(const string& _redisClusterId)
{
    m_redisClusterId = _redisClusterId;
    m_redisClusterIdHasBeenSet = true;
}

bool CDCResource::RedisClusterIdHasBeenSet() const
{
    return m_redisClusterIdHasBeenSet;
}

int64_t CDCResource::GetPayMode() const
{
    return m_payMode;
}

void CDCResource::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CDCResource::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CDCResource::GetProjectId() const
{
    return m_projectId;
}

void CDCResource::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CDCResource::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CDCResource::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CDCResource::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CDCResource::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CDCResource::GetClusterName() const
{
    return m_clusterName;
}

void CDCResource::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CDCResource::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CDCResource::GetStartTime() const
{
    return m_startTime;
}

void CDCResource::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CDCResource::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CDCResource::GetEndTime() const
{
    return m_endTime;
}

void CDCResource::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CDCResource::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CDCResource::GetStatus() const
{
    return m_status;
}

void CDCResource::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CDCResource::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ResourceBundle> CDCResource::GetBaseBundles() const
{
    return m_baseBundles;
}

void CDCResource::SetBaseBundles(const vector<ResourceBundle>& _baseBundles)
{
    m_baseBundles = _baseBundles;
    m_baseBundlesHasBeenSet = true;
}

bool CDCResource::BaseBundlesHasBeenSet() const
{
    return m_baseBundlesHasBeenSet;
}

vector<ResourceBundle> CDCResource::GetResourceBundles() const
{
    return m_resourceBundles;
}

void CDCResource::SetResourceBundles(const vector<ResourceBundle>& _resourceBundles)
{
    m_resourceBundles = _resourceBundles;
    m_resourceBundlesHasBeenSet = true;
}

bool CDCResource::ResourceBundlesHasBeenSet() const
{
    return m_resourceBundlesHasBeenSet;
}

string CDCResource::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void CDCResource::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool CDCResource::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

