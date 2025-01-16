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

#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

CreateLaunchConfigurationRequest::CreateLaunchConfigurationRequest() :
    m_launchConfigurationNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_instanceTypesCheckPolicyHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hostNameSettingsHasBeenSet(false),
    m_instanceNameSettingsHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_diskTypePolicyHasBeenSet(false),
    m_hpcClusterIdHasBeenSet(false),
    m_iPv6InternetAccessibleHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_imageFamilyHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string CreateLaunchConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceMarketOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMarketOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceMarketOptions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypesCheckPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypesCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceTypesCheckPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTags.begin(); itr != m_instanceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_hostNameSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNameSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostNameSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNameSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceNameSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskTypePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTypePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskTypePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hpcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6InternetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPv6InternetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFamily";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLaunchConfigurationRequest::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void CreateLaunchConfigurationRequest::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetImageId() const
{
    return m_imageId;
}

void CreateLaunchConfigurationRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

uint64_t CreateLaunchConfigurationRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateLaunchConfigurationRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateLaunchConfigurationRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

SystemDisk CreateLaunchConfigurationRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void CreateLaunchConfigurationRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> CreateLaunchConfigurationRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void CreateLaunchConfigurationRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

InternetAccessible CreateLaunchConfigurationRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateLaunchConfigurationRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

LoginSettings CreateLaunchConfigurationRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateLaunchConfigurationRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> CreateLaunchConfigurationRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateLaunchConfigurationRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

EnhancedService CreateLaunchConfigurationRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void CreateLaunchConfigurationRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetUserData() const
{
    return m_userData;
}

void CreateLaunchConfigurationRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateLaunchConfigurationRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceMarketOptionsRequest CreateLaunchConfigurationRequest::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void CreateLaunchConfigurationRequest::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

vector<string> CreateLaunchConfigurationRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void CreateLaunchConfigurationRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void CreateLaunchConfigurationRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetInstanceTypesCheckPolicy() const
{
    return m_instanceTypesCheckPolicy;
}

void CreateLaunchConfigurationRequest::SetInstanceTypesCheckPolicy(const string& _instanceTypesCheckPolicy)
{
    m_instanceTypesCheckPolicy = _instanceTypesCheckPolicy;
    m_instanceTypesCheckPolicyHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceTypesCheckPolicyHasBeenSet() const
{
    return m_instanceTypesCheckPolicyHasBeenSet;
}

vector<InstanceTag> CreateLaunchConfigurationRequest::GetInstanceTags() const
{
    return m_instanceTags;
}

void CreateLaunchConfigurationRequest::SetInstanceTags(const vector<InstanceTag>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

vector<Tag> CreateLaunchConfigurationRequest::GetTags() const
{
    return m_tags;
}

void CreateLaunchConfigurationRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

HostNameSettings CreateLaunchConfigurationRequest::GetHostNameSettings() const
{
    return m_hostNameSettings;
}

void CreateLaunchConfigurationRequest::SetHostNameSettings(const HostNameSettings& _hostNameSettings)
{
    m_hostNameSettings = _hostNameSettings;
    m_hostNameSettingsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::HostNameSettingsHasBeenSet() const
{
    return m_hostNameSettingsHasBeenSet;
}

InstanceNameSettings CreateLaunchConfigurationRequest::GetInstanceNameSettings() const
{
    return m_instanceNameSettings;
}

void CreateLaunchConfigurationRequest::SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings)
{
    m_instanceNameSettings = _instanceNameSettings;
    m_instanceNameSettingsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceNameSettingsHasBeenSet() const
{
    return m_instanceNameSettingsHasBeenSet;
}

InstanceChargePrepaid CreateLaunchConfigurationRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateLaunchConfigurationRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetDiskTypePolicy() const
{
    return m_diskTypePolicy;
}

void CreateLaunchConfigurationRequest::SetDiskTypePolicy(const string& _diskTypePolicy)
{
    m_diskTypePolicy = _diskTypePolicy;
    m_diskTypePolicyHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::DiskTypePolicyHasBeenSet() const
{
    return m_diskTypePolicyHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void CreateLaunchConfigurationRequest::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

IPv6InternetAccessible CreateLaunchConfigurationRequest::GetIPv6InternetAccessible() const
{
    return m_iPv6InternetAccessible;
}

void CreateLaunchConfigurationRequest::SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible)
{
    m_iPv6InternetAccessible = _iPv6InternetAccessible;
    m_iPv6InternetAccessibleHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::IPv6InternetAccessibleHasBeenSet() const
{
    return m_iPv6InternetAccessibleHasBeenSet;
}

vector<string> CreateLaunchConfigurationRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateLaunchConfigurationRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetImageFamily() const
{
    return m_imageFamily;
}

void CreateLaunchConfigurationRequest::SetImageFamily(const string& _imageFamily)
{
    m_imageFamily = _imageFamily;
    m_imageFamilyHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::ImageFamilyHasBeenSet() const
{
    return m_imageFamilyHasBeenSet;
}

string CreateLaunchConfigurationRequest::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void CreateLaunchConfigurationRequest::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

Metadata CreateLaunchConfigurationRequest::GetMetadata() const
{
    return m_metadata;
}

void CreateLaunchConfigurationRequest::SetMetadata(const Metadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CreateLaunchConfigurationRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


