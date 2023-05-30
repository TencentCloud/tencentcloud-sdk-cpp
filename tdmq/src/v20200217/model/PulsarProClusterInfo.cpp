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

#include <tencentcloud/tdmq/v20200217/model/PulsarProClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PulsarProClusterInfo::PulsarProClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_nodeDistributionHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_canEditRouteHasBeenSet(false)
{
}

CoreInternalOutcome PulsarProClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("NodeDistribution") && !value["NodeDistribution"].IsNull())
    {
        if (!value["NodeDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.NodeDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeDistribution.push_back(item);
        }
        m_nodeDistributionHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("CanEditRoute") && !value["CanEditRoute"].IsNull())
    {
        if (!value["CanEditRoute"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterInfo.CanEditRoute` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEditRoute = value["CanEditRoute"].GetBool();
        m_canEditRouteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PulsarProClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeDistribution.begin(); itr != m_nodeDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_canEditRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEditRoute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEditRoute, allocator);
    }

}


string PulsarProClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void PulsarProClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PulsarProClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string PulsarProClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void PulsarProClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool PulsarProClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string PulsarProClusterInfo::GetRemark() const
{
    return m_remark;
}

void PulsarProClusterInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PulsarProClusterInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string PulsarProClusterInfo::GetCreateTime() const
{
    return m_createTime;
}

void PulsarProClusterInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PulsarProClusterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t PulsarProClusterInfo::GetStatus() const
{
    return m_status;
}

void PulsarProClusterInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PulsarProClusterInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PulsarProClusterInfo::GetVersion() const
{
    return m_version;
}

void PulsarProClusterInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PulsarProClusterInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<InstanceNodeDistribution> PulsarProClusterInfo::GetNodeDistribution() const
{
    return m_nodeDistribution;
}

void PulsarProClusterInfo::SetNodeDistribution(const vector<InstanceNodeDistribution>& _nodeDistribution)
{
    m_nodeDistribution = _nodeDistribution;
    m_nodeDistributionHasBeenSet = true;
}

bool PulsarProClusterInfo::NodeDistributionHasBeenSet() const
{
    return m_nodeDistributionHasBeenSet;
}

uint64_t PulsarProClusterInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void PulsarProClusterInfo::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool PulsarProClusterInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

bool PulsarProClusterInfo::GetCanEditRoute() const
{
    return m_canEditRoute;
}

void PulsarProClusterInfo::SetCanEditRoute(const bool& _canEditRoute)
{
    m_canEditRoute = _canEditRoute;
    m_canEditRouteHasBeenSet = true;
}

bool PulsarProClusterInfo::CanEditRouteHasBeenSet() const
{
    return m_canEditRouteHasBeenSet;
}

