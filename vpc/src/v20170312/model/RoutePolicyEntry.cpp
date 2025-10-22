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

#include <tencentcloud/vpc/v20170312/model/RoutePolicyEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

RoutePolicyEntry::RoutePolicyEntry() :
    m_routePolicyEntryIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome RoutePolicyEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoutePolicyEntryId") && !value["RoutePolicyEntryId"].IsNull())
    {
        if (!value["RoutePolicyEntryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.RoutePolicyEntryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyEntryId = string(value["RoutePolicyEntryId"].GetString());
        m_routePolicyEntryIdHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyEntry.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutePolicyEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routePolicyEntryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyEntryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyEntryId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string RoutePolicyEntry::GetRoutePolicyEntryId() const
{
    return m_routePolicyEntryId;
}

void RoutePolicyEntry::SetRoutePolicyEntryId(const string& _routePolicyEntryId)
{
    m_routePolicyEntryId = _routePolicyEntryId;
    m_routePolicyEntryIdHasBeenSet = true;
}

bool RoutePolicyEntry::RoutePolicyEntryIdHasBeenSet() const
{
    return m_routePolicyEntryIdHasBeenSet;
}

string RoutePolicyEntry::GetCidrBlock() const
{
    return m_cidrBlock;
}

void RoutePolicyEntry::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool RoutePolicyEntry::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string RoutePolicyEntry::GetDescription() const
{
    return m_description;
}

void RoutePolicyEntry::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RoutePolicyEntry::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RoutePolicyEntry::GetRouteType() const
{
    return m_routeType;
}

void RoutePolicyEntry::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool RoutePolicyEntry::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

string RoutePolicyEntry::GetGatewayType() const
{
    return m_gatewayType;
}

void RoutePolicyEntry::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool RoutePolicyEntry::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string RoutePolicyEntry::GetGatewayId() const
{
    return m_gatewayId;
}

void RoutePolicyEntry::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool RoutePolicyEntry::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

uint64_t RoutePolicyEntry::GetPriority() const
{
    return m_priority;
}

void RoutePolicyEntry::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RoutePolicyEntry::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string RoutePolicyEntry::GetAction() const
{
    return m_action;
}

void RoutePolicyEntry::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool RoutePolicyEntry::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string RoutePolicyEntry::GetCreatedTime() const
{
    return m_createdTime;
}

void RoutePolicyEntry::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RoutePolicyEntry::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string RoutePolicyEntry::GetRegion() const
{
    return m_region;
}

void RoutePolicyEntry::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RoutePolicyEntry::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

