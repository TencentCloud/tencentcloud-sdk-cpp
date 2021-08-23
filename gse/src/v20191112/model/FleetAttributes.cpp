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

#include <tencentcloud/gse/v20191112/model/FleetAttributes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

FleetAttributes::FleetAttributes() :
    m_assetIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_fleetTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_newGameServerSessionProtectionPolicyHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stoppedActionsHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_gameServerSessionProtectionTimeLimitHasBeenSet(false),
    m_billingStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dataDiskInfoHasBeenSet(false),
    m_systemDiskInfoHasBeenSet(false),
    m_relatedCcnInfosHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false)
{
}

CoreInternalOutcome FleetAttributes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FleetArn") && !value["FleetArn"].IsNull())
    {
        if (!value["FleetArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.FleetArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetArn = string(value["FleetArn"].GetString());
        m_fleetArnHasBeenSet = true;
    }

    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("FleetType") && !value["FleetType"].IsNull())
    {
        if (!value["FleetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.FleetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetType = string(value["FleetType"].GetString());
        m_fleetTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NewGameServerSessionProtectionPolicy") && !value["NewGameServerSessionProtectionPolicy"].IsNull())
    {
        if (!value["NewGameServerSessionProtectionPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.NewGameServerSessionProtectionPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newGameServerSessionProtectionPolicy = string(value["NewGameServerSessionProtectionPolicy"].GetString());
        m_newGameServerSessionProtectionPolicyHasBeenSet = true;
    }

    if (value.HasMember("OperatingSystem") && !value["OperatingSystem"].IsNull())
    {
        if (!value["OperatingSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.OperatingSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingSystem = string(value["OperatingSystem"].GetString());
        m_operatingSystemHasBeenSet = true;
    }

    if (value.HasMember("ResourceCreationLimitPolicy") && !value["ResourceCreationLimitPolicy"].IsNull())
    {
        if (!value["ResourceCreationLimitPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.ResourceCreationLimitPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceCreationLimitPolicy.Deserialize(value["ResourceCreationLimitPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceCreationLimitPolicyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StoppedActions") && !value["StoppedActions"].IsNull())
    {
        if (!value["StoppedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.StoppedActions` is not array type"));

        const rapidjson::Value &tmpValue = value["StoppedActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stoppedActions.push_back((*itr).GetString());
        }
        m_stoppedActionsHasBeenSet = true;
    }

    if (value.HasMember("TerminationTime") && !value["TerminationTime"].IsNull())
    {
        if (!value["TerminationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.TerminationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminationTime = string(value["TerminationTime"].GetString());
        m_terminationTimeHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionProtectionTimeLimit") && !value["GameServerSessionProtectionTimeLimit"].IsNull())
    {
        if (!value["GameServerSessionProtectionTimeLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.GameServerSessionProtectionTimeLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionProtectionTimeLimit = value["GameServerSessionProtectionTimeLimit"].GetUint64();
        m_gameServerSessionProtectionTimeLimitHasBeenSet = true;
    }

    if (value.HasMember("BillingStatus") && !value["BillingStatus"].IsNull())
    {
        if (!value["BillingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.BillingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingStatus = string(value["BillingStatus"].GetString());
        m_billingStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.Tags` is not array type"));

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

    if (value.HasMember("DataDiskInfo") && !value["DataDiskInfo"].IsNull())
    {
        if (!value["DataDiskInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.DataDiskInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDiskInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDiskInfo.push_back(item);
        }
        m_dataDiskInfoHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskInfo") && !value["SystemDiskInfo"].IsNull())
    {
        if (!value["SystemDiskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.SystemDiskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDiskInfo.Deserialize(value["SystemDiskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskInfoHasBeenSet = true;
    }

    if (value.HasMember("RelatedCcnInfos") && !value["RelatedCcnInfos"].IsNull())
    {
        if (!value["RelatedCcnInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.RelatedCcnInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedCcnInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelatedCcnInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedCcnInfos.push_back(item);
        }
        m_relatedCcnInfosHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetAttributes.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FleetAttributes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetArn.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_newGameServerSessionProtectionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewGameServerSessionProtectionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newGameServerSessionProtectionPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCreationLimitPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreationLimitPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceCreationLimitPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppedActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppedActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stoppedActions.begin(); itr != m_stoppedActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_terminationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionProtectionTimeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionProtectionTimeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gameServerSessionProtectionTimeLimit, allocator);
    }

    if (m_billingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingStatus.c_str(), allocator).Move(), allocator);
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

    if (m_dataDiskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDiskInfo.begin(); itr != m_dataDiskInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_systemDiskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDiskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relatedCcnInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedCcnInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedCcnInfos.begin(); itr != m_relatedCcnInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

}


string FleetAttributes::GetAssetId() const
{
    return m_assetId;
}

void FleetAttributes::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool FleetAttributes::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string FleetAttributes::GetCreationTime() const
{
    return m_creationTime;
}

void FleetAttributes::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool FleetAttributes::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string FleetAttributes::GetDescription() const
{
    return m_description;
}

void FleetAttributes::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FleetAttributes::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FleetAttributes::GetFleetArn() const
{
    return m_fleetArn;
}

void FleetAttributes::SetFleetArn(const string& _fleetArn)
{
    m_fleetArn = _fleetArn;
    m_fleetArnHasBeenSet = true;
}

bool FleetAttributes::FleetArnHasBeenSet() const
{
    return m_fleetArnHasBeenSet;
}

string FleetAttributes::GetFleetId() const
{
    return m_fleetId;
}

void FleetAttributes::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool FleetAttributes::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string FleetAttributes::GetFleetType() const
{
    return m_fleetType;
}

void FleetAttributes::SetFleetType(const string& _fleetType)
{
    m_fleetType = _fleetType;
    m_fleetTypeHasBeenSet = true;
}

bool FleetAttributes::FleetTypeHasBeenSet() const
{
    return m_fleetTypeHasBeenSet;
}

string FleetAttributes::GetInstanceType() const
{
    return m_instanceType;
}

void FleetAttributes::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool FleetAttributes::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string FleetAttributes::GetName() const
{
    return m_name;
}

void FleetAttributes::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FleetAttributes::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FleetAttributes::GetNewGameServerSessionProtectionPolicy() const
{
    return m_newGameServerSessionProtectionPolicy;
}

void FleetAttributes::SetNewGameServerSessionProtectionPolicy(const string& _newGameServerSessionProtectionPolicy)
{
    m_newGameServerSessionProtectionPolicy = _newGameServerSessionProtectionPolicy;
    m_newGameServerSessionProtectionPolicyHasBeenSet = true;
}

bool FleetAttributes::NewGameServerSessionProtectionPolicyHasBeenSet() const
{
    return m_newGameServerSessionProtectionPolicyHasBeenSet;
}

string FleetAttributes::GetOperatingSystem() const
{
    return m_operatingSystem;
}

void FleetAttributes::SetOperatingSystem(const string& _operatingSystem)
{
    m_operatingSystem = _operatingSystem;
    m_operatingSystemHasBeenSet = true;
}

bool FleetAttributes::OperatingSystemHasBeenSet() const
{
    return m_operatingSystemHasBeenSet;
}

ResourceCreationLimitPolicy FleetAttributes::GetResourceCreationLimitPolicy() const
{
    return m_resourceCreationLimitPolicy;
}

void FleetAttributes::SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy)
{
    m_resourceCreationLimitPolicy = _resourceCreationLimitPolicy;
    m_resourceCreationLimitPolicyHasBeenSet = true;
}

bool FleetAttributes::ResourceCreationLimitPolicyHasBeenSet() const
{
    return m_resourceCreationLimitPolicyHasBeenSet;
}

string FleetAttributes::GetStatus() const
{
    return m_status;
}

void FleetAttributes::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FleetAttributes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> FleetAttributes::GetStoppedActions() const
{
    return m_stoppedActions;
}

void FleetAttributes::SetStoppedActions(const vector<string>& _stoppedActions)
{
    m_stoppedActions = _stoppedActions;
    m_stoppedActionsHasBeenSet = true;
}

bool FleetAttributes::StoppedActionsHasBeenSet() const
{
    return m_stoppedActionsHasBeenSet;
}

string FleetAttributes::GetTerminationTime() const
{
    return m_terminationTime;
}

void FleetAttributes::SetTerminationTime(const string& _terminationTime)
{
    m_terminationTime = _terminationTime;
    m_terminationTimeHasBeenSet = true;
}

bool FleetAttributes::TerminationTimeHasBeenSet() const
{
    return m_terminationTimeHasBeenSet;
}

uint64_t FleetAttributes::GetGameServerSessionProtectionTimeLimit() const
{
    return m_gameServerSessionProtectionTimeLimit;
}

void FleetAttributes::SetGameServerSessionProtectionTimeLimit(const uint64_t& _gameServerSessionProtectionTimeLimit)
{
    m_gameServerSessionProtectionTimeLimit = _gameServerSessionProtectionTimeLimit;
    m_gameServerSessionProtectionTimeLimitHasBeenSet = true;
}

bool FleetAttributes::GameServerSessionProtectionTimeLimitHasBeenSet() const
{
    return m_gameServerSessionProtectionTimeLimitHasBeenSet;
}

string FleetAttributes::GetBillingStatus() const
{
    return m_billingStatus;
}

void FleetAttributes::SetBillingStatus(const string& _billingStatus)
{
    m_billingStatus = _billingStatus;
    m_billingStatusHasBeenSet = true;
}

bool FleetAttributes::BillingStatusHasBeenSet() const
{
    return m_billingStatusHasBeenSet;
}

vector<Tag> FleetAttributes::GetTags() const
{
    return m_tags;
}

void FleetAttributes::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool FleetAttributes::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<DiskInfo> FleetAttributes::GetDataDiskInfo() const
{
    return m_dataDiskInfo;
}

void FleetAttributes::SetDataDiskInfo(const vector<DiskInfo>& _dataDiskInfo)
{
    m_dataDiskInfo = _dataDiskInfo;
    m_dataDiskInfoHasBeenSet = true;
}

bool FleetAttributes::DataDiskInfoHasBeenSet() const
{
    return m_dataDiskInfoHasBeenSet;
}

DiskInfo FleetAttributes::GetSystemDiskInfo() const
{
    return m_systemDiskInfo;
}

void FleetAttributes::SetSystemDiskInfo(const DiskInfo& _systemDiskInfo)
{
    m_systemDiskInfo = _systemDiskInfo;
    m_systemDiskInfoHasBeenSet = true;
}

bool FleetAttributes::SystemDiskInfoHasBeenSet() const
{
    return m_systemDiskInfoHasBeenSet;
}

vector<RelatedCcnInfo> FleetAttributes::GetRelatedCcnInfos() const
{
    return m_relatedCcnInfos;
}

void FleetAttributes::SetRelatedCcnInfos(const vector<RelatedCcnInfo>& _relatedCcnInfos)
{
    m_relatedCcnInfos = _relatedCcnInfos;
    m_relatedCcnInfosHasBeenSet = true;
}

bool FleetAttributes::RelatedCcnInfosHasBeenSet() const
{
    return m_relatedCcnInfosHasBeenSet;
}

int64_t FleetAttributes::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void FleetAttributes::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool FleetAttributes::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

