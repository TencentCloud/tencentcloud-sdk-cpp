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

#include <tencentcloud/csip/v20221121/model/CheckConnectivityHostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CheckConnectivityHostInfo::CheckConnectivityHostInfo() :
    m_hostIdHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_dockerFileSystemDriverHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isContainerdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_hostRegionIdHasBeenSet(false),
    m_hostRegionHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome CheckConnectivityHostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("DockerFileSystemDriver") && !value["DockerFileSystemDriver"].IsNull())
    {
        if (!value["DockerFileSystemDriver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.DockerFileSystemDriver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerFileSystemDriver = string(value["DockerFileSystemDriver"].GetString());
        m_dockerFileSystemDriverHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsContainerd") && !value["IsContainerd"].IsNull())
    {
        if (!value["IsContainerd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.IsContainerd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isContainerd = value["IsContainerd"].GetBool();
        m_isContainerdHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("HostRegionId") && !value["HostRegionId"].IsNull())
    {
        if (!value["HostRegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.HostRegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostRegionId = value["HostRegionId"].GetInt64();
        m_hostRegionIdHasBeenSet = true;
    }

    if (value.HasMember("HostRegion") && !value["HostRegion"].IsNull())
    {
        if (!value["HostRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.HostRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostRegion = string(value["HostRegion"].GetString());
        m_hostRegionHasBeenSet = true;
    }

    if (value.HasMember("Project") && !value["Project"].IsNull())
    {
        if (!value["Project"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.Project` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_project.Deserialize(value["Project"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConnectivityHostInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckConnectivityHostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerFileSystemDriverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerFileSystemDriver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerFileSystemDriver.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isContainerdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsContainerd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isContainerd, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostRegionId, allocator);
    }

    if (m_hostRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_project.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

}


string CheckConnectivityHostInfo::GetHostId() const
{
    return m_hostId;
}

void CheckConnectivityHostInfo::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool CheckConnectivityHostInfo::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string CheckConnectivityHostInfo::GetHostIp() const
{
    return m_hostIp;
}

void CheckConnectivityHostInfo::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool CheckConnectivityHostInfo::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string CheckConnectivityHostInfo::GetHostName() const
{
    return m_hostName;
}

void CheckConnectivityHostInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool CheckConnectivityHostInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string CheckConnectivityHostInfo::GetDockerVersion() const
{
    return m_dockerVersion;
}

void CheckConnectivityHostInfo::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool CheckConnectivityHostInfo::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string CheckConnectivityHostInfo::GetDockerFileSystemDriver() const
{
    return m_dockerFileSystemDriver;
}

void CheckConnectivityHostInfo::SetDockerFileSystemDriver(const string& _dockerFileSystemDriver)
{
    m_dockerFileSystemDriver = _dockerFileSystemDriver;
    m_dockerFileSystemDriverHasBeenSet = true;
}

bool CheckConnectivityHostInfo::DockerFileSystemDriverHasBeenSet() const
{
    return m_dockerFileSystemDriverHasBeenSet;
}

string CheckConnectivityHostInfo::GetStatus() const
{
    return m_status;
}

void CheckConnectivityHostInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CheckConnectivityHostInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool CheckConnectivityHostInfo::GetIsContainerd() const
{
    return m_isContainerd;
}

void CheckConnectivityHostInfo::SetIsContainerd(const bool& _isContainerd)
{
    m_isContainerd = _isContainerd;
    m_isContainerdHasBeenSet = true;
}

bool CheckConnectivityHostInfo::IsContainerdHasBeenSet() const
{
    return m_isContainerdHasBeenSet;
}

string CheckConnectivityHostInfo::GetMachineType() const
{
    return m_machineType;
}

void CheckConnectivityHostInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool CheckConnectivityHostInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string CheckConnectivityHostInfo::GetPublicIp() const
{
    return m_publicIp;
}

void CheckConnectivityHostInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool CheckConnectivityHostInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string CheckConnectivityHostInfo::GetUuid() const
{
    return m_uuid;
}

void CheckConnectivityHostInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool CheckConnectivityHostInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string CheckConnectivityHostInfo::GetInstanceId() const
{
    return m_instanceId;
}

void CheckConnectivityHostInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CheckConnectivityHostInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CheckConnectivityHostInfo::GetHostRegionId() const
{
    return m_hostRegionId;
}

void CheckConnectivityHostInfo::SetHostRegionId(const int64_t& _hostRegionId)
{
    m_hostRegionId = _hostRegionId;
    m_hostRegionIdHasBeenSet = true;
}

bool CheckConnectivityHostInfo::HostRegionIdHasBeenSet() const
{
    return m_hostRegionIdHasBeenSet;
}

string CheckConnectivityHostInfo::GetHostRegion() const
{
    return m_hostRegion;
}

void CheckConnectivityHostInfo::SetHostRegion(const string& _hostRegion)
{
    m_hostRegion = _hostRegion;
    m_hostRegionHasBeenSet = true;
}

bool CheckConnectivityHostInfo::HostRegionHasBeenSet() const
{
    return m_hostRegionHasBeenSet;
}

ProjectInfo CheckConnectivityHostInfo::GetProject() const
{
    return m_project;
}

void CheckConnectivityHostInfo::SetProject(const ProjectInfo& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool CheckConnectivityHostInfo::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<Tags> CheckConnectivityHostInfo::GetTags() const
{
    return m_tags;
}

void CheckConnectivityHostInfo::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CheckConnectivityHostInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CheckConnectivityHostInfo::GetClusterId() const
{
    return m_clusterId;
}

void CheckConnectivityHostInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CheckConnectivityHostInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CheckConnectivityHostInfo::GetClusterName() const
{
    return m_clusterName;
}

void CheckConnectivityHostInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CheckConnectivityHostInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

