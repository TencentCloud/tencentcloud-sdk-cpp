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

#include <tencentcloud/cdb/v20170320/model/BaseGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

BaseGroupInfo::BaseGroupInfo() :
    m_proxyGroupIdHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_openRWHasBeenSet(false),
    m_currentProxyVersionHasBeenSet(false),
    m_supportUpgradeProxyVersionHasBeenSet(false)
{
}

CoreInternalOutcome BaseGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyGroupId") && !value["ProxyGroupId"].IsNull())
    {
        if (!value["ProxyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.ProxyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyGroupId = string(value["ProxyGroupId"].GetString());
        m_proxyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("OpenRW") && !value["OpenRW"].IsNull())
    {
        if (!value["OpenRW"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.OpenRW` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openRW = value["OpenRW"].GetBool();
        m_openRWHasBeenSet = true;
    }

    if (value.HasMember("CurrentProxyVersion") && !value["CurrentProxyVersion"].IsNull())
    {
        if (!value["CurrentProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.CurrentProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentProxyVersion = string(value["CurrentProxyVersion"].GetString());
        m_currentProxyVersionHasBeenSet = true;
    }

    if (value.HasMember("SupportUpgradeProxyVersion") && !value["SupportUpgradeProxyVersion"].IsNull())
    {
        if (!value["SupportUpgradeProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseGroupInfo.SupportUpgradeProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportUpgradeProxyVersion = string(value["SupportUpgradeProxyVersion"].GetString());
        m_supportUpgradeProxyVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
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

    if (m_openRWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenRW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openRW, allocator);
    }

    if (m_currentProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportUpgradeProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportUpgradeProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportUpgradeProxyVersion.c_str(), allocator).Move(), allocator);
    }

}


string BaseGroupInfo::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void BaseGroupInfo::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool BaseGroupInfo::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

uint64_t BaseGroupInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void BaseGroupInfo::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool BaseGroupInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

string BaseGroupInfo::GetStatus() const
{
    return m_status;
}

void BaseGroupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaseGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BaseGroupInfo::GetRegion() const
{
    return m_region;
}

void BaseGroupInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BaseGroupInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BaseGroupInfo::GetZone() const
{
    return m_zone;
}

void BaseGroupInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool BaseGroupInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool BaseGroupInfo::GetOpenRW() const
{
    return m_openRW;
}

void BaseGroupInfo::SetOpenRW(const bool& _openRW)
{
    m_openRW = _openRW;
    m_openRWHasBeenSet = true;
}

bool BaseGroupInfo::OpenRWHasBeenSet() const
{
    return m_openRWHasBeenSet;
}

string BaseGroupInfo::GetCurrentProxyVersion() const
{
    return m_currentProxyVersion;
}

void BaseGroupInfo::SetCurrentProxyVersion(const string& _currentProxyVersion)
{
    m_currentProxyVersion = _currentProxyVersion;
    m_currentProxyVersionHasBeenSet = true;
}

bool BaseGroupInfo::CurrentProxyVersionHasBeenSet() const
{
    return m_currentProxyVersionHasBeenSet;
}

string BaseGroupInfo::GetSupportUpgradeProxyVersion() const
{
    return m_supportUpgradeProxyVersion;
}

void BaseGroupInfo::SetSupportUpgradeProxyVersion(const string& _supportUpgradeProxyVersion)
{
    m_supportUpgradeProxyVersion = _supportUpgradeProxyVersion;
    m_supportUpgradeProxyVersionHasBeenSet = true;
}

bool BaseGroupInfo::SupportUpgradeProxyVersionHasBeenSet() const
{
    return m_supportUpgradeProxyVersionHasBeenSet;
}

