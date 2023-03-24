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

#include <tencentcloud/cvm/v20170312/model/LaunchTemplateVersionData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

LaunchTemplateVersionData::LaunchTemplateVersionData() :
    m_placementHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_hpcClusterIdHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_actionTimerHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_disableApiTerminationHasBeenSet(false)
{
}

CoreInternalOutcome LaunchTemplateVersionData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDisk item;
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

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("VirtualPrivateCloud") && !value["VirtualPrivateCloud"].IsNull())
    {
        if (!value["VirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.VirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualPrivateCloud.Deserialize(value["VirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("CamRoleName") && !value["CamRoleName"].IsNull())
    {
        if (!value["CamRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.CamRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_camRoleName = string(value["CamRoleName"].GetString());
        m_camRoleNameHasBeenSet = true;
    }

    if (value.HasMember("HpcClusterId") && !value["HpcClusterId"].IsNull())
    {
        if (!value["HpcClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.HpcClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hpcClusterId = string(value["HpcClusterId"].GetString());
        m_hpcClusterIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("EnhancedService") && !value["EnhancedService"].IsNull())
    {
        if (!value["EnhancedService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.EnhancedService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhancedService.Deserialize(value["EnhancedService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhancedServiceHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupIds") && !value["DisasterRecoverGroupIds"].IsNull())
    {
        if (!value["DisasterRecoverGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.DisasterRecoverGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DisasterRecoverGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_disasterRecoverGroupIds.push_back((*itr).GetString());
        }
        m_disasterRecoverGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("ActionTimer") && !value["ActionTimer"].IsNull())
    {
        if (!value["ActionTimer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.ActionTimer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_actionTimer.Deserialize(value["ActionTimer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionTimerHasBeenSet = true;
    }

    if (value.HasMember("InstanceMarketOptions") && !value["InstanceMarketOptions"].IsNull())
    {
        if (!value["InstanceMarketOptions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InstanceMarketOptions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceMarketOptions.Deserialize(value["InstanceMarketOptions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceMarketOptionsHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("ClientToken") && !value["ClientToken"].IsNull())
    {
        if (!value["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(value["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSpecification.push_back(item);
        }
        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("DisableApiTermination") && !value["DisableApiTermination"].IsNull())
    {
        if (!value["DisableApiTermination"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionData.DisableApiTermination` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableApiTermination = value["DisableApiTermination"].GetBool();
        m_disableApiTerminationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaunchTemplateVersionData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hpcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_actionTimerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTimer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actionTimer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceMarketOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMarketOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceMarketOptions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disableApiTerminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableApiTermination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableApiTermination, allocator);
    }

}


Placement LaunchTemplateVersionData::GetPlacement() const
{
    return m_placement;
}

void LaunchTemplateVersionData::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool LaunchTemplateVersionData::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string LaunchTemplateVersionData::GetInstanceType() const
{
    return m_instanceType;
}

void LaunchTemplateVersionData::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool LaunchTemplateVersionData::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string LaunchTemplateVersionData::GetInstanceName() const
{
    return m_instanceName;
}

void LaunchTemplateVersionData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool LaunchTemplateVersionData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string LaunchTemplateVersionData::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void LaunchTemplateVersionData::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool LaunchTemplateVersionData::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

SystemDisk LaunchTemplateVersionData::GetSystemDisk() const
{
    return m_systemDisk;
}

void LaunchTemplateVersionData::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool LaunchTemplateVersionData::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> LaunchTemplateVersionData::GetDataDisks() const
{
    return m_dataDisks;
}

void LaunchTemplateVersionData::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool LaunchTemplateVersionData::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

InternetAccessible LaunchTemplateVersionData::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void LaunchTemplateVersionData::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool LaunchTemplateVersionData::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

VirtualPrivateCloud LaunchTemplateVersionData::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void LaunchTemplateVersionData::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool LaunchTemplateVersionData::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

string LaunchTemplateVersionData::GetImageId() const
{
    return m_imageId;
}

void LaunchTemplateVersionData::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool LaunchTemplateVersionData::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

vector<string> LaunchTemplateVersionData::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void LaunchTemplateVersionData::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool LaunchTemplateVersionData::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

LoginSettings LaunchTemplateVersionData::GetLoginSettings() const
{
    return m_loginSettings;
}

void LaunchTemplateVersionData::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool LaunchTemplateVersionData::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

string LaunchTemplateVersionData::GetCamRoleName() const
{
    return m_camRoleName;
}

void LaunchTemplateVersionData::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool LaunchTemplateVersionData::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string LaunchTemplateVersionData::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void LaunchTemplateVersionData::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool LaunchTemplateVersionData::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

uint64_t LaunchTemplateVersionData::GetInstanceCount() const
{
    return m_instanceCount;
}

void LaunchTemplateVersionData::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool LaunchTemplateVersionData::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

EnhancedService LaunchTemplateVersionData::GetEnhancedService() const
{
    return m_enhancedService;
}

void LaunchTemplateVersionData::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool LaunchTemplateVersionData::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string LaunchTemplateVersionData::GetUserData() const
{
    return m_userData;
}

void LaunchTemplateVersionData::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool LaunchTemplateVersionData::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<string> LaunchTemplateVersionData::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void LaunchTemplateVersionData::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool LaunchTemplateVersionData::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

ActionTimer LaunchTemplateVersionData::GetActionTimer() const
{
    return m_actionTimer;
}

void LaunchTemplateVersionData::SetActionTimer(const ActionTimer& _actionTimer)
{
    m_actionTimer = _actionTimer;
    m_actionTimerHasBeenSet = true;
}

bool LaunchTemplateVersionData::ActionTimerHasBeenSet() const
{
    return m_actionTimerHasBeenSet;
}

InstanceMarketOptionsRequest LaunchTemplateVersionData::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void LaunchTemplateVersionData::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool LaunchTemplateVersionData::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

string LaunchTemplateVersionData::GetHostName() const
{
    return m_hostName;
}

void LaunchTemplateVersionData::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool LaunchTemplateVersionData::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string LaunchTemplateVersionData::GetClientToken() const
{
    return m_clientToken;
}

void LaunchTemplateVersionData::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool LaunchTemplateVersionData::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

InstanceChargePrepaid LaunchTemplateVersionData::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void LaunchTemplateVersionData::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool LaunchTemplateVersionData::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

vector<TagSpecification> LaunchTemplateVersionData::GetTagSpecification() const
{
    return m_tagSpecification;
}

void LaunchTemplateVersionData::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool LaunchTemplateVersionData::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

bool LaunchTemplateVersionData::GetDisableApiTermination() const
{
    return m_disableApiTermination;
}

void LaunchTemplateVersionData::SetDisableApiTermination(const bool& _disableApiTermination)
{
    m_disableApiTermination = _disableApiTermination;
    m_disableApiTerminationHasBeenSet = true;
}

bool LaunchTemplateVersionData::DisableApiTerminationHasBeenSet() const
{
    return m_disableApiTerminationHasBeenSet;
}

