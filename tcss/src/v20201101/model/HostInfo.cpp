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

#include <tencentcloud/tcss/v20201101/model/HostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

HostInfo::HostInfo() :
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_dockerFileSystemDriverHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isContainerdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_regionIDHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterAccessedStatusHasBeenSet(false),
    m_chargeCoresCntHasBeenSet(false),
    m_defendStatusHasBeenSet(false),
    m_coresCntHasBeenSet(false)
{
}

CoreInternalOutcome HostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("DockerFileSystemDriver") && !value["DockerFileSystemDriver"].IsNull())
    {
        if (!value["DockerFileSystemDriver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.DockerFileSystemDriver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerFileSystemDriver = string(value["DockerFileSystemDriver"].GetString());
        m_dockerFileSystemDriverHasBeenSet = true;
    }

    if (value.HasMember("ImageCnt") && !value["ImageCnt"].IsNull())
    {
        if (!value["ImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = value["ImageCnt"].GetUint64();
        m_imageCntHasBeenSet = true;
    }

    if (value.HasMember("ContainerCnt") && !value["ContainerCnt"].IsNull())
    {
        if (!value["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = value["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsContainerd") && !value["IsContainerd"].IsNull())
    {
        if (!value["IsContainerd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.IsContainerd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isContainerd = value["IsContainerd"].GetBool();
        m_isContainerdHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("RegionID") && !value["RegionID"].IsNull())
    {
        if (!value["RegionID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.RegionID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionID = value["RegionID"].GetInt64();
        m_regionIDHasBeenSet = true;
    }

    if (value.HasMember("Project") && !value["Project"].IsNull())
    {
        if (!value["Project"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.Project` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `HostInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
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

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterAccessedStatus") && !value["ClusterAccessedStatus"].IsNull())
    {
        if (!value["ClusterAccessedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ClusterAccessedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterAccessedStatus = string(value["ClusterAccessedStatus"].GetString());
        m_clusterAccessedStatusHasBeenSet = true;
    }

    if (value.HasMember("ChargeCoresCnt") && !value["ChargeCoresCnt"].IsNull())
    {
        if (!value["ChargeCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ChargeCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCoresCnt = value["ChargeCoresCnt"].GetUint64();
        m_chargeCoresCntHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }

    if (value.HasMember("CoresCnt") && !value["CoresCnt"].IsNull())
    {
        if (!value["CoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.CoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCnt = value["CoresCnt"].GetUint64();
        m_coresCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
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

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
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

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionID, allocator);
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

    if (m_clusterAccessedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAccessedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterAccessedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCoresCnt, allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_coresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCnt, allocator);
    }

}


string HostInfo::GetHostID() const
{
    return m_hostID;
}

void HostInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool HostInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string HostInfo::GetHostIP() const
{
    return m_hostIP;
}

void HostInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool HostInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string HostInfo::GetHostName() const
{
    return m_hostName;
}

void HostInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool HostInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string HostInfo::GetGroup() const
{
    return m_group;
}

void HostInfo::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool HostInfo::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string HostInfo::GetDockerVersion() const
{
    return m_dockerVersion;
}

void HostInfo::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool HostInfo::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string HostInfo::GetDockerFileSystemDriver() const
{
    return m_dockerFileSystemDriver;
}

void HostInfo::SetDockerFileSystemDriver(const string& _dockerFileSystemDriver)
{
    m_dockerFileSystemDriver = _dockerFileSystemDriver;
    m_dockerFileSystemDriverHasBeenSet = true;
}

bool HostInfo::DockerFileSystemDriverHasBeenSet() const
{
    return m_dockerFileSystemDriverHasBeenSet;
}

uint64_t HostInfo::GetImageCnt() const
{
    return m_imageCnt;
}

void HostInfo::SetImageCnt(const uint64_t& _imageCnt)
{
    m_imageCnt = _imageCnt;
    m_imageCntHasBeenSet = true;
}

bool HostInfo::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t HostInfo::GetContainerCnt() const
{
    return m_containerCnt;
}

void HostInfo::SetContainerCnt(const uint64_t& _containerCnt)
{
    m_containerCnt = _containerCnt;
    m_containerCntHasBeenSet = true;
}

bool HostInfo::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

string HostInfo::GetStatus() const
{
    return m_status;
}

void HostInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HostInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool HostInfo::GetIsContainerd() const
{
    return m_isContainerd;
}

void HostInfo::SetIsContainerd(const bool& _isContainerd)
{
    m_isContainerd = _isContainerd;
    m_isContainerdHasBeenSet = true;
}

bool HostInfo::IsContainerdHasBeenSet() const
{
    return m_isContainerdHasBeenSet;
}

string HostInfo::GetMachineType() const
{
    return m_machineType;
}

void HostInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool HostInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string HostInfo::GetPublicIp() const
{
    return m_publicIp;
}

void HostInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool HostInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string HostInfo::GetUuid() const
{
    return m_uuid;
}

void HostInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool HostInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string HostInfo::GetInstanceID() const
{
    return m_instanceID;
}

void HostInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool HostInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

int64_t HostInfo::GetRegionID() const
{
    return m_regionID;
}

void HostInfo::SetRegionID(const int64_t& _regionID)
{
    m_regionID = _regionID;
    m_regionIDHasBeenSet = true;
}

bool HostInfo::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}

ProjectInfo HostInfo::GetProject() const
{
    return m_project;
}

void HostInfo::SetProject(const ProjectInfo& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool HostInfo::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<TagInfo> HostInfo::GetTags() const
{
    return m_tags;
}

void HostInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool HostInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string HostInfo::GetClusterID() const
{
    return m_clusterID;
}

void HostInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool HostInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string HostInfo::GetClusterName() const
{
    return m_clusterName;
}

void HostInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool HostInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string HostInfo::GetClusterAccessedStatus() const
{
    return m_clusterAccessedStatus;
}

void HostInfo::SetClusterAccessedStatus(const string& _clusterAccessedStatus)
{
    m_clusterAccessedStatus = _clusterAccessedStatus;
    m_clusterAccessedStatusHasBeenSet = true;
}

bool HostInfo::ClusterAccessedStatusHasBeenSet() const
{
    return m_clusterAccessedStatusHasBeenSet;
}

uint64_t HostInfo::GetChargeCoresCnt() const
{
    return m_chargeCoresCnt;
}

void HostInfo::SetChargeCoresCnt(const uint64_t& _chargeCoresCnt)
{
    m_chargeCoresCnt = _chargeCoresCnt;
    m_chargeCoresCntHasBeenSet = true;
}

bool HostInfo::ChargeCoresCntHasBeenSet() const
{
    return m_chargeCoresCntHasBeenSet;
}

string HostInfo::GetDefendStatus() const
{
    return m_defendStatus;
}

void HostInfo::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool HostInfo::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

uint64_t HostInfo::GetCoresCnt() const
{
    return m_coresCnt;
}

void HostInfo::SetCoresCnt(const uint64_t& _coresCnt)
{
    m_coresCnt = _coresCnt;
    m_coresCntHasBeenSet = true;
}

bool HostInfo::CoresCntHasBeenSet() const
{
    return m_coresCntHasBeenSet;
}

