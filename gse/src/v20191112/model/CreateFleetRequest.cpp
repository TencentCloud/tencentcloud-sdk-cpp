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

#include <tencentcloud/gse/v20191112/model/CreateFleetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

CreateFleetRequest::CreateFleetRequest() :
    m_assetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inboundPermissionsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_fleetTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_newGameServerSessionProtectionPolicyHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false),
    m_runtimeConfigurationHasBeenSet(false),
    m_subNetIdHasBeenSet(false),
    m_gameServerSessionProtectionTimeLimitHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_systemDiskInfoHasBeenSet(false),
    m_dataDiskInfoHasBeenSet(false),
    m_ccnInfosHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false)
{
}

string CreateFleetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inboundPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundPermissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inboundPermissions.begin(); itr != m_inboundPermissions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_newGameServerSessionProtectionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewGameServerSessionProtectionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newGameServerSessionProtectionPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_peerVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCreationLimitPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreationLimitPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceCreationLimitPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_runtimeConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subNetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subNetId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionProtectionTimeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionProtectionTimeLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gameServerSessionProtectionTimeLimit, allocator);
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

    if (m_systemDiskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDiskInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataDiskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDiskInfo.begin(); itr != m_dataDiskInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ccnInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccnInfos.begin(); itr != m_ccnInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFleetRequest::GetAssetId() const
{
    return m_assetId;
}

void CreateFleetRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool CreateFleetRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string CreateFleetRequest::GetDescription() const
{
    return m_description;
}

void CreateFleetRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFleetRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<InboundPermission> CreateFleetRequest::GetInboundPermissions() const
{
    return m_inboundPermissions;
}

void CreateFleetRequest::SetInboundPermissions(const vector<InboundPermission>& _inboundPermissions)
{
    m_inboundPermissions = _inboundPermissions;
    m_inboundPermissionsHasBeenSet = true;
}

bool CreateFleetRequest::InboundPermissionsHasBeenSet() const
{
    return m_inboundPermissionsHasBeenSet;
}

string CreateFleetRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateFleetRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateFleetRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateFleetRequest::GetFleetType() const
{
    return m_fleetType;
}

void CreateFleetRequest::SetFleetType(const string& _fleetType)
{
    m_fleetType = _fleetType;
    m_fleetTypeHasBeenSet = true;
}

bool CreateFleetRequest::FleetTypeHasBeenSet() const
{
    return m_fleetTypeHasBeenSet;
}

string CreateFleetRequest::GetName() const
{
    return m_name;
}

void CreateFleetRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateFleetRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateFleetRequest::GetNewGameServerSessionProtectionPolicy() const
{
    return m_newGameServerSessionProtectionPolicy;
}

void CreateFleetRequest::SetNewGameServerSessionProtectionPolicy(const string& _newGameServerSessionProtectionPolicy)
{
    m_newGameServerSessionProtectionPolicy = _newGameServerSessionProtectionPolicy;
    m_newGameServerSessionProtectionPolicyHasBeenSet = true;
}

bool CreateFleetRequest::NewGameServerSessionProtectionPolicyHasBeenSet() const
{
    return m_newGameServerSessionProtectionPolicyHasBeenSet;
}

string CreateFleetRequest::GetPeerVpcId() const
{
    return m_peerVpcId;
}

void CreateFleetRequest::SetPeerVpcId(const string& _peerVpcId)
{
    m_peerVpcId = _peerVpcId;
    m_peerVpcIdHasBeenSet = true;
}

bool CreateFleetRequest::PeerVpcIdHasBeenSet() const
{
    return m_peerVpcIdHasBeenSet;
}

ResourceCreationLimitPolicy CreateFleetRequest::GetResourceCreationLimitPolicy() const
{
    return m_resourceCreationLimitPolicy;
}

void CreateFleetRequest::SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy)
{
    m_resourceCreationLimitPolicy = _resourceCreationLimitPolicy;
    m_resourceCreationLimitPolicyHasBeenSet = true;
}

bool CreateFleetRequest::ResourceCreationLimitPolicyHasBeenSet() const
{
    return m_resourceCreationLimitPolicyHasBeenSet;
}

RuntimeConfiguration CreateFleetRequest::GetRuntimeConfiguration() const
{
    return m_runtimeConfiguration;
}

void CreateFleetRequest::SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration)
{
    m_runtimeConfiguration = _runtimeConfiguration;
    m_runtimeConfigurationHasBeenSet = true;
}

bool CreateFleetRequest::RuntimeConfigurationHasBeenSet() const
{
    return m_runtimeConfigurationHasBeenSet;
}

string CreateFleetRequest::GetSubNetId() const
{
    return m_subNetId;
}

void CreateFleetRequest::SetSubNetId(const string& _subNetId)
{
    m_subNetId = _subNetId;
    m_subNetIdHasBeenSet = true;
}

bool CreateFleetRequest::SubNetIdHasBeenSet() const
{
    return m_subNetIdHasBeenSet;
}

int64_t CreateFleetRequest::GetGameServerSessionProtectionTimeLimit() const
{
    return m_gameServerSessionProtectionTimeLimit;
}

void CreateFleetRequest::SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit)
{
    m_gameServerSessionProtectionTimeLimit = _gameServerSessionProtectionTimeLimit;
    m_gameServerSessionProtectionTimeLimitHasBeenSet = true;
}

bool CreateFleetRequest::GameServerSessionProtectionTimeLimitHasBeenSet() const
{
    return m_gameServerSessionProtectionTimeLimitHasBeenSet;
}

vector<Tag> CreateFleetRequest::GetTags() const
{
    return m_tags;
}

void CreateFleetRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateFleetRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

DiskInfo CreateFleetRequest::GetSystemDiskInfo() const
{
    return m_systemDiskInfo;
}

void CreateFleetRequest::SetSystemDiskInfo(const DiskInfo& _systemDiskInfo)
{
    m_systemDiskInfo = _systemDiskInfo;
    m_systemDiskInfoHasBeenSet = true;
}

bool CreateFleetRequest::SystemDiskInfoHasBeenSet() const
{
    return m_systemDiskInfoHasBeenSet;
}

vector<DiskInfo> CreateFleetRequest::GetDataDiskInfo() const
{
    return m_dataDiskInfo;
}

void CreateFleetRequest::SetDataDiskInfo(const vector<DiskInfo>& _dataDiskInfo)
{
    m_dataDiskInfo = _dataDiskInfo;
    m_dataDiskInfoHasBeenSet = true;
}

bool CreateFleetRequest::DataDiskInfoHasBeenSet() const
{
    return m_dataDiskInfoHasBeenSet;
}

vector<CcnInfo> CreateFleetRequest::GetCcnInfos() const
{
    return m_ccnInfos;
}

void CreateFleetRequest::SetCcnInfos(const vector<CcnInfo>& _ccnInfos)
{
    m_ccnInfos = _ccnInfos;
    m_ccnInfosHasBeenSet = true;
}

bool CreateFleetRequest::CcnInfosHasBeenSet() const
{
    return m_ccnInfosHasBeenSet;
}

int64_t CreateFleetRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CreateFleetRequest::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CreateFleetRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}


