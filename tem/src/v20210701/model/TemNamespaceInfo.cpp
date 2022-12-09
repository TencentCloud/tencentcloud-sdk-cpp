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

#include <tencentcloud/tem/v20210701/model/TemNamespaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

TemNamespaceInfo::TemNamespaceInfo() :
    m_environmentIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_modifyDateHasBeenSet(false),
    m_modifierHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_applicationNumHasBeenSet(false),
    m_runInstancesNumHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_enableTswTraceServiceHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hasAuthorityHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome TemNamespaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vpc") && !value["Vpc"].IsNull())
    {
        if (!value["Vpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Vpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpc = string(value["Vpc"].GetString());
        m_vpcHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("ModifyDate") && !value["ModifyDate"].IsNull())
    {
        if (!value["ModifyDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.ModifyDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyDate = string(value["ModifyDate"].GetString());
        m_modifyDateHasBeenSet = true;
    }

    if (value.HasMember("Modifier") && !value["Modifier"].IsNull())
    {
        if (!value["Modifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Modifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifier = string(value["Modifier"].GetString());
        m_modifierHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("ApplicationNum") && !value["ApplicationNum"].IsNull())
    {
        if (!value["ApplicationNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.ApplicationNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationNum = value["ApplicationNum"].GetInt64();
        m_applicationNumHasBeenSet = true;
    }

    if (value.HasMember("RunInstancesNum") && !value["RunInstancesNum"].IsNull())
    {
        if (!value["RunInstancesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.RunInstancesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstancesNum = value["RunInstancesNum"].GetInt64();
        m_runInstancesNumHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("EnableTswTraceService") && !value["EnableTswTraceService"].IsNull())
    {
        if (!value["EnableTswTraceService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.EnableTswTraceService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTswTraceService = value["EnableTswTraceService"].GetBool();
        m_enableTswTraceServiceHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("HasAuthority") && !value["HasAuthority"].IsNull())
    {
        if (!value["HasAuthority"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.HasAuthority` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasAuthority = value["HasAuthority"].GetBool();
        m_hasAuthorityHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemNamespaceInfo.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemNamespaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpc.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifier.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationNum, allocator);
    }

    if (m_runInstancesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstancesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runInstancesNum, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTswTraceServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTswTraceService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTswTraceService, allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hasAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAuthority, allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

}


string TemNamespaceInfo::GetEnvironmentId() const
{
    return m_environmentId;
}

void TemNamespaceInfo::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool TemNamespaceInfo::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string TemNamespaceInfo::GetChannel() const
{
    return m_channel;
}

void TemNamespaceInfo::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool TemNamespaceInfo::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string TemNamespaceInfo::GetEnvironmentName() const
{
    return m_environmentName;
}

void TemNamespaceInfo::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool TemNamespaceInfo::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string TemNamespaceInfo::GetRegion() const
{
    return m_region;
}

void TemNamespaceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TemNamespaceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TemNamespaceInfo::GetDescription() const
{
    return m_description;
}

void TemNamespaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemNamespaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t TemNamespaceInfo::GetStatus() const
{
    return m_status;
}

void TemNamespaceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TemNamespaceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TemNamespaceInfo::GetVpc() const
{
    return m_vpc;
}

void TemNamespaceInfo::SetVpc(const string& _vpc)
{
    m_vpc = _vpc;
    m_vpcHasBeenSet = true;
}

bool TemNamespaceInfo::VpcHasBeenSet() const
{
    return m_vpcHasBeenSet;
}

string TemNamespaceInfo::GetCreateDate() const
{
    return m_createDate;
}

void TemNamespaceInfo::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool TemNamespaceInfo::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string TemNamespaceInfo::GetModifyDate() const
{
    return m_modifyDate;
}

void TemNamespaceInfo::SetModifyDate(const string& _modifyDate)
{
    m_modifyDate = _modifyDate;
    m_modifyDateHasBeenSet = true;
}

bool TemNamespaceInfo::ModifyDateHasBeenSet() const
{
    return m_modifyDateHasBeenSet;
}

string TemNamespaceInfo::GetModifier() const
{
    return m_modifier;
}

void TemNamespaceInfo::SetModifier(const string& _modifier)
{
    m_modifier = _modifier;
    m_modifierHasBeenSet = true;
}

bool TemNamespaceInfo::ModifierHasBeenSet() const
{
    return m_modifierHasBeenSet;
}

string TemNamespaceInfo::GetCreator() const
{
    return m_creator;
}

void TemNamespaceInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TemNamespaceInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t TemNamespaceInfo::GetApplicationNum() const
{
    return m_applicationNum;
}

void TemNamespaceInfo::SetApplicationNum(const int64_t& _applicationNum)
{
    m_applicationNum = _applicationNum;
    m_applicationNumHasBeenSet = true;
}

bool TemNamespaceInfo::ApplicationNumHasBeenSet() const
{
    return m_applicationNumHasBeenSet;
}

int64_t TemNamespaceInfo::GetRunInstancesNum() const
{
    return m_runInstancesNum;
}

void TemNamespaceInfo::SetRunInstancesNum(const int64_t& _runInstancesNum)
{
    m_runInstancesNum = _runInstancesNum;
    m_runInstancesNumHasBeenSet = true;
}

bool TemNamespaceInfo::RunInstancesNumHasBeenSet() const
{
    return m_runInstancesNumHasBeenSet;
}

string TemNamespaceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void TemNamespaceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool TemNamespaceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string TemNamespaceInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void TemNamespaceInfo::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool TemNamespaceInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

bool TemNamespaceInfo::GetEnableTswTraceService() const
{
    return m_enableTswTraceService;
}

void TemNamespaceInfo::SetEnableTswTraceService(const bool& _enableTswTraceService)
{
    m_enableTswTraceService = _enableTswTraceService;
    m_enableTswTraceServiceHasBeenSet = true;
}

bool TemNamespaceInfo::EnableTswTraceServiceHasBeenSet() const
{
    return m_enableTswTraceServiceHasBeenSet;
}

int64_t TemNamespaceInfo::GetLocked() const
{
    return m_locked;
}

void TemNamespaceInfo::SetLocked(const int64_t& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool TemNamespaceInfo::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

string TemNamespaceInfo::GetAppId() const
{
    return m_appId;
}

void TemNamespaceInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TemNamespaceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TemNamespaceInfo::GetUin() const
{
    return m_uin;
}

void TemNamespaceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TemNamespaceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string TemNamespaceInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void TemNamespaceInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool TemNamespaceInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string TemNamespaceInfo::GetClusterId() const
{
    return m_clusterId;
}

void TemNamespaceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TemNamespaceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<Tag> TemNamespaceInfo::GetTags() const
{
    return m_tags;
}

void TemNamespaceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TemNamespaceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool TemNamespaceInfo::GetHasAuthority() const
{
    return m_hasAuthority;
}

void TemNamespaceInfo::SetHasAuthority(const bool& _hasAuthority)
{
    m_hasAuthority = _hasAuthority;
    m_hasAuthorityHasBeenSet = true;
}

bool TemNamespaceInfo::HasAuthorityHasBeenSet() const
{
    return m_hasAuthorityHasBeenSet;
}

string TemNamespaceInfo::GetEnvType() const
{
    return m_envType;
}

void TemNamespaceInfo::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool TemNamespaceInfo::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

string TemNamespaceInfo::GetRegionId() const
{
    return m_regionId;
}

void TemNamespaceInfo::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool TemNamespaceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

