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

#include <tencentcloud/omics/v20221128/model/ClusterOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

ClusterOption::ClusterOption() :
    m_zoneHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_serviceCidrHasBeenSet(false),
    m_resourceQuotaHasBeenSet(false),
    m_limitRangeHasBeenSet(false),
    m_systemNodeInstanceTypeHasBeenSet(false),
    m_systemNodeCountHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false)
{
}

CoreInternalOutcome ClusterOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ServiceCidr") && !value["ServiceCidr"].IsNull())
    {
        if (!value["ServiceCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.ServiceCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCidr = string(value["ServiceCidr"].GetString());
        m_serviceCidrHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuota") && !value["ResourceQuota"].IsNull())
    {
        if (!value["ResourceQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.ResourceQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceQuota.Deserialize(value["ResourceQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceQuotaHasBeenSet = true;
    }

    if (value.HasMember("LimitRange") && !value["LimitRange"].IsNull())
    {
        if (!value["LimitRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.LimitRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limitRange.Deserialize(value["LimitRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitRangeHasBeenSet = true;
    }

    if (value.HasMember("SystemNodeInstanceType") && !value["SystemNodeInstanceType"].IsNull())
    {
        if (!value["SystemNodeInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.SystemNodeInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemNodeInstanceType = string(value["SystemNodeInstanceType"].GetString());
        m_systemNodeInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemNodeCount") && !value["SystemNodeCount"].IsNull())
    {
        if (!value["SystemNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.SystemNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemNodeCount = value["SystemNodeCount"].GetUint64();
        m_systemNodeCountHasBeenSet = true;
    }

    if (value.HasMember("AutoUpgradeClusterLevel") && !value["AutoUpgradeClusterLevel"].IsNull())
    {
        if (!value["AutoUpgradeClusterLevel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOption.AutoUpgradeClusterLevel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpgradeClusterLevel = value["AutoUpgradeClusterLevel"].GetBool();
        m_autoUpgradeClusterLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_systemNodeInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemNodeInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemNodeInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemNodeCount, allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoUpgradeClusterLevel, allocator);
    }

}


string ClusterOption::GetZone() const
{
    return m_zone;
}

void ClusterOption::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ClusterOption::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ClusterOption::GetType() const
{
    return m_type;
}

void ClusterOption::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClusterOption::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ClusterOption::GetServiceCidr() const
{
    return m_serviceCidr;
}

void ClusterOption::SetServiceCidr(const string& _serviceCidr)
{
    m_serviceCidr = _serviceCidr;
    m_serviceCidrHasBeenSet = true;
}

bool ClusterOption::ServiceCidrHasBeenSet() const
{
    return m_serviceCidrHasBeenSet;
}

ResourceQuota ClusterOption::GetResourceQuota() const
{
    return m_resourceQuota;
}

void ClusterOption::SetResourceQuota(const ResourceQuota& _resourceQuota)
{
    m_resourceQuota = _resourceQuota;
    m_resourceQuotaHasBeenSet = true;
}

bool ClusterOption::ResourceQuotaHasBeenSet() const
{
    return m_resourceQuotaHasBeenSet;
}

LimitRange ClusterOption::GetLimitRange() const
{
    return m_limitRange;
}

void ClusterOption::SetLimitRange(const LimitRange& _limitRange)
{
    m_limitRange = _limitRange;
    m_limitRangeHasBeenSet = true;
}

bool ClusterOption::LimitRangeHasBeenSet() const
{
    return m_limitRangeHasBeenSet;
}

string ClusterOption::GetSystemNodeInstanceType() const
{
    return m_systemNodeInstanceType;
}

void ClusterOption::SetSystemNodeInstanceType(const string& _systemNodeInstanceType)
{
    m_systemNodeInstanceType = _systemNodeInstanceType;
    m_systemNodeInstanceTypeHasBeenSet = true;
}

bool ClusterOption::SystemNodeInstanceTypeHasBeenSet() const
{
    return m_systemNodeInstanceTypeHasBeenSet;
}

uint64_t ClusterOption::GetSystemNodeCount() const
{
    return m_systemNodeCount;
}

void ClusterOption::SetSystemNodeCount(const uint64_t& _systemNodeCount)
{
    m_systemNodeCount = _systemNodeCount;
    m_systemNodeCountHasBeenSet = true;
}

bool ClusterOption::SystemNodeCountHasBeenSet() const
{
    return m_systemNodeCountHasBeenSet;
}

bool ClusterOption::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

void ClusterOption::SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel)
{
    m_autoUpgradeClusterLevel = _autoUpgradeClusterLevel;
    m_autoUpgradeClusterLevelHasBeenSet = true;
}

bool ClusterOption::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

