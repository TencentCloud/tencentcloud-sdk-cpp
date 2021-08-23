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

#include <tencentcloud/tsf/v20180326/model/VmGroupSimple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VmGroupSimple::VmGroupSimple() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_groupDescHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_groupResourceTypeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_deployDescHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

CoreInternalOutcome VmGroupSimple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupDesc") && !value["GroupDesc"].IsNull())
    {
        if (!value["GroupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.GroupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupDesc = string(value["GroupDesc"].GetString());
        m_groupDescHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StartupParameters") && !value["StartupParameters"].IsNull())
    {
        if (!value["StartupParameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.StartupParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupParameters = string(value["StartupParameters"].GetString());
        m_startupParametersHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupResourceType") && !value["GroupResourceType"].IsNull())
    {
        if (!value["GroupResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.GroupResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupResourceType = string(value["GroupResourceType"].GetString());
        m_groupResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.UpdatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = value["UpdatedTime"].GetInt64();
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployDesc") && !value["DeployDesc"].IsNull())
    {
        if (!value["DeployDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.DeployDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployDesc = string(value["DeployDesc"].GetString());
        m_deployDescHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupSimple.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VmGroupSimple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_startupParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedTime, allocator);
    }

    if (m_deployDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

}


string VmGroupSimple::GetGroupId() const
{
    return m_groupId;
}

void VmGroupSimple::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VmGroupSimple::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string VmGroupSimple::GetGroupName() const
{
    return m_groupName;
}

void VmGroupSimple::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool VmGroupSimple::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string VmGroupSimple::GetApplicationType() const
{
    return m_applicationType;
}

void VmGroupSimple::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool VmGroupSimple::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string VmGroupSimple::GetGroupDesc() const
{
    return m_groupDesc;
}

void VmGroupSimple::SetGroupDesc(const string& _groupDesc)
{
    m_groupDesc = _groupDesc;
    m_groupDescHasBeenSet = true;
}

bool VmGroupSimple::GroupDescHasBeenSet() const
{
    return m_groupDescHasBeenSet;
}

string VmGroupSimple::GetUpdateTime() const
{
    return m_updateTime;
}

void VmGroupSimple::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VmGroupSimple::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string VmGroupSimple::GetClusterId() const
{
    return m_clusterId;
}

void VmGroupSimple::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool VmGroupSimple::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string VmGroupSimple::GetStartupParameters() const
{
    return m_startupParameters;
}

void VmGroupSimple::SetStartupParameters(const string& _startupParameters)
{
    m_startupParameters = _startupParameters;
    m_startupParametersHasBeenSet = true;
}

bool VmGroupSimple::StartupParametersHasBeenSet() const
{
    return m_startupParametersHasBeenSet;
}

string VmGroupSimple::GetNamespaceId() const
{
    return m_namespaceId;
}

void VmGroupSimple::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool VmGroupSimple::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string VmGroupSimple::GetCreateTime() const
{
    return m_createTime;
}

void VmGroupSimple::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VmGroupSimple::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VmGroupSimple::GetClusterName() const
{
    return m_clusterName;
}

void VmGroupSimple::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool VmGroupSimple::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string VmGroupSimple::GetApplicationId() const
{
    return m_applicationId;
}

void VmGroupSimple::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool VmGroupSimple::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string VmGroupSimple::GetApplicationName() const
{
    return m_applicationName;
}

void VmGroupSimple::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool VmGroupSimple::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string VmGroupSimple::GetNamespaceName() const
{
    return m_namespaceName;
}

void VmGroupSimple::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool VmGroupSimple::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string VmGroupSimple::GetMicroserviceType() const
{
    return m_microserviceType;
}

void VmGroupSimple::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool VmGroupSimple::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string VmGroupSimple::GetGroupResourceType() const
{
    return m_groupResourceType;
}

void VmGroupSimple::SetGroupResourceType(const string& _groupResourceType)
{
    m_groupResourceType = _groupResourceType;
    m_groupResourceTypeHasBeenSet = true;
}

bool VmGroupSimple::GroupResourceTypeHasBeenSet() const
{
    return m_groupResourceTypeHasBeenSet;
}

int64_t VmGroupSimple::GetUpdatedTime() const
{
    return m_updatedTime;
}

void VmGroupSimple::SetUpdatedTime(const int64_t& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool VmGroupSimple::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string VmGroupSimple::GetDeployDesc() const
{
    return m_deployDesc;
}

void VmGroupSimple::SetDeployDesc(const string& _deployDesc)
{
    m_deployDesc = _deployDesc;
    m_deployDescHasBeenSet = true;
}

bool VmGroupSimple::DeployDescHasBeenSet() const
{
    return m_deployDescHasBeenSet;
}

string VmGroupSimple::GetAlias() const
{
    return m_alias;
}

void VmGroupSimple::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool VmGroupSimple::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

