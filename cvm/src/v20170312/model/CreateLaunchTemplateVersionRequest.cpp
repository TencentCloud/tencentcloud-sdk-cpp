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

#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

CreateLaunchTemplateVersionRequest::CreateLaunchTemplateVersionRequest() :
    m_placementHasBeenSet(false),
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateVersionHasBeenSet(false),
    m_launchTemplateVersionDescriptionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_actionTimerHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_hpcClusterIdHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_disableApiTerminationHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_templateDataModifyActionHasBeenSet(false)
{
}

string CreateLaunchTemplateVersionRequest::ToJsonString() const
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

    if (m_launchTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_launchTemplateVersion, allocator);
    }

    if (m_launchTemplateVersionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersionDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchTemplateVersionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
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

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTimerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTimer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actionTimer.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceMarketOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMarketOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceMarketOptions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hpcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_disableApiTerminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableApiTermination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableApiTermination, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_templateDataModifyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDataModifyAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateDataModifyAction.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Placement CreateLaunchTemplateVersionRequest::GetPlacement() const
{
    return m_placement;
}

void CreateLaunchTemplateVersionRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetLaunchTemplateId() const
{
    return m_launchTemplateId;
}

void CreateLaunchTemplateVersionRequest::SetLaunchTemplateId(const string& _launchTemplateId)
{
    m_launchTemplateId = _launchTemplateId;
    m_launchTemplateIdHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::LaunchTemplateIdHasBeenSet() const
{
    return m_launchTemplateIdHasBeenSet;
}

int64_t CreateLaunchTemplateVersionRequest::GetLaunchTemplateVersion() const
{
    return m_launchTemplateVersion;
}

void CreateLaunchTemplateVersionRequest::SetLaunchTemplateVersion(const int64_t& _launchTemplateVersion)
{
    m_launchTemplateVersion = _launchTemplateVersion;
    m_launchTemplateVersionHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::LaunchTemplateVersionHasBeenSet() const
{
    return m_launchTemplateVersionHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetLaunchTemplateVersionDescription() const
{
    return m_launchTemplateVersionDescription;
}

void CreateLaunchTemplateVersionRequest::SetLaunchTemplateVersionDescription(const string& _launchTemplateVersionDescription)
{
    m_launchTemplateVersionDescription = _launchTemplateVersionDescription;
    m_launchTemplateVersionDescriptionHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::LaunchTemplateVersionDescriptionHasBeenSet() const
{
    return m_launchTemplateVersionDescriptionHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateLaunchTemplateVersionRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetImageId() const
{
    return m_imageId;
}

void CreateLaunchTemplateVersionRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

SystemDisk CreateLaunchTemplateVersionRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void CreateLaunchTemplateVersionRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> CreateLaunchTemplateVersionRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void CreateLaunchTemplateVersionRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

VirtualPrivateCloud CreateLaunchTemplateVersionRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void CreateLaunchTemplateVersionRequest::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

InternetAccessible CreateLaunchTemplateVersionRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateLaunchTemplateVersionRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

int64_t CreateLaunchTemplateVersionRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateLaunchTemplateVersionRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateLaunchTemplateVersionRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

LoginSettings CreateLaunchTemplateVersionRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateLaunchTemplateVersionRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> CreateLaunchTemplateVersionRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateLaunchTemplateVersionRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

EnhancedService CreateLaunchTemplateVersionRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void CreateLaunchTemplateVersionRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateLaunchTemplateVersionRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetHostName() const
{
    return m_hostName;
}

void CreateLaunchTemplateVersionRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

ActionTimer CreateLaunchTemplateVersionRequest::GetActionTimer() const
{
    return m_actionTimer;
}

void CreateLaunchTemplateVersionRequest::SetActionTimer(const ActionTimer& _actionTimer)
{
    m_actionTimer = _actionTimer;
    m_actionTimerHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::ActionTimerHasBeenSet() const
{
    return m_actionTimerHasBeenSet;
}

vector<string> CreateLaunchTemplateVersionRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateLaunchTemplateVersionRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

vector<TagSpecification> CreateLaunchTemplateVersionRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateLaunchTemplateVersionRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

InstanceMarketOptionsRequest CreateLaunchTemplateVersionRequest::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void CreateLaunchTemplateVersionRequest::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetUserData() const
{
    return m_userData;
}

void CreateLaunchTemplateVersionRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

bool CreateLaunchTemplateVersionRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateLaunchTemplateVersionRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void CreateLaunchTemplateVersionRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void CreateLaunchTemplateVersionRequest::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateLaunchTemplateVersionRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid CreateLaunchTemplateVersionRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateLaunchTemplateVersionRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

bool CreateLaunchTemplateVersionRequest::GetDisableApiTermination() const
{
    return m_disableApiTermination;
}

void CreateLaunchTemplateVersionRequest::SetDisableApiTermination(const bool& _disableApiTermination)
{
    m_disableApiTermination = _disableApiTermination;
    m_disableApiTerminationHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::DisableApiTerminationHasBeenSet() const
{
    return m_disableApiTerminationHasBeenSet;
}

Metadata CreateLaunchTemplateVersionRequest::GetMetadata() const
{
    return m_metadata;
}

void CreateLaunchTemplateVersionRequest::SetMetadata(const Metadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string CreateLaunchTemplateVersionRequest::GetTemplateDataModifyAction() const
{
    return m_templateDataModifyAction;
}

void CreateLaunchTemplateVersionRequest::SetTemplateDataModifyAction(const string& _templateDataModifyAction)
{
    m_templateDataModifyAction = _templateDataModifyAction;
    m_templateDataModifyActionHasBeenSet = true;
}

bool CreateLaunchTemplateVersionRequest::TemplateDataModifyActionHasBeenSet() const
{
    return m_templateDataModifyActionHasBeenSet;
}


