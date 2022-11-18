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

#include <tencentcloud/as/v20180419/model/UpgradeLaunchConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

UpgradeLaunchConfigurationRequest::UpgradeLaunchConfigurationRequest() :
    m_launchConfigurationIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_instanceTypesCheckPolicyHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_hostNameSettingsHasBeenSet(false),
    m_instanceNameSettingsHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_diskTypePolicyHasBeenSet(false),
    m_iPv6InternetAccessibleHasBeenSet(false)
{
}

string UpgradeLaunchConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
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

    if (m_launchConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
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

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_instanceTypesCheckPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypesCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceTypesCheckPolicy.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
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

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
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

    if (m_iPv6InternetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPv6InternetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeLaunchConfigurationRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void UpgradeLaunchConfigurationRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetImageId() const
{
    return m_imageId;
}

void UpgradeLaunchConfigurationRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

vector<string> UpgradeLaunchConfigurationRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void UpgradeLaunchConfigurationRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void UpgradeLaunchConfigurationRequest::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

vector<DataDisk> UpgradeLaunchConfigurationRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void UpgradeLaunchConfigurationRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

EnhancedService UpgradeLaunchConfigurationRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void UpgradeLaunchConfigurationRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void UpgradeLaunchConfigurationRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceMarketOptionsRequest UpgradeLaunchConfigurationRequest::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void UpgradeLaunchConfigurationRequest::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetInstanceTypesCheckPolicy() const
{
    return m_instanceTypesCheckPolicy;
}

void UpgradeLaunchConfigurationRequest::SetInstanceTypesCheckPolicy(const string& _instanceTypesCheckPolicy)
{
    m_instanceTypesCheckPolicy = _instanceTypesCheckPolicy;
    m_instanceTypesCheckPolicyHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceTypesCheckPolicyHasBeenSet() const
{
    return m_instanceTypesCheckPolicyHasBeenSet;
}

InternetAccessible UpgradeLaunchConfigurationRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void UpgradeLaunchConfigurationRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

LoginSettings UpgradeLaunchConfigurationRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void UpgradeLaunchConfigurationRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

int64_t UpgradeLaunchConfigurationRequest::GetProjectId() const
{
    return m_projectId;
}

void UpgradeLaunchConfigurationRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> UpgradeLaunchConfigurationRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void UpgradeLaunchConfigurationRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

SystemDisk UpgradeLaunchConfigurationRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void UpgradeLaunchConfigurationRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetUserData() const
{
    return m_userData;
}

void UpgradeLaunchConfigurationRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<InstanceTag> UpgradeLaunchConfigurationRequest::GetInstanceTags() const
{
    return m_instanceTags;
}

void UpgradeLaunchConfigurationRequest::SetInstanceTags(const vector<InstanceTag>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void UpgradeLaunchConfigurationRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

HostNameSettings UpgradeLaunchConfigurationRequest::GetHostNameSettings() const
{
    return m_hostNameSettings;
}

void UpgradeLaunchConfigurationRequest::SetHostNameSettings(const HostNameSettings& _hostNameSettings)
{
    m_hostNameSettings = _hostNameSettings;
    m_hostNameSettingsHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::HostNameSettingsHasBeenSet() const
{
    return m_hostNameSettingsHasBeenSet;
}

InstanceNameSettings UpgradeLaunchConfigurationRequest::GetInstanceNameSettings() const
{
    return m_instanceNameSettings;
}

void UpgradeLaunchConfigurationRequest::SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings)
{
    m_instanceNameSettings = _instanceNameSettings;
    m_instanceNameSettingsHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceNameSettingsHasBeenSet() const
{
    return m_instanceNameSettingsHasBeenSet;
}

InstanceChargePrepaid UpgradeLaunchConfigurationRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void UpgradeLaunchConfigurationRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string UpgradeLaunchConfigurationRequest::GetDiskTypePolicy() const
{
    return m_diskTypePolicy;
}

void UpgradeLaunchConfigurationRequest::SetDiskTypePolicy(const string& _diskTypePolicy)
{
    m_diskTypePolicy = _diskTypePolicy;
    m_diskTypePolicyHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::DiskTypePolicyHasBeenSet() const
{
    return m_diskTypePolicyHasBeenSet;
}

IPv6InternetAccessible UpgradeLaunchConfigurationRequest::GetIPv6InternetAccessible() const
{
    return m_iPv6InternetAccessible;
}

void UpgradeLaunchConfigurationRequest::SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible)
{
    m_iPv6InternetAccessible = _iPv6InternetAccessible;
    m_iPv6InternetAccessibleHasBeenSet = true;
}

bool UpgradeLaunchConfigurationRequest::IPv6InternetAccessibleHasBeenSet() const
{
    return m_iPv6InternetAccessibleHasBeenSet;
}


