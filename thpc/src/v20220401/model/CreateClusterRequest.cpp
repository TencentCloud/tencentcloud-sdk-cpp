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

#include <tencentcloud/thpc/v20220401/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_placementHasBeenSet(false),
    m_managerNodeHasBeenSet(false),
    m_managerNodeCountHasBeenSet(false),
    m_computeNodeHasBeenSet(false),
    m_computeNodeCountHasBeenSet(false),
    m_schedulerTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_storageOptionHasBeenSet(false),
    m_loginNodeHasBeenSet(false),
    m_loginNodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoScalingTypeHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_managerNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_managerNode.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_managerNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_managerNodeCount, allocator);
    }

    if (m_computeNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeNode.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_computeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_computeNodeCount, allocator);
    }

    if (m_schedulerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loginNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginNode.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loginNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loginNodeCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoScalingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Placement CreateClusterRequest::GetPlacement() const
{
    return m_placement;
}

void CreateClusterRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateClusterRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

ManagerNode CreateClusterRequest::GetManagerNode() const
{
    return m_managerNode;
}

void CreateClusterRequest::SetManagerNode(const ManagerNode& _managerNode)
{
    m_managerNode = _managerNode;
    m_managerNodeHasBeenSet = true;
}

bool CreateClusterRequest::ManagerNodeHasBeenSet() const
{
    return m_managerNodeHasBeenSet;
}

int64_t CreateClusterRequest::GetManagerNodeCount() const
{
    return m_managerNodeCount;
}

void CreateClusterRequest::SetManagerNodeCount(const int64_t& _managerNodeCount)
{
    m_managerNodeCount = _managerNodeCount;
    m_managerNodeCountHasBeenSet = true;
}

bool CreateClusterRequest::ManagerNodeCountHasBeenSet() const
{
    return m_managerNodeCountHasBeenSet;
}

ComputeNode CreateClusterRequest::GetComputeNode() const
{
    return m_computeNode;
}

void CreateClusterRequest::SetComputeNode(const ComputeNode& _computeNode)
{
    m_computeNode = _computeNode;
    m_computeNodeHasBeenSet = true;
}

bool CreateClusterRequest::ComputeNodeHasBeenSet() const
{
    return m_computeNodeHasBeenSet;
}

int64_t CreateClusterRequest::GetComputeNodeCount() const
{
    return m_computeNodeCount;
}

void CreateClusterRequest::SetComputeNodeCount(const int64_t& _computeNodeCount)
{
    m_computeNodeCount = _computeNodeCount;
    m_computeNodeCountHasBeenSet = true;
}

bool CreateClusterRequest::ComputeNodeCountHasBeenSet() const
{
    return m_computeNodeCountHasBeenSet;
}

string CreateClusterRequest::GetSchedulerType() const
{
    return m_schedulerType;
}

void CreateClusterRequest::SetSchedulerType(const string& _schedulerType)
{
    m_schedulerType = _schedulerType;
    m_schedulerTypeHasBeenSet = true;
}

bool CreateClusterRequest::SchedulerTypeHasBeenSet() const
{
    return m_schedulerTypeHasBeenSet;
}

string CreateClusterRequest::GetImageId() const
{
    return m_imageId;
}

void CreateClusterRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateClusterRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

VirtualPrivateCloud CreateClusterRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void CreateClusterRequest::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool CreateClusterRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

LoginSettings CreateClusterRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateClusterRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateClusterRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> CreateClusterRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateClusterRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateClusterRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateClusterRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateClusterRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateClusterRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

bool CreateClusterRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateClusterRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateClusterRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateClusterRequest::GetAccountType() const
{
    return m_accountType;
}

void CreateClusterRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool CreateClusterRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string CreateClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

StorageOption CreateClusterRequest::GetStorageOption() const
{
    return m_storageOption;
}

void CreateClusterRequest::SetStorageOption(const StorageOption& _storageOption)
{
    m_storageOption = _storageOption;
    m_storageOptionHasBeenSet = true;
}

bool CreateClusterRequest::StorageOptionHasBeenSet() const
{
    return m_storageOptionHasBeenSet;
}

LoginNode CreateClusterRequest::GetLoginNode() const
{
    return m_loginNode;
}

void CreateClusterRequest::SetLoginNode(const LoginNode& _loginNode)
{
    m_loginNode = _loginNode;
    m_loginNodeHasBeenSet = true;
}

bool CreateClusterRequest::LoginNodeHasBeenSet() const
{
    return m_loginNodeHasBeenSet;
}

int64_t CreateClusterRequest::GetLoginNodeCount() const
{
    return m_loginNodeCount;
}

void CreateClusterRequest::SetLoginNodeCount(const int64_t& _loginNodeCount)
{
    m_loginNodeCount = _loginNodeCount;
    m_loginNodeCountHasBeenSet = true;
}

bool CreateClusterRequest::LoginNodeCountHasBeenSet() const
{
    return m_loginNodeCountHasBeenSet;
}

vector<Tag> CreateClusterRequest::GetTags() const
{
    return m_tags;
}

void CreateClusterRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateClusterRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateClusterRequest::GetAutoScalingType() const
{
    return m_autoScalingType;
}

void CreateClusterRequest::SetAutoScalingType(const string& _autoScalingType)
{
    m_autoScalingType = _autoScalingType;
    m_autoScalingTypeHasBeenSet = true;
}

bool CreateClusterRequest::AutoScalingTypeHasBeenSet() const
{
    return m_autoScalingTypeHasBeenSet;
}


