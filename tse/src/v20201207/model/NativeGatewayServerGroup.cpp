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

#include <tencentcloud/tse/v20201207/model/NativeGatewayServerGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

NativeGatewayServerGroup::NativeGatewayServerGroup() :
    m_groupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodeConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isFirstGroupHasBeenSet(false),
    m_bindingStrategyHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_defaultWeightHasBeenSet(false),
    m_elasticNumberHasBeenSet(false),
    m_supportTOAHasBeenSet(false),
    m_supportIPV6HasBeenSet(false)
{
}

CoreInternalOutcome NativeGatewayServerGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("NodeConfig") && !value["NodeConfig"].IsNull())
    {
        if (!value["NodeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.NodeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeConfig.Deserialize(value["NodeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeConfigHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsFirstGroup") && !value["IsFirstGroup"].IsNull())
    {
        if (!value["IsFirstGroup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.IsFirstGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFirstGroup = value["IsFirstGroup"].GetInt64();
        m_isFirstGroupHasBeenSet = true;
    }

    if (value.HasMember("BindingStrategy") && !value["BindingStrategy"].IsNull())
    {
        if (!value["BindingStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.BindingStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bindingStrategy.Deserialize(value["BindingStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bindingStrategyHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.SubnetIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetIds = string(value["SubnetIds"].GetString());
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("DefaultWeight") && !value["DefaultWeight"].IsNull())
    {
        if (!value["DefaultWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.DefaultWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultWeight = value["DefaultWeight"].GetInt64();
        m_defaultWeightHasBeenSet = true;
    }

    if (value.HasMember("ElasticNumber") && !value["ElasticNumber"].IsNull())
    {
        if (!value["ElasticNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.ElasticNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticNumber = value["ElasticNumber"].GetUint64();
        m_elasticNumberHasBeenSet = true;
    }

    if (value.HasMember("SupportTOA") && !value["SupportTOA"].IsNull())
    {
        if (!value["SupportTOA"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.SupportTOA` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportTOA = value["SupportTOA"].GetBool();
        m_supportTOAHasBeenSet = true;
    }

    if (value.HasMember("SupportIPV6") && !value["SupportIPV6"].IsNull())
    {
        if (!value["SupportIPV6"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroup.SupportIPV6` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportIPV6 = value["SupportIPV6"].GetBool();
        m_supportIPV6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NativeGatewayServerGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isFirstGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFirstGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFirstGroup, allocator);
    }

    if (m_bindingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bindingStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetIds.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultWeight, allocator);
    }

    if (m_elasticNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticNumber, allocator);
    }

    if (m_supportTOAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportTOA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportTOA, allocator);
    }

    if (m_supportIPV6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportIPV6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportIPV6, allocator);
    }

}


string NativeGatewayServerGroup::GetGroupId() const
{
    return m_groupId;
}

void NativeGatewayServerGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool NativeGatewayServerGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string NativeGatewayServerGroup::GetName() const
{
    return m_name;
}

void NativeGatewayServerGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NativeGatewayServerGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NativeGatewayServerGroup::GetDescription() const
{
    return m_description;
}

void NativeGatewayServerGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NativeGatewayServerGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

CloudNativeAPIGatewayNodeConfig NativeGatewayServerGroup::GetNodeConfig() const
{
    return m_nodeConfig;
}

void NativeGatewayServerGroup::SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig)
{
    m_nodeConfig = _nodeConfig;
    m_nodeConfigHasBeenSet = true;
}

bool NativeGatewayServerGroup::NodeConfigHasBeenSet() const
{
    return m_nodeConfigHasBeenSet;
}

string NativeGatewayServerGroup::GetStatus() const
{
    return m_status;
}

void NativeGatewayServerGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NativeGatewayServerGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NativeGatewayServerGroup::GetCreateTime() const
{
    return m_createTime;
}

void NativeGatewayServerGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NativeGatewayServerGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t NativeGatewayServerGroup::GetIsFirstGroup() const
{
    return m_isFirstGroup;
}

void NativeGatewayServerGroup::SetIsFirstGroup(const int64_t& _isFirstGroup)
{
    m_isFirstGroup = _isFirstGroup;
    m_isFirstGroupHasBeenSet = true;
}

bool NativeGatewayServerGroup::IsFirstGroupHasBeenSet() const
{
    return m_isFirstGroupHasBeenSet;
}

CloudNativeAPIGatewayStrategy NativeGatewayServerGroup::GetBindingStrategy() const
{
    return m_bindingStrategy;
}

void NativeGatewayServerGroup::SetBindingStrategy(const CloudNativeAPIGatewayStrategy& _bindingStrategy)
{
    m_bindingStrategy = _bindingStrategy;
    m_bindingStrategyHasBeenSet = true;
}

bool NativeGatewayServerGroup::BindingStrategyHasBeenSet() const
{
    return m_bindingStrategyHasBeenSet;
}

string NativeGatewayServerGroup::GetGatewayId() const
{
    return m_gatewayId;
}

void NativeGatewayServerGroup::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool NativeGatewayServerGroup::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

int64_t NativeGatewayServerGroup::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void NativeGatewayServerGroup::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool NativeGatewayServerGroup::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string NativeGatewayServerGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void NativeGatewayServerGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool NativeGatewayServerGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string NativeGatewayServerGroup::GetSubnetIds() const
{
    return m_subnetIds;
}

void NativeGatewayServerGroup::SetSubnetIds(const string& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool NativeGatewayServerGroup::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

int64_t NativeGatewayServerGroup::GetDefaultWeight() const
{
    return m_defaultWeight;
}

void NativeGatewayServerGroup::SetDefaultWeight(const int64_t& _defaultWeight)
{
    m_defaultWeight = _defaultWeight;
    m_defaultWeightHasBeenSet = true;
}

bool NativeGatewayServerGroup::DefaultWeightHasBeenSet() const
{
    return m_defaultWeightHasBeenSet;
}

uint64_t NativeGatewayServerGroup::GetElasticNumber() const
{
    return m_elasticNumber;
}

void NativeGatewayServerGroup::SetElasticNumber(const uint64_t& _elasticNumber)
{
    m_elasticNumber = _elasticNumber;
    m_elasticNumberHasBeenSet = true;
}

bool NativeGatewayServerGroup::ElasticNumberHasBeenSet() const
{
    return m_elasticNumberHasBeenSet;
}

bool NativeGatewayServerGroup::GetSupportTOA() const
{
    return m_supportTOA;
}

void NativeGatewayServerGroup::SetSupportTOA(const bool& _supportTOA)
{
    m_supportTOA = _supportTOA;
    m_supportTOAHasBeenSet = true;
}

bool NativeGatewayServerGroup::SupportTOAHasBeenSet() const
{
    return m_supportTOAHasBeenSet;
}

bool NativeGatewayServerGroup::GetSupportIPV6() const
{
    return m_supportIPV6;
}

void NativeGatewayServerGroup::SetSupportIPV6(const bool& _supportIPV6)
{
    m_supportIPV6 = _supportIPV6;
    m_supportIPV6HasBeenSet = true;
}

bool NativeGatewayServerGroup::SupportIPV6HasBeenSet() const
{
    return m_supportIPV6HasBeenSet;
}

