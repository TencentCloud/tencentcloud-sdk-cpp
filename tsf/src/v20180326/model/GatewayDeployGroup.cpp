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

#include <tencentcloud/tsf/v20180326/model/GatewayDeployGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GatewayDeployGroup::GatewayDeployGroup() :
    m_deployGroupIdHasBeenSet(false),
    m_deployGroupNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_groupStatusHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

CoreInternalOutcome GatewayDeployGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployGroupId") && !value["DeployGroupId"].IsNull())
    {
        if (!value["DeployGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.DeployGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployGroupId = string(value["DeployGroupId"].GetString());
        m_deployGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DeployGroupName") && !value["DeployGroupName"].IsNull())
    {
        if (!value["DeployGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.DeployGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployGroupName = string(value["DeployGroupName"].GetString());
        m_deployGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupStatus") && !value["GroupStatus"].IsNull())
    {
        if (!value["GroupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.GroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupStatus = string(value["GroupStatus"].GetString());
        m_groupStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDeployGroup.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayDeployGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

}


string GatewayDeployGroup::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void GatewayDeployGroup::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool GatewayDeployGroup::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

string GatewayDeployGroup::GetDeployGroupName() const
{
    return m_deployGroupName;
}

void GatewayDeployGroup::SetDeployGroupName(const string& _deployGroupName)
{
    m_deployGroupName = _deployGroupName;
    m_deployGroupNameHasBeenSet = true;
}

bool GatewayDeployGroup::DeployGroupNameHasBeenSet() const
{
    return m_deployGroupNameHasBeenSet;
}

string GatewayDeployGroup::GetApplicationId() const
{
    return m_applicationId;
}

void GatewayDeployGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool GatewayDeployGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string GatewayDeployGroup::GetApplicationName() const
{
    return m_applicationName;
}

void GatewayDeployGroup::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool GatewayDeployGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string GatewayDeployGroup::GetApplicationType() const
{
    return m_applicationType;
}

void GatewayDeployGroup::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool GatewayDeployGroup::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string GatewayDeployGroup::GetGroupStatus() const
{
    return m_groupStatus;
}

void GatewayDeployGroup::SetGroupStatus(const string& _groupStatus)
{
    m_groupStatus = _groupStatus;
    m_groupStatusHasBeenSet = true;
}

bool GatewayDeployGroup::GroupStatusHasBeenSet() const
{
    return m_groupStatusHasBeenSet;
}

string GatewayDeployGroup::GetClusterType() const
{
    return m_clusterType;
}

void GatewayDeployGroup::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool GatewayDeployGroup::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

