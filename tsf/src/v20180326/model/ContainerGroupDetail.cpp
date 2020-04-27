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

#include <tencentcloud/tsf/v20180326/model/ContainerGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

ContainerGroupDetail::ContainerGroupDetail() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_reponameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_lbIpHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_clusterIpHasBeenSet(false),
    m_nodePortHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false),
    m_protocolPortsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_groupResourceTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerGroupDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("Reponame") && !value["Reponame"].IsNull())
    {
        if (!value["Reponame"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.Reponame` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reponame = string(value["Reponame"].GetString());
        m_reponameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("LbIp") && !value["LbIp"].IsNull())
    {
        if (!value["LbIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.LbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lbIp = string(value["LbIp"].GetString());
        m_lbIpHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterIp") && !value["ClusterIp"].IsNull())
    {
        if (!value["ClusterIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ClusterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIp = string(value["ClusterIp"].GetString());
        m_clusterIpHasBeenSet = true;
    }

    if (value.HasMember("NodePort") && !value["NodePort"].IsNull())
    {
        if (!value["NodePort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.NodePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodePort = value["NodePort"].GetInt64();
        m_nodePortHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.MemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = string(value["MemLimit"].GetString());
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.AccessType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetUint64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateType") && !value["UpdateType"].IsNull())
    {
        if (!value["UpdateType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.UpdateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateType = value["UpdateType"].GetInt64();
        m_updateTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateIvl") && !value["UpdateIvl"].IsNull())
    {
        if (!value["UpdateIvl"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.UpdateIvl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateIvl = value["UpdateIvl"].GetInt64();
        m_updateIvlHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPorts") && !value["ProtocolPorts"].IsNull())
    {
        if (!value["ProtocolPorts"].IsArray())
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ProtocolPorts` is not array type"));

        const Value &tmpValue = value["ProtocolPorts"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtocolPort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocolPorts.push_back(item);
        }
        m_protocolPortsHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.Envs` is not array type"));

        const Value &tmpValue = value["Envs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Env item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("MemRequest") && !value["MemRequest"].IsNull())
    {
        if (!value["MemRequest"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.MemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memRequest = string(value["MemRequest"].GetString());
        m_memRequestHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("GroupResourceType") && !value["GroupResourceType"].IsNull())
    {
        if (!value["GroupResourceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.GroupResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupResourceType = string(value["GroupResourceType"].GetString());
        m_groupResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerGroupDetail.UpdatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = value["UpdatedTime"].GetInt64();
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerGroupDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_reponameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Reponame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_reponame.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_lbIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodePort, allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_memLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateIvlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateIvl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateIvl, allocator);
    }

    if (m_protocolPortsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProtocolPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPorts.begin(); itr != m_protocolPorts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_applicationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_memRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupResourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedTime, allocator);
    }

}


string ContainerGroupDetail::GetGroupId() const
{
    return m_groupId;
}

void ContainerGroupDetail::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ContainerGroupDetail::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ContainerGroupDetail::GetGroupName() const
{
    return m_groupName;
}

void ContainerGroupDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ContainerGroupDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t ContainerGroupDetail::GetInstanceNum() const
{
    return m_instanceNum;
}

void ContainerGroupDetail::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool ContainerGroupDetail::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t ContainerGroupDetail::GetCurrentNum() const
{
    return m_currentNum;
}

void ContainerGroupDetail::SetCurrentNum(const int64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool ContainerGroupDetail::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

string ContainerGroupDetail::GetCreateTime() const
{
    return m_createTime;
}

void ContainerGroupDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ContainerGroupDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ContainerGroupDetail::GetServer() const
{
    return m_server;
}

void ContainerGroupDetail::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool ContainerGroupDetail::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string ContainerGroupDetail::GetReponame() const
{
    return m_reponame;
}

void ContainerGroupDetail::SetReponame(const string& _reponame)
{
    m_reponame = _reponame;
    m_reponameHasBeenSet = true;
}

bool ContainerGroupDetail::ReponameHasBeenSet() const
{
    return m_reponameHasBeenSet;
}

string ContainerGroupDetail::GetTagName() const
{
    return m_tagName;
}

void ContainerGroupDetail::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool ContainerGroupDetail::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string ContainerGroupDetail::GetClusterId() const
{
    return m_clusterId;
}

void ContainerGroupDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ContainerGroupDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ContainerGroupDetail::GetClusterName() const
{
    return m_clusterName;
}

void ContainerGroupDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ContainerGroupDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ContainerGroupDetail::GetNamespaceId() const
{
    return m_namespaceId;
}

void ContainerGroupDetail::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ContainerGroupDetail::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ContainerGroupDetail::GetNamespaceName() const
{
    return m_namespaceName;
}

void ContainerGroupDetail::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ContainerGroupDetail::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ContainerGroupDetail::GetApplicationId() const
{
    return m_applicationId;
}

void ContainerGroupDetail::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ContainerGroupDetail::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ContainerGroupDetail::GetLbIp() const
{
    return m_lbIp;
}

void ContainerGroupDetail::SetLbIp(const string& _lbIp)
{
    m_lbIp = _lbIp;
    m_lbIpHasBeenSet = true;
}

bool ContainerGroupDetail::LbIpHasBeenSet() const
{
    return m_lbIpHasBeenSet;
}

string ContainerGroupDetail::GetApplicationType() const
{
    return m_applicationType;
}

void ContainerGroupDetail::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ContainerGroupDetail::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ContainerGroupDetail::GetClusterIp() const
{
    return m_clusterIp;
}

void ContainerGroupDetail::SetClusterIp(const string& _clusterIp)
{
    m_clusterIp = _clusterIp;
    m_clusterIpHasBeenSet = true;
}

bool ContainerGroupDetail::ClusterIpHasBeenSet() const
{
    return m_clusterIpHasBeenSet;
}

int64_t ContainerGroupDetail::GetNodePort() const
{
    return m_nodePort;
}

void ContainerGroupDetail::SetNodePort(const int64_t& _nodePort)
{
    m_nodePort = _nodePort;
    m_nodePortHasBeenSet = true;
}

bool ContainerGroupDetail::NodePortHasBeenSet() const
{
    return m_nodePortHasBeenSet;
}

string ContainerGroupDetail::GetCpuLimit() const
{
    return m_cpuLimit;
}

void ContainerGroupDetail::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool ContainerGroupDetail::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string ContainerGroupDetail::GetMemLimit() const
{
    return m_memLimit;
}

void ContainerGroupDetail::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool ContainerGroupDetail::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

uint64_t ContainerGroupDetail::GetAccessType() const
{
    return m_accessType;
}

void ContainerGroupDetail::SetAccessType(const uint64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ContainerGroupDetail::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

int64_t ContainerGroupDetail::GetUpdateType() const
{
    return m_updateType;
}

void ContainerGroupDetail::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool ContainerGroupDetail::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t ContainerGroupDetail::GetUpdateIvl() const
{
    return m_updateIvl;
}

void ContainerGroupDetail::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool ContainerGroupDetail::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}

vector<ProtocolPort> ContainerGroupDetail::GetProtocolPorts() const
{
    return m_protocolPorts;
}

void ContainerGroupDetail::SetProtocolPorts(const vector<ProtocolPort>& _protocolPorts)
{
    m_protocolPorts = _protocolPorts;
    m_protocolPortsHasBeenSet = true;
}

bool ContainerGroupDetail::ProtocolPortsHasBeenSet() const
{
    return m_protocolPortsHasBeenSet;
}

vector<Env> ContainerGroupDetail::GetEnvs() const
{
    return m_envs;
}

void ContainerGroupDetail::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ContainerGroupDetail::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

string ContainerGroupDetail::GetApplicationName() const
{
    return m_applicationName;
}

void ContainerGroupDetail::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ContainerGroupDetail::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ContainerGroupDetail::GetMessage() const
{
    return m_message;
}

void ContainerGroupDetail::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ContainerGroupDetail::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ContainerGroupDetail::GetStatus() const
{
    return m_status;
}

void ContainerGroupDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ContainerGroupDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ContainerGroupDetail::GetMicroserviceType() const
{
    return m_microserviceType;
}

void ContainerGroupDetail::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool ContainerGroupDetail::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string ContainerGroupDetail::GetCpuRequest() const
{
    return m_cpuRequest;
}

void ContainerGroupDetail::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool ContainerGroupDetail::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string ContainerGroupDetail::GetMemRequest() const
{
    return m_memRequest;
}

void ContainerGroupDetail::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool ContainerGroupDetail::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string ContainerGroupDetail::GetSubnetId() const
{
    return m_subnetId;
}

void ContainerGroupDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ContainerGroupDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ContainerGroupDetail::GetGroupResourceType() const
{
    return m_groupResourceType;
}

void ContainerGroupDetail::SetGroupResourceType(const string& _groupResourceType)
{
    m_groupResourceType = _groupResourceType;
    m_groupResourceTypeHasBeenSet = true;
}

bool ContainerGroupDetail::GroupResourceTypeHasBeenSet() const
{
    return m_groupResourceTypeHasBeenSet;
}

uint64_t ContainerGroupDetail::GetInstanceCount() const
{
    return m_instanceCount;
}

void ContainerGroupDetail::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ContainerGroupDetail::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t ContainerGroupDetail::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ContainerGroupDetail::SetUpdatedTime(const int64_t& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ContainerGroupDetail::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

