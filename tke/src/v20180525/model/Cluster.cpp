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

#include <tencentcloud/tke/v20180525/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterOsHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterNetworkSettingsHasBeenSet(false),
    m_clusterNodeNumHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterDescription") && !value["ClusterDescription"].IsNull())
    {
        if (!value["ClusterDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDescription = string(value["ClusterDescription"].GetString());
        m_clusterDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterNetworkSettings") && !value["ClusterNetworkSettings"].IsNull())
    {
        if (!value["ClusterNetworkSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterNetworkSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterNetworkSettings.Deserialize(value["ClusterNetworkSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterNetworkSettingsHasBeenSet = true;
    }

    if (value.HasMember("ClusterNodeNum") && !value["ClusterNodeNum"].IsNull())
    {
        if (!value["ClusterNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNodeNum = value["ClusterNodeNum"].GetUint64();
        m_clusterNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Cluster.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterOsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterOs.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNetworkSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterNetworkSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clusterNetworkSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterNodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterNodeNum, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetClusterName() const
{
    return m_clusterName;
}

void Cluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Cluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Cluster::GetClusterDescription() const
{
    return m_clusterDescription;
}

void Cluster::SetClusterDescription(const string& _clusterDescription)
{
    m_clusterDescription = _clusterDescription;
    m_clusterDescriptionHasBeenSet = true;
}

bool Cluster::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}

string Cluster::GetClusterVersion() const
{
    return m_clusterVersion;
}

void Cluster::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool Cluster::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string Cluster::GetClusterOs() const
{
    return m_clusterOs;
}

void Cluster::SetClusterOs(const string& _clusterOs)
{
    m_clusterOs = _clusterOs;
    m_clusterOsHasBeenSet = true;
}

bool Cluster::ClusterOsHasBeenSet() const
{
    return m_clusterOsHasBeenSet;
}

string Cluster::GetClusterType() const
{
    return m_clusterType;
}

void Cluster::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Cluster::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

ClusterNetworkSettings Cluster::GetClusterNetworkSettings() const
{
    return m_clusterNetworkSettings;
}

void Cluster::SetClusterNetworkSettings(const ClusterNetworkSettings& _clusterNetworkSettings)
{
    m_clusterNetworkSettings = _clusterNetworkSettings;
    m_clusterNetworkSettingsHasBeenSet = true;
}

bool Cluster::ClusterNetworkSettingsHasBeenSet() const
{
    return m_clusterNetworkSettingsHasBeenSet;
}

uint64_t Cluster::GetClusterNodeNum() const
{
    return m_clusterNodeNum;
}

void Cluster::SetClusterNodeNum(const uint64_t& _clusterNodeNum)
{
    m_clusterNodeNum = _clusterNodeNum;
    m_clusterNodeNumHasBeenSet = true;
}

bool Cluster::ClusterNodeNumHasBeenSet() const
{
    return m_clusterNodeNumHasBeenSet;
}

uint64_t Cluster::GetProjectId() const
{
    return m_projectId;
}

void Cluster::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Cluster::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

