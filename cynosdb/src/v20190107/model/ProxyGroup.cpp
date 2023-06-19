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

#include <tencentcloud/cynosdb/v20190107/model/ProxyGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyGroup::ProxyGroup() :
    m_proxyGroupIdHasBeenSet(false),
    m_proxyNodeCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_currentProxyVersionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_openRwHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyGroupId") && !value["ProxyGroupId"].IsNull())
    {
        if (!value["ProxyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.ProxyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyGroupId = string(value["ProxyGroupId"].GetString());
        m_proxyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeCount") && !value["ProxyNodeCount"].IsNull())
    {
        if (!value["ProxyNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.ProxyNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeCount = value["ProxyNodeCount"].GetInt64();
        m_proxyNodeCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CurrentProxyVersion") && !value["CurrentProxyVersion"].IsNull())
    {
        if (!value["CurrentProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.CurrentProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentProxyVersion = string(value["CurrentProxyVersion"].GetString());
        m_currentProxyVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OpenRw") && !value["OpenRw"].IsNull())
    {
        if (!value["OpenRw"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroup.OpenRw` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openRw = string(value["OpenRw"].GetString());
        m_openRwHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNodeCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_currentProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_openRwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenRw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openRw.c_str(), allocator).Move(), allocator);
    }

}


string ProxyGroup::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ProxyGroup::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ProxyGroup::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

int64_t ProxyGroup::GetProxyNodeCount() const
{
    return m_proxyNodeCount;
}

void ProxyGroup::SetProxyNodeCount(const int64_t& _proxyNodeCount)
{
    m_proxyNodeCount = _proxyNodeCount;
    m_proxyNodeCountHasBeenSet = true;
}

bool ProxyGroup::ProxyNodeCountHasBeenSet() const
{
    return m_proxyNodeCountHasBeenSet;
}

string ProxyGroup::GetStatus() const
{
    return m_status;
}

void ProxyGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyGroup::GetRegion() const
{
    return m_region;
}

void ProxyGroup::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProxyGroup::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ProxyGroup::GetZone() const
{
    return m_zone;
}

void ProxyGroup::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyGroup::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ProxyGroup::GetCurrentProxyVersion() const
{
    return m_currentProxyVersion;
}

void ProxyGroup::SetCurrentProxyVersion(const string& _currentProxyVersion)
{
    m_currentProxyVersion = _currentProxyVersion;
    m_currentProxyVersionHasBeenSet = true;
}

bool ProxyGroup::CurrentProxyVersionHasBeenSet() const
{
    return m_currentProxyVersionHasBeenSet;
}

string ProxyGroup::GetClusterId() const
{
    return m_clusterId;
}

void ProxyGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ProxyGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ProxyGroup::GetAppId() const
{
    return m_appId;
}

void ProxyGroup::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ProxyGroup::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ProxyGroup::GetOpenRw() const
{
    return m_openRw;
}

void ProxyGroup::SetOpenRw(const string& _openRw)
{
    m_openRw = _openRw;
    m_openRwHasBeenSet = true;
}

bool ProxyGroup::OpenRwHasBeenSet() const
{
    return m_openRwHasBeenSet;
}

