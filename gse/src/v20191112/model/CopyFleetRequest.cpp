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

#include <tencentcloud/gse/v20191112/model/CopyFleetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

CopyFleetRequest::CopyFleetRequest() :
    m_fleetIdHasBeenSet(false),
    m_copyNumberHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inboundPermissionsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_fleetTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_newGameServerSessionProtectionPolicyHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false),
    m_runtimeConfigurationHasBeenSet(false),
    m_gameServerSessionProtectionTimeLimitHasBeenSet(false),
    m_selectedScalingTypeHasBeenSet(false),
    m_selectedCcnTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_systemDiskInfoHasBeenSet(false),
    m_dataDiskInfoHasBeenSet(false),
    m_selectedTimerTypeHasBeenSet(false),
    m_ccnInfosHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false)
{
}

string CopyFleetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_copyNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_copyNumber, allocator);
    }

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

    if (m_gameServerSessionProtectionTimeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionProtectionTimeLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gameServerSessionProtectionTimeLimit, allocator);
    }

    if (m_selectedScalingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedScalingType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectedScalingType.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedCcnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedCcnType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectedCcnType.c_str(), allocator).Move(), allocator);
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

    if (m_selectedTimerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTimerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectedTimerType.c_str(), allocator).Move(), allocator);
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


string CopyFleetRequest::GetFleetId() const
{
    return m_fleetId;
}

void CopyFleetRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool CopyFleetRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

int64_t CopyFleetRequest::GetCopyNumber() const
{
    return m_copyNumber;
}

void CopyFleetRequest::SetCopyNumber(const int64_t& _copyNumber)
{
    m_copyNumber = _copyNumber;
    m_copyNumberHasBeenSet = true;
}

bool CopyFleetRequest::CopyNumberHasBeenSet() const
{
    return m_copyNumberHasBeenSet;
}

string CopyFleetRequest::GetAssetId() const
{
    return m_assetId;
}

void CopyFleetRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool CopyFleetRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string CopyFleetRequest::GetDescription() const
{
    return m_description;
}

void CopyFleetRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CopyFleetRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<InboundPermission> CopyFleetRequest::GetInboundPermissions() const
{
    return m_inboundPermissions;
}

void CopyFleetRequest::SetInboundPermissions(const vector<InboundPermission>& _inboundPermissions)
{
    m_inboundPermissions = _inboundPermissions;
    m_inboundPermissionsHasBeenSet = true;
}

bool CopyFleetRequest::InboundPermissionsHasBeenSet() const
{
    return m_inboundPermissionsHasBeenSet;
}

string CopyFleetRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CopyFleetRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CopyFleetRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CopyFleetRequest::GetFleetType() const
{
    return m_fleetType;
}

void CopyFleetRequest::SetFleetType(const string& _fleetType)
{
    m_fleetType = _fleetType;
    m_fleetTypeHasBeenSet = true;
}

bool CopyFleetRequest::FleetTypeHasBeenSet() const
{
    return m_fleetTypeHasBeenSet;
}

string CopyFleetRequest::GetName() const
{
    return m_name;
}

void CopyFleetRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CopyFleetRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CopyFleetRequest::GetNewGameServerSessionProtectionPolicy() const
{
    return m_newGameServerSessionProtectionPolicy;
}

void CopyFleetRequest::SetNewGameServerSessionProtectionPolicy(const string& _newGameServerSessionProtectionPolicy)
{
    m_newGameServerSessionProtectionPolicy = _newGameServerSessionProtectionPolicy;
    m_newGameServerSessionProtectionPolicyHasBeenSet = true;
}

bool CopyFleetRequest::NewGameServerSessionProtectionPolicyHasBeenSet() const
{
    return m_newGameServerSessionProtectionPolicyHasBeenSet;
}

ResourceCreationLimitPolicy CopyFleetRequest::GetResourceCreationLimitPolicy() const
{
    return m_resourceCreationLimitPolicy;
}

void CopyFleetRequest::SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy)
{
    m_resourceCreationLimitPolicy = _resourceCreationLimitPolicy;
    m_resourceCreationLimitPolicyHasBeenSet = true;
}

bool CopyFleetRequest::ResourceCreationLimitPolicyHasBeenSet() const
{
    return m_resourceCreationLimitPolicyHasBeenSet;
}

RuntimeConfiguration CopyFleetRequest::GetRuntimeConfiguration() const
{
    return m_runtimeConfiguration;
}

void CopyFleetRequest::SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration)
{
    m_runtimeConfiguration = _runtimeConfiguration;
    m_runtimeConfigurationHasBeenSet = true;
}

bool CopyFleetRequest::RuntimeConfigurationHasBeenSet() const
{
    return m_runtimeConfigurationHasBeenSet;
}

int64_t CopyFleetRequest::GetGameServerSessionProtectionTimeLimit() const
{
    return m_gameServerSessionProtectionTimeLimit;
}

void CopyFleetRequest::SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit)
{
    m_gameServerSessionProtectionTimeLimit = _gameServerSessionProtectionTimeLimit;
    m_gameServerSessionProtectionTimeLimitHasBeenSet = true;
}

bool CopyFleetRequest::GameServerSessionProtectionTimeLimitHasBeenSet() const
{
    return m_gameServerSessionProtectionTimeLimitHasBeenSet;
}

string CopyFleetRequest::GetSelectedScalingType() const
{
    return m_selectedScalingType;
}

void CopyFleetRequest::SetSelectedScalingType(const string& _selectedScalingType)
{
    m_selectedScalingType = _selectedScalingType;
    m_selectedScalingTypeHasBeenSet = true;
}

bool CopyFleetRequest::SelectedScalingTypeHasBeenSet() const
{
    return m_selectedScalingTypeHasBeenSet;
}

string CopyFleetRequest::GetSelectedCcnType() const
{
    return m_selectedCcnType;
}

void CopyFleetRequest::SetSelectedCcnType(const string& _selectedCcnType)
{
    m_selectedCcnType = _selectedCcnType;
    m_selectedCcnTypeHasBeenSet = true;
}

bool CopyFleetRequest::SelectedCcnTypeHasBeenSet() const
{
    return m_selectedCcnTypeHasBeenSet;
}

vector<Tag> CopyFleetRequest::GetTags() const
{
    return m_tags;
}

void CopyFleetRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CopyFleetRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

DiskInfo CopyFleetRequest::GetSystemDiskInfo() const
{
    return m_systemDiskInfo;
}

void CopyFleetRequest::SetSystemDiskInfo(const DiskInfo& _systemDiskInfo)
{
    m_systemDiskInfo = _systemDiskInfo;
    m_systemDiskInfoHasBeenSet = true;
}

bool CopyFleetRequest::SystemDiskInfoHasBeenSet() const
{
    return m_systemDiskInfoHasBeenSet;
}

vector<DiskInfo> CopyFleetRequest::GetDataDiskInfo() const
{
    return m_dataDiskInfo;
}

void CopyFleetRequest::SetDataDiskInfo(const vector<DiskInfo>& _dataDiskInfo)
{
    m_dataDiskInfo = _dataDiskInfo;
    m_dataDiskInfoHasBeenSet = true;
}

bool CopyFleetRequest::DataDiskInfoHasBeenSet() const
{
    return m_dataDiskInfoHasBeenSet;
}

string CopyFleetRequest::GetSelectedTimerType() const
{
    return m_selectedTimerType;
}

void CopyFleetRequest::SetSelectedTimerType(const string& _selectedTimerType)
{
    m_selectedTimerType = _selectedTimerType;
    m_selectedTimerTypeHasBeenSet = true;
}

bool CopyFleetRequest::SelectedTimerTypeHasBeenSet() const
{
    return m_selectedTimerTypeHasBeenSet;
}

vector<CcnInfo> CopyFleetRequest::GetCcnInfos() const
{
    return m_ccnInfos;
}

void CopyFleetRequest::SetCcnInfos(const vector<CcnInfo>& _ccnInfos)
{
    m_ccnInfos = _ccnInfos;
    m_ccnInfosHasBeenSet = true;
}

bool CopyFleetRequest::CcnInfosHasBeenSet() const
{
    return m_ccnInfosHasBeenSet;
}

int64_t CopyFleetRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CopyFleetRequest::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CopyFleetRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}


