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

#include <tencentcloud/tione/v20211111/model/SmartRouterResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SmartRouterResourceSpec::SmartRouterResourceSpec() :
    m_chargeTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_resourceSupplyAttributeHasBeenSet(false)
{
}

CoreInternalOutcome SmartRouterResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.QueueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = string(value["QueueId"].GetString());
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("ResourceSupplyAttribute") && !value["ResourceSupplyAttribute"].IsNull())
    {
        if (!value["ResourceSupplyAttribute"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceSpec.ResourceSupplyAttribute` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSupplyAttribute.Deserialize(value["ResourceSupplyAttribute"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSupplyAttributeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartRouterResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_queueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_resourceSupplyAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSupplyAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSupplyAttribute.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SmartRouterResourceSpec::GetChargeType() const
{
    return m_chargeType;
}

void SmartRouterResourceSpec::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool SmartRouterResourceSpec::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string SmartRouterResourceSpec::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void SmartRouterResourceSpec::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool SmartRouterResourceSpec::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string SmartRouterResourceSpec::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void SmartRouterResourceSpec::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool SmartRouterResourceSpec::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string SmartRouterResourceSpec::GetZone() const
{
    return m_zone;
}

void SmartRouterResourceSpec::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SmartRouterResourceSpec::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string SmartRouterResourceSpec::GetQueueId() const
{
    return m_queueId;
}

void SmartRouterResourceSpec::SetQueueId(const string& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool SmartRouterResourceSpec::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

int64_t SmartRouterResourceSpec::GetPriority() const
{
    return m_priority;
}

void SmartRouterResourceSpec::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool SmartRouterResourceSpec::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

ResourceSupplyAttribute SmartRouterResourceSpec::GetResourceSupplyAttribute() const
{
    return m_resourceSupplyAttribute;
}

void SmartRouterResourceSpec::SetResourceSupplyAttribute(const ResourceSupplyAttribute& _resourceSupplyAttribute)
{
    m_resourceSupplyAttribute = _resourceSupplyAttribute;
    m_resourceSupplyAttributeHasBeenSet = true;
}

bool SmartRouterResourceSpec::ResourceSupplyAttributeHasBeenSet() const
{
    return m_resourceSupplyAttributeHasBeenSet;
}

