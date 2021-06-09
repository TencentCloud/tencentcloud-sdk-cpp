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

#include <tencentcloud/emr/v20190103/model/RunJobFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

RunJobFlowRequest::RunJobFlowRequest() :
    m_nameHasBeenSet(false),
    m_createClusterHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_instancePolicyHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_securityClusterFlagHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_bootstrapActionsHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_applicationRoleHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceHasBeenSet(false)
{
}

string RunJobFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createCluster, allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instancePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instancePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_securityClusterFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityClusterFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_securityClusterFlag, allocator);
    }

    if (m_softwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bootstrapActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BootstrapActions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bootstrapActions.begin(); itr != m_bootstrapActions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_configurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configurations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configurations.begin(); itr != m_configurations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logUri.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationRole.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instance.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunJobFlowRequest::GetName() const
{
    return m_name;
}

void RunJobFlowRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RunJobFlowRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool RunJobFlowRequest::GetCreateCluster() const
{
    return m_createCluster;
}

void RunJobFlowRequest::SetCreateCluster(const bool& _createCluster)
{
    m_createCluster = _createCluster;
    m_createClusterHasBeenSet = true;
}

bool RunJobFlowRequest::CreateClusterHasBeenSet() const
{
    return m_createClusterHasBeenSet;
}

vector<Step> RunJobFlowRequest::GetSteps() const
{
    return m_steps;
}

void RunJobFlowRequest::SetSteps(const vector<Step>& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool RunJobFlowRequest::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

string RunJobFlowRequest::GetInstancePolicy() const
{
    return m_instancePolicy;
}

void RunJobFlowRequest::SetInstancePolicy(const string& _instancePolicy)
{
    m_instancePolicy = _instancePolicy;
    m_instancePolicyHasBeenSet = true;
}

bool RunJobFlowRequest::InstancePolicyHasBeenSet() const
{
    return m_instancePolicyHasBeenSet;
}

string RunJobFlowRequest::GetProductVersion() const
{
    return m_productVersion;
}

void RunJobFlowRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool RunJobFlowRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

bool RunJobFlowRequest::GetSecurityClusterFlag() const
{
    return m_securityClusterFlag;
}

void RunJobFlowRequest::SetSecurityClusterFlag(const bool& _securityClusterFlag)
{
    m_securityClusterFlag = _securityClusterFlag;
    m_securityClusterFlagHasBeenSet = true;
}

bool RunJobFlowRequest::SecurityClusterFlagHasBeenSet() const
{
    return m_securityClusterFlagHasBeenSet;
}

vector<string> RunJobFlowRequest::GetSoftware() const
{
    return m_software;
}

void RunJobFlowRequest::SetSoftware(const vector<string>& _software)
{
    m_software = _software;
    m_softwareHasBeenSet = true;
}

bool RunJobFlowRequest::SoftwareHasBeenSet() const
{
    return m_softwareHasBeenSet;
}

vector<BootstrapAction> RunJobFlowRequest::GetBootstrapActions() const
{
    return m_bootstrapActions;
}

void RunJobFlowRequest::SetBootstrapActions(const vector<BootstrapAction>& _bootstrapActions)
{
    m_bootstrapActions = _bootstrapActions;
    m_bootstrapActionsHasBeenSet = true;
}

bool RunJobFlowRequest::BootstrapActionsHasBeenSet() const
{
    return m_bootstrapActionsHasBeenSet;
}

vector<Configuration> RunJobFlowRequest::GetConfigurations() const
{
    return m_configurations;
}

void RunJobFlowRequest::SetConfigurations(const vector<Configuration>& _configurations)
{
    m_configurations = _configurations;
    m_configurationsHasBeenSet = true;
}

bool RunJobFlowRequest::ConfigurationsHasBeenSet() const
{
    return m_configurationsHasBeenSet;
}

string RunJobFlowRequest::GetLogUri() const
{
    return m_logUri;
}

void RunJobFlowRequest::SetLogUri(const string& _logUri)
{
    m_logUri = _logUri;
    m_logUriHasBeenSet = true;
}

bool RunJobFlowRequest::LogUriHasBeenSet() const
{
    return m_logUriHasBeenSet;
}

string RunJobFlowRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RunJobFlowRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RunJobFlowRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RunJobFlowRequest::GetApplicationRole() const
{
    return m_applicationRole;
}

void RunJobFlowRequest::SetApplicationRole(const string& _applicationRole)
{
    m_applicationRole = _applicationRole;
    m_applicationRoleHasBeenSet = true;
}

bool RunJobFlowRequest::ApplicationRoleHasBeenSet() const
{
    return m_applicationRoleHasBeenSet;
}

string RunJobFlowRequest::GetClientToken() const
{
    return m_clientToken;
}

void RunJobFlowRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool RunJobFlowRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

ClusterSetting RunJobFlowRequest::GetInstance() const
{
    return m_instance;
}

void RunJobFlowRequest::SetInstance(const ClusterSetting& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool RunJobFlowRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}


