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

#include <tencentcloud/thpc/v20230321/model/CreateWorkspacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

CreateWorkspacesRequest::CreateWorkspacesRequest() :
    m_clientTokenHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_spaceChargePrepaidHasBeenSet(false),
    m_spaceChargeTypeHasBeenSet(false),
    m_spaceTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_spaceCountHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_hpcClusterIdHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_hostNameHasBeenSet(false)
{
}

string CreateWorkspacesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_spaceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spaceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_spaceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceType.c_str(), allocator).Move(), allocator);
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

    if (m_spaceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_spaceCount, allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
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

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
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

    if (m_hpcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hpcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkspacesRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateWorkspacesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateWorkspacesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

SpacePlacement CreateWorkspacesRequest::GetPlacement() const
{
    return m_placement;
}

void CreateWorkspacesRequest::SetPlacement(const SpacePlacement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateWorkspacesRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

SpaceChargePrepaid CreateWorkspacesRequest::GetSpaceChargePrepaid() const
{
    return m_spaceChargePrepaid;
}

void CreateWorkspacesRequest::SetSpaceChargePrepaid(const SpaceChargePrepaid& _spaceChargePrepaid)
{
    m_spaceChargePrepaid = _spaceChargePrepaid;
    m_spaceChargePrepaidHasBeenSet = true;
}

bool CreateWorkspacesRequest::SpaceChargePrepaidHasBeenSet() const
{
    return m_spaceChargePrepaidHasBeenSet;
}

string CreateWorkspacesRequest::GetSpaceChargeType() const
{
    return m_spaceChargeType;
}

void CreateWorkspacesRequest::SetSpaceChargeType(const string& _spaceChargeType)
{
    m_spaceChargeType = _spaceChargeType;
    m_spaceChargeTypeHasBeenSet = true;
}

bool CreateWorkspacesRequest::SpaceChargeTypeHasBeenSet() const
{
    return m_spaceChargeTypeHasBeenSet;
}

string CreateWorkspacesRequest::GetSpaceType() const
{
    return m_spaceType;
}

void CreateWorkspacesRequest::SetSpaceType(const string& _spaceType)
{
    m_spaceType = _spaceType;
    m_spaceTypeHasBeenSet = true;
}

bool CreateWorkspacesRequest::SpaceTypeHasBeenSet() const
{
    return m_spaceTypeHasBeenSet;
}

string CreateWorkspacesRequest::GetImageId() const
{
    return m_imageId;
}

void CreateWorkspacesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateWorkspacesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

SpaceSystemDisk CreateWorkspacesRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void CreateWorkspacesRequest::SetSystemDisk(const SpaceSystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool CreateWorkspacesRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<SpaceDataDisk> CreateWorkspacesRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void CreateWorkspacesRequest::SetDataDisks(const vector<SpaceDataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool CreateWorkspacesRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

SpaceVirtualPrivateCloud CreateWorkspacesRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void CreateWorkspacesRequest::SetVirtualPrivateCloud(const SpaceVirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool CreateWorkspacesRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

SpaceInternetAccessible CreateWorkspacesRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateWorkspacesRequest::SetInternetAccessible(const SpaceInternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateWorkspacesRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

int64_t CreateWorkspacesRequest::GetSpaceCount() const
{
    return m_spaceCount;
}

void CreateWorkspacesRequest::SetSpaceCount(const int64_t& _spaceCount)
{
    m_spaceCount = _spaceCount;
    m_spaceCountHasBeenSet = true;
}

bool CreateWorkspacesRequest::SpaceCountHasBeenSet() const
{
    return m_spaceCountHasBeenSet;
}

string CreateWorkspacesRequest::GetSpaceName() const
{
    return m_spaceName;
}

void CreateWorkspacesRequest::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool CreateWorkspacesRequest::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

LoginSettings CreateWorkspacesRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateWorkspacesRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateWorkspacesRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> CreateWorkspacesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateWorkspacesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateWorkspacesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

EnhancedService CreateWorkspacesRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void CreateWorkspacesRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool CreateWorkspacesRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

bool CreateWorkspacesRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateWorkspacesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateWorkspacesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateWorkspacesRequest::GetUserData() const
{
    return m_userData;
}

void CreateWorkspacesRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateWorkspacesRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<string> CreateWorkspacesRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateWorkspacesRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateWorkspacesRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

vector<TagSpecification> CreateWorkspacesRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateWorkspacesRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateWorkspacesRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string CreateWorkspacesRequest::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void CreateWorkspacesRequest::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool CreateWorkspacesRequest::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

string CreateWorkspacesRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void CreateWorkspacesRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool CreateWorkspacesRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string CreateWorkspacesRequest::GetHostName() const
{
    return m_hostName;
}

void CreateWorkspacesRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool CreateWorkspacesRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}


