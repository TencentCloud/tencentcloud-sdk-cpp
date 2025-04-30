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

#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

CreateLaunchTemplateRequest::CreateLaunchTemplateRequest() :
    m_launchTemplateNameHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_launchTemplateVersionDescriptionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
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
    m_launchTemplateTagSpecificationHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_templateDataModifyActionHasBeenSet(false)
{
}

string CreateLaunchTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
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

    if (m_launchTemplateTagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateTagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_launchTemplateTagSpecification.begin(); itr != m_launchTemplateTagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateLaunchTemplateRequest::GetLaunchTemplateName() const
{
    return m_launchTemplateName;
}

void CreateLaunchTemplateRequest::SetLaunchTemplateName(const string& _launchTemplateName)
{
    m_launchTemplateName = _launchTemplateName;
    m_launchTemplateNameHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::LaunchTemplateNameHasBeenSet() const
{
    return m_launchTemplateNameHasBeenSet;
}

Placement CreateLaunchTemplateRequest::GetPlacement() const
{
    return m_placement;
}

void CreateLaunchTemplateRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateLaunchTemplateRequest::GetImageId() const
{
    return m_imageId;
}

void CreateLaunchTemplateRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string CreateLaunchTemplateRequest::GetLaunchTemplateVersionDescription() const
{
    return m_launchTemplateVersionDescription;
}

void CreateLaunchTemplateRequest::SetLaunchTemplateVersionDescription(const string& _launchTemplateVersionDescription)
{
    m_launchTemplateVersionDescription = _launchTemplateVersionDescription;
    m_launchTemplateVersionDescriptionHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::LaunchTemplateVersionDescriptionHasBeenSet() const
{
    return m_launchTemplateVersionDescriptionHasBeenSet;
}

string CreateLaunchTemplateRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateLaunchTemplateRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

SystemDisk CreateLaunchTemplateRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void CreateLaunchTemplateRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> CreateLaunchTemplateRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void CreateLaunchTemplateRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

VirtualPrivateCloud CreateLaunchTemplateRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void CreateLaunchTemplateRequest::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

InternetAccessible CreateLaunchTemplateRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateLaunchTemplateRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

int64_t CreateLaunchTemplateRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateLaunchTemplateRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string CreateLaunchTemplateRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateLaunchTemplateRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

LoginSettings CreateLaunchTemplateRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateLaunchTemplateRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> CreateLaunchTemplateRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateLaunchTemplateRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

EnhancedService CreateLaunchTemplateRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void CreateLaunchTemplateRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string CreateLaunchTemplateRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateLaunchTemplateRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateLaunchTemplateRequest::GetHostName() const
{
    return m_hostName;
}

void CreateLaunchTemplateRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

ActionTimer CreateLaunchTemplateRequest::GetActionTimer() const
{
    return m_actionTimer;
}

void CreateLaunchTemplateRequest::SetActionTimer(const ActionTimer& _actionTimer)
{
    m_actionTimer = _actionTimer;
    m_actionTimerHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::ActionTimerHasBeenSet() const
{
    return m_actionTimerHasBeenSet;
}

vector<string> CreateLaunchTemplateRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateLaunchTemplateRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

vector<TagSpecification> CreateLaunchTemplateRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateLaunchTemplateRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

InstanceMarketOptionsRequest CreateLaunchTemplateRequest::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void CreateLaunchTemplateRequest::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

string CreateLaunchTemplateRequest::GetUserData() const
{
    return m_userData;
}

void CreateLaunchTemplateRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

bool CreateLaunchTemplateRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateLaunchTemplateRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateLaunchTemplateRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void CreateLaunchTemplateRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string CreateLaunchTemplateRequest::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void CreateLaunchTemplateRequest::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

string CreateLaunchTemplateRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateLaunchTemplateRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid CreateLaunchTemplateRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateLaunchTemplateRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

bool CreateLaunchTemplateRequest::GetDisableApiTermination() const
{
    return m_disableApiTermination;
}

void CreateLaunchTemplateRequest::SetDisableApiTermination(const bool& _disableApiTermination)
{
    m_disableApiTermination = _disableApiTermination;
    m_disableApiTerminationHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::DisableApiTerminationHasBeenSet() const
{
    return m_disableApiTerminationHasBeenSet;
}

vector<TagSpecification> CreateLaunchTemplateRequest::GetLaunchTemplateTagSpecification() const
{
    return m_launchTemplateTagSpecification;
}

void CreateLaunchTemplateRequest::SetLaunchTemplateTagSpecification(const vector<TagSpecification>& _launchTemplateTagSpecification)
{
    m_launchTemplateTagSpecification = _launchTemplateTagSpecification;
    m_launchTemplateTagSpecificationHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::LaunchTemplateTagSpecificationHasBeenSet() const
{
    return m_launchTemplateTagSpecificationHasBeenSet;
}

Metadata CreateLaunchTemplateRequest::GetMetadata() const
{
    return m_metadata;
}

void CreateLaunchTemplateRequest::SetMetadata(const Metadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string CreateLaunchTemplateRequest::GetTemplateDataModifyAction() const
{
    return m_templateDataModifyAction;
}

void CreateLaunchTemplateRequest::SetTemplateDataModifyAction(const string& _templateDataModifyAction)
{
    m_templateDataModifyAction = _templateDataModifyAction;
    m_templateDataModifyActionHasBeenSet = true;
}

bool CreateLaunchTemplateRequest::TemplateDataModifyActionHasBeenSet() const
{
    return m_templateDataModifyActionHasBeenSet;
}


