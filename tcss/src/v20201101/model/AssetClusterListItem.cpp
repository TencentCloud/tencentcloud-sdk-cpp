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

#include <tencentcloud/tcss/v20201101/model/AssetClusterListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AssetClusterListItem::AssetClusterListItem() :
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bindRuleNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_cpuLimitHasBeenSet(false)
{
}

CoreInternalOutcome AssetClusterListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BindRuleName") && !value["BindRuleName"].IsNull())
    {
        if (!value["BindRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.BindRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindRuleName = string(value["BindRuleName"].GetString());
        m_bindRuleNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.MemLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = value["MemLimit"].GetInt64();
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterListItem.CpuLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = value["CpuLimit"].GetInt64();
        m_cpuLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetClusterListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_bindRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memLimit, allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuLimit, allocator);
    }

}


string AssetClusterListItem::GetClusterID() const
{
    return m_clusterID;
}

void AssetClusterListItem::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool AssetClusterListItem::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string AssetClusterListItem::GetClusterName() const
{
    return m_clusterName;
}

void AssetClusterListItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AssetClusterListItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string AssetClusterListItem::GetStatus() const
{
    return m_status;
}

void AssetClusterListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetClusterListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetClusterListItem::GetBindRuleName() const
{
    return m_bindRuleName;
}

void AssetClusterListItem::SetBindRuleName(const string& _bindRuleName)
{
    m_bindRuleName = _bindRuleName;
    m_bindRuleNameHasBeenSet = true;
}

bool AssetClusterListItem::BindRuleNameHasBeenSet() const
{
    return m_bindRuleNameHasBeenSet;
}

string AssetClusterListItem::GetClusterType() const
{
    return m_clusterType;
}

void AssetClusterListItem::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool AssetClusterListItem::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string AssetClusterListItem::GetClusterVersion() const
{
    return m_clusterVersion;
}

void AssetClusterListItem::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool AssetClusterListItem::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

int64_t AssetClusterListItem::GetMemLimit() const
{
    return m_memLimit;
}

void AssetClusterListItem::SetMemLimit(const int64_t& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool AssetClusterListItem::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

int64_t AssetClusterListItem::GetCpuLimit() const
{
    return m_cpuLimit;
}

void AssetClusterListItem::SetCpuLimit(const int64_t& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool AssetClusterListItem::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

