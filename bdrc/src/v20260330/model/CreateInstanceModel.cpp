/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/bdrc/v20260330/model/CreateInstanceModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateInstanceModel::CreateInstanceModel() :
    m_sourceInstanceIdHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_stoppedModeHasBeenSet(false),
    m_copyPairIdHasBeenSet(false),
    m_recoveryTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstanceModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceInstanceId") && !value["SourceInstanceId"].IsNull())
    {
        if (!value["SourceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.SourceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInstanceId = string(value["SourceInstanceId"].GetString());
        m_sourceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskModel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("VirtualPrivateCloud") && !value["VirtualPrivateCloud"].IsNull())
    {
        if (!value["VirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.VirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualPrivateCloud.Deserialize(value["VirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("EnhancedService") && !value["EnhancedService"].IsNull())
    {
        if (!value["EnhancedService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.EnhancedService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhancedService.Deserialize(value["EnhancedService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhancedServiceHasBeenSet = true;
    }

    if (value.HasMember("SpotPrice") && !value["SpotPrice"].IsNull())
    {
        if (!value["SpotPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.SpotPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spotPrice = string(value["SpotPrice"].GetString());
        m_spotPriceHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupIds") && !value["DisasterRecoverGroupIds"].IsNull())
    {
        if (!value["DisasterRecoverGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.DisasterRecoverGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DisasterRecoverGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_disasterRecoverGroupIds.push_back((*itr).GetString());
        }
        m_disasterRecoverGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("StoppedMode") && !value["StoppedMode"].IsNull())
    {
        if (!value["StoppedMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.StoppedMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stoppedMode = string(value["StoppedMode"].GetString());
        m_stoppedModeHasBeenSet = true;
    }

    if (value.HasMember("CopyPairId") && !value["CopyPairId"].IsNull())
    {
        if (!value["CopyPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.CopyPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairId = string(value["CopyPairId"].GetString());
        m_copyPairIdHasBeenSet = true;
    }

    if (value.HasMember("RecoveryTime") && !value["RecoveryTime"].IsNull())
    {
        if (!value["RecoveryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstanceModel.RecoveryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryTime = string(value["RecoveryTime"].GetString());
        m_recoveryTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInstanceModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spotPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spotPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stoppedModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppedMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stoppedMode.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoveryTime.c_str(), allocator).Move(), allocator);
    }

}


string CreateInstanceModel::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void CreateInstanceModel::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool CreateInstanceModel::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

string CreateInstanceModel::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateInstanceModel::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateInstanceModel::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

Placement CreateInstanceModel::GetPlacement() const
{
    return m_placement;
}

void CreateInstanceModel::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateInstanceModel::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateInstanceModel::GetImageId() const
{
    return m_imageId;
}

void CreateInstanceModel::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateInstanceModel::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

DiskModel CreateInstanceModel::GetSystemDisk() const
{
    return m_systemDisk;
}

void CreateInstanceModel::SetSystemDisk(const DiskModel& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool CreateInstanceModel::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

InstanceChargePrepaid CreateInstanceModel::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateInstanceModel::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateInstanceModel::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string CreateInstanceModel::GetInstanceType() const
{
    return m_instanceType;
}

void CreateInstanceModel::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateInstanceModel::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<DiskModel> CreateInstanceModel::GetDataDisks() const
{
    return m_dataDisks;
}

void CreateInstanceModel::SetDataDisks(const vector<DiskModel>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool CreateInstanceModel::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

VirtualPrivateCloud CreateInstanceModel::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void CreateInstanceModel::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool CreateInstanceModel::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

InternetAccessible CreateInstanceModel::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateInstanceModel::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateInstanceModel::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string CreateInstanceModel::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceModel::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceModel::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

LoginSettings CreateInstanceModel::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateInstanceModel::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateInstanceModel::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

EnhancedService CreateInstanceModel::GetEnhancedService() const
{
    return m_enhancedService;
}

void CreateInstanceModel::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool CreateInstanceModel::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string CreateInstanceModel::GetSpotPrice() const
{
    return m_spotPrice;
}

void CreateInstanceModel::SetSpotPrice(const string& _spotPrice)
{
    m_spotPrice = _spotPrice;
    m_spotPriceHasBeenSet = true;
}

bool CreateInstanceModel::SpotPriceHasBeenSet() const
{
    return m_spotPriceHasBeenSet;
}

string CreateInstanceModel::GetHostName() const
{
    return m_hostName;
}

void CreateInstanceModel::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool CreateInstanceModel::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string CreateInstanceModel::GetUserData() const
{
    return m_userData;
}

void CreateInstanceModel::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateInstanceModel::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<string> CreateInstanceModel::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateInstanceModel::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateInstanceModel::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

string CreateInstanceModel::GetStoppedMode() const
{
    return m_stoppedMode;
}

void CreateInstanceModel::SetStoppedMode(const string& _stoppedMode)
{
    m_stoppedMode = _stoppedMode;
    m_stoppedModeHasBeenSet = true;
}

bool CreateInstanceModel::StoppedModeHasBeenSet() const
{
    return m_stoppedModeHasBeenSet;
}

string CreateInstanceModel::GetCopyPairId() const
{
    return m_copyPairId;
}

void CreateInstanceModel::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool CreateInstanceModel::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

string CreateInstanceModel::GetRecoveryTime() const
{
    return m_recoveryTime;
}

void CreateInstanceModel::SetRecoveryTime(const string& _recoveryTime)
{
    m_recoveryTime = _recoveryTime;
    m_recoveryTimeHasBeenSet = true;
}

bool CreateInstanceModel::RecoveryTimeHasBeenSet() const
{
    return m_recoveryTimeHasBeenSet;
}

