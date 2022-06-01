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

#include <tencentcloud/tke/v20180525/model/AddExistedInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AddExistedInstancesRequest::AddExistedInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_nodePoolHasBeenSet(false),
    m_skipValidateOptionsHasBeenSet(false),
    m_instanceAdvancedSettingsOverridesHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

string AddExistedInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodePoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodePool.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skipValidateOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipValidateOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skipValidateOptions.begin(); itr != m_skipValidateOptions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceAdvancedSettingsOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettingsOverrides";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceAdvancedSettingsOverrides.begin(); itr != m_instanceAdvancedSettingsOverrides.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddExistedInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddExistedInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddExistedInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> AddExistedInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void AddExistedInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool AddExistedInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

InstanceAdvancedSettings AddExistedInstancesRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void AddExistedInstancesRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool AddExistedInstancesRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

EnhancedService AddExistedInstancesRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void AddExistedInstancesRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool AddExistedInstancesRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

LoginSettings AddExistedInstancesRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void AddExistedInstancesRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool AddExistedInstancesRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

string AddExistedInstancesRequest::GetHostName() const
{
    return m_hostName;
}

void AddExistedInstancesRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool AddExistedInstancesRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

vector<string> AddExistedInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void AddExistedInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool AddExistedInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

NodePoolOption AddExistedInstancesRequest::GetNodePool() const
{
    return m_nodePool;
}

void AddExistedInstancesRequest::SetNodePool(const NodePoolOption& _nodePool)
{
    m_nodePool = _nodePool;
    m_nodePoolHasBeenSet = true;
}

bool AddExistedInstancesRequest::NodePoolHasBeenSet() const
{
    return m_nodePoolHasBeenSet;
}

vector<string> AddExistedInstancesRequest::GetSkipValidateOptions() const
{
    return m_skipValidateOptions;
}

void AddExistedInstancesRequest::SetSkipValidateOptions(const vector<string>& _skipValidateOptions)
{
    m_skipValidateOptions = _skipValidateOptions;
    m_skipValidateOptionsHasBeenSet = true;
}

bool AddExistedInstancesRequest::SkipValidateOptionsHasBeenSet() const
{
    return m_skipValidateOptionsHasBeenSet;
}

vector<InstanceAdvancedSettings> AddExistedInstancesRequest::GetInstanceAdvancedSettingsOverrides() const
{
    return m_instanceAdvancedSettingsOverrides;
}

void AddExistedInstancesRequest::SetInstanceAdvancedSettingsOverrides(const vector<InstanceAdvancedSettings>& _instanceAdvancedSettingsOverrides)
{
    m_instanceAdvancedSettingsOverrides = _instanceAdvancedSettingsOverrides;
    m_instanceAdvancedSettingsOverridesHasBeenSet = true;
}

bool AddExistedInstancesRequest::InstanceAdvancedSettingsOverridesHasBeenSet() const
{
    return m_instanceAdvancedSettingsOverridesHasBeenSet;
}

string AddExistedInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void AddExistedInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AddExistedInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}


