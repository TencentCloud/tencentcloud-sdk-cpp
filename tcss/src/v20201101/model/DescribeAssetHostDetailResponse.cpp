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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetHostDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetHostDetailResponse::DescribeAssetHostDetailResponse() :
    m_uUIDHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_dockerAPIVersionHasBeenSet(false),
    m_dockerGoVersionHasBeenSet(false),
    m_dockerFileSystemDriverHasBeenSet(false),
    m_dockerRootDirHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_k8sMasterIPHasBeenSet(false),
    m_k8sVersionHasBeenSet(false),
    m_kubeProxyVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isContainerdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_regionIDHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterAccessedStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetHostDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("UUID") && !rsp["UUID"].IsNull())
    {
        if (!rsp["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(rsp["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("HostName") && !rsp["HostName"].IsNull())
    {
        if (!rsp["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(rsp["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (rsp.HasMember("Group") && !rsp["Group"].IsNull())
    {
        if (!rsp["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(rsp["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (rsp.HasMember("HostIP") && !rsp["HostIP"].IsNull())
    {
        if (!rsp["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(rsp["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (rsp.HasMember("OsName") && !rsp["OsName"].IsNull())
    {
        if (!rsp["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(rsp["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (rsp.HasMember("AgentVersion") && !rsp["AgentVersion"].IsNull())
    {
        if (!rsp["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(rsp["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (rsp.HasMember("KernelVersion") && !rsp["KernelVersion"].IsNull())
    {
        if (!rsp["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(rsp["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DockerVersion") && !rsp["DockerVersion"].IsNull())
    {
        if (!rsp["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(rsp["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DockerAPIVersion") && !rsp["DockerAPIVersion"].IsNull())
    {
        if (!rsp["DockerAPIVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerAPIVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerAPIVersion = string(rsp["DockerAPIVersion"].GetString());
        m_dockerAPIVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DockerGoVersion") && !rsp["DockerGoVersion"].IsNull())
    {
        if (!rsp["DockerGoVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerGoVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerGoVersion = string(rsp["DockerGoVersion"].GetString());
        m_dockerGoVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DockerFileSystemDriver") && !rsp["DockerFileSystemDriver"].IsNull())
    {
        if (!rsp["DockerFileSystemDriver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerFileSystemDriver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerFileSystemDriver = string(rsp["DockerFileSystemDriver"].GetString());
        m_dockerFileSystemDriverHasBeenSet = true;
    }

    if (rsp.HasMember("DockerRootDir") && !rsp["DockerRootDir"].IsNull())
    {
        if (!rsp["DockerRootDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerRootDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerRootDir = string(rsp["DockerRootDir"].GetString());
        m_dockerRootDirHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCnt") && !rsp["ImageCnt"].IsNull())
    {
        if (!rsp["ImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = rsp["ImageCnt"].GetUint64();
        m_imageCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerCnt") && !rsp["ContainerCnt"].IsNull())
    {
        if (!rsp["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = rsp["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (rsp.HasMember("K8sMasterIP") && !rsp["K8sMasterIP"].IsNull())
    {
        if (!rsp["K8sMasterIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sMasterIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8sMasterIP = string(rsp["K8sMasterIP"].GetString());
        m_k8sMasterIPHasBeenSet = true;
    }

    if (rsp.HasMember("K8sVersion") && !rsp["K8sVersion"].IsNull())
    {
        if (!rsp["K8sVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8sVersion = string(rsp["K8sVersion"].GetString());
        m_k8sVersionHasBeenSet = true;
    }

    if (rsp.HasMember("KubeProxyVersion") && !rsp["KubeProxyVersion"].IsNull())
    {
        if (!rsp["KubeProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubeProxyVersion = string(rsp["KubeProxyVersion"].GetString());
        m_kubeProxyVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("IsContainerd") && !rsp["IsContainerd"].IsNull())
    {
        if (!rsp["IsContainerd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsContainerd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isContainerd = rsp["IsContainerd"].GetBool();
        m_isContainerdHasBeenSet = true;
    }

    if (rsp.HasMember("MachineType") && !rsp["MachineType"].IsNull())
    {
        if (!rsp["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(rsp["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PublicIp") && !rsp["PublicIp"].IsNull())
    {
        if (!rsp["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(rsp["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceID") && !rsp["InstanceID"].IsNull())
    {
        if (!rsp["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(rsp["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (rsp.HasMember("RegionID") && !rsp["RegionID"].IsNull())
    {
        if (!rsp["RegionID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionID = rsp["RegionID"].GetInt64();
        m_regionIDHasBeenSet = true;
    }

    if (rsp.HasMember("Project") && !rsp["Project"].IsNull())
    {
        if (!rsp["Project"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Project` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_project.Deserialize(rsp["Project"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
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

    if (rsp.HasMember("ClusterID") && !rsp["ClusterID"].IsNull())
    {
        if (!rsp["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(rsp["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterAccessedStatus") && !rsp["ClusterAccessedStatus"].IsNull())
    {
        if (!rsp["ClusterAccessedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAccessedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterAccessedStatus = string(rsp["ClusterAccessedStatus"].GetString());
        m_clusterAccessedStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetHostDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerAPIVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerAPIVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerAPIVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerGoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerGoVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerGoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerFileSystemDriverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerFileSystemDriver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerFileSystemDriver.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerRootDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerRootDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerRootDir.c_str(), allocator).Move(), allocator);
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

    if (m_k8sMasterIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sMasterIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8sMasterIP.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8sVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kubeProxyVersion.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAssetHostDetailResponse::GetUUID() const
{
    return m_uUID;
}

bool DescribeAssetHostDetailResponse::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeAssetHostDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetHostName() const
{
    return m_hostName;
}

bool DescribeAssetHostDetailResponse::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetGroup() const
{
    return m_group;
}

bool DescribeAssetHostDetailResponse::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetHostIP() const
{
    return m_hostIP;
}

bool DescribeAssetHostDetailResponse::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetOsName() const
{
    return m_osName;
}

bool DescribeAssetHostDetailResponse::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetAgentVersion() const
{
    return m_agentVersion;
}

bool DescribeAssetHostDetailResponse::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetKernelVersion() const
{
    return m_kernelVersion;
}

bool DescribeAssetHostDetailResponse::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetDockerVersion() const
{
    return m_dockerVersion;
}

bool DescribeAssetHostDetailResponse::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetDockerAPIVersion() const
{
    return m_dockerAPIVersion;
}

bool DescribeAssetHostDetailResponse::DockerAPIVersionHasBeenSet() const
{
    return m_dockerAPIVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetDockerGoVersion() const
{
    return m_dockerGoVersion;
}

bool DescribeAssetHostDetailResponse::DockerGoVersionHasBeenSet() const
{
    return m_dockerGoVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetDockerFileSystemDriver() const
{
    return m_dockerFileSystemDriver;
}

bool DescribeAssetHostDetailResponse::DockerFileSystemDriverHasBeenSet() const
{
    return m_dockerFileSystemDriverHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetDockerRootDir() const
{
    return m_dockerRootDir;
}

bool DescribeAssetHostDetailResponse::DockerRootDirHasBeenSet() const
{
    return m_dockerRootDirHasBeenSet;
}

uint64_t DescribeAssetHostDetailResponse::GetImageCnt() const
{
    return m_imageCnt;
}

bool DescribeAssetHostDetailResponse::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t DescribeAssetHostDetailResponse::GetContainerCnt() const
{
    return m_containerCnt;
}

bool DescribeAssetHostDetailResponse::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetK8sMasterIP() const
{
    return m_k8sMasterIP;
}

bool DescribeAssetHostDetailResponse::K8sMasterIPHasBeenSet() const
{
    return m_k8sMasterIPHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetK8sVersion() const
{
    return m_k8sVersion;
}

bool DescribeAssetHostDetailResponse::K8sVersionHasBeenSet() const
{
    return m_k8sVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetKubeProxyVersion() const
{
    return m_kubeProxyVersion;
}

bool DescribeAssetHostDetailResponse::KubeProxyVersionHasBeenSet() const
{
    return m_kubeProxyVersionHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAssetHostDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeAssetHostDetailResponse::GetIsContainerd() const
{
    return m_isContainerd;
}

bool DescribeAssetHostDetailResponse::IsContainerdHasBeenSet() const
{
    return m_isContainerdHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetMachineType() const
{
    return m_machineType;
}

bool DescribeAssetHostDetailResponse::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetPublicIp() const
{
    return m_publicIp;
}

bool DescribeAssetHostDetailResponse::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetInstanceID() const
{
    return m_instanceID;
}

bool DescribeAssetHostDetailResponse::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

int64_t DescribeAssetHostDetailResponse::GetRegionID() const
{
    return m_regionID;
}

bool DescribeAssetHostDetailResponse::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}

ProjectInfo DescribeAssetHostDetailResponse::GetProject() const
{
    return m_project;
}

bool DescribeAssetHostDetailResponse::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<TagInfo> DescribeAssetHostDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeAssetHostDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetClusterID() const
{
    return m_clusterID;
}

bool DescribeAssetHostDetailResponse::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeAssetHostDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeAssetHostDetailResponse::GetClusterAccessedStatus() const
{
    return m_clusterAccessedStatus;
}

bool DescribeAssetHostDetailResponse::ClusterAccessedStatusHasBeenSet() const
{
    return m_clusterAccessedStatusHasBeenSet;
}


